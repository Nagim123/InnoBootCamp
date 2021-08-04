#include<iostream>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;

vector<vector<int>> graph;
vector<int> shortPathCityOrder;
int countOfCities;

long long get_path_distance(vector<int> path) {
    long long S = 0;
    for(int i = 0; i < countOfCities-2; i++) {
        S += graph[path[i]][path[i+1]];
    }
    return S + graph[path[countOfCities-2]][0];
}

int main() {
    cout<<"Type count of cities:";
    cin>>countOfCities;
    //Preparing matrix for input
    graph.resize(countOfCities);
    for(int i = 0; i < countOfCities; i++) {
        vector<int> temp(countOfCities,0);
        graph[i] = temp;
    }
    cout<<"Type matrix of cities:\n";
    for(int i = 0; i < countOfCities; i++) {
        for(int j = 0; j < countOfCities; j++) {
            int inputDistance;
            cin>>inputDistance;
            graph[i][j] = inputDistance;
            graph[j][i] = inputDistance;
        }
    }
    vector<int> allCityPathCombinations;
    for(int i = 1; i < countOfCities; i++) {
        allCityPathCombinations.push_back(i);
    }
    long long shortestDistance = get_path_distance(allCityPathCombinations)+graph[0][countOfCities-1];
    while(next_permutation(allCityPathCombinations.begin(),allCityPathCombinations.end())) {
        vector<int> currentPath = allCityPathCombinations;
        long long currentDistance = get_path_distance(currentPath)+graph[0][currentPath[0]];
        if(currentDistance < shortestDistance) {
            shortestDistance = currentDistance;
            shortPathCityOrder = currentPath;
        }
    }
    cout<<"The shortest path is: 0 ";
    for(int i = 0; i < countOfCities-1; i++) {
        cout<<shortPathCityOrder[i]<<" ";
    }
    cout<<"0"<<"\nThe distance of that path is:"<<shortestDistance;
    return 0;
}