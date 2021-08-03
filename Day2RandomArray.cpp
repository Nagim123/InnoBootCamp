#include<iostream>
#include<stdlib.h>
#include <chrono>

using namespace std;

int main() {
    int N;
    cin>>N;
    auto t1 = chrono::high_resolution_clock::now();
    int F[N];
    long long S = 0;
    for (int i = 0; i < N; ++i) {
        F[i] = rand();
        cout<<F[i]<<"\n";
        S += F[i];
    }
    double mean = (double)S/N;
    auto t2 = chrono::high_resolution_clock::now();
    cout<<"The mean of that array is :"<<mean<<"\n";
    auto duration = chrono::duration_cast<chrono::nanoseconds>(t2-t1).count();
    cout<<"\nTime taken to execute algorithm:"<<duration<<"\n";
    return 0;
}