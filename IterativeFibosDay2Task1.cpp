#include <iostream>
#include <chrono>

using namespace std;

int main() {
    long long n;
    cin>>n;
    auto t1 = chrono::high_resolution_clock::now();
    long long F[n];
    F[0] = 1;
    F[1] = 1;
    for (int i = 2; i < n; i++) {
        F[i] = F[i-1]+F[i-2];
    }
    cout<<F[n-1];
    auto t2 = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::nanoseconds>(t2-t1).count();
    cout<<"\nTime taken to execute algorithm:"<<duration<<"\n";
    return 0;
}