#include <iostream>
#include <chrono>

using namespace std;

long long getFibonachi(long long n) {
    if(n <= 2) {
        return 1;
    }
    return getFibonachi(n-1) + getFibonachi(n-2);
}

int main() {
    long long n;
    cin>>n;
    auto t1 = chrono::high_resolution_clock::now();
    cout<< getFibonachi(n);
    auto t2 = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::nanoseconds>(t2-t1).count();
    cout<<"\nTime taken to execute algorithm:"<<duration<<"\n";
    return 0;
}
