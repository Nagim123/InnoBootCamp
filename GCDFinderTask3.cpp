#include<cmath>
#include<iostream>

using namespace std;

int gcd(int a,int b) {
	if (b == 0) {
		return a;
	} else {
		return gcd(b, a % b);
	}
}

int main() {
	int x,y;
	cout<<"Type 2 integers:";
	cin>>x>>y;
	cout<<"Greatest common divisor:"<<gcd(x,y);
	return 0;
}

