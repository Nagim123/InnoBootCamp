#include<cmath>
#include<iostream>

using namespace std;

int main() {
	double a,b,c;
	cout<<"Type sides of triangle:\n";
	cin>>a>>b>>c;
	if(a+b>c && a+c>b && b+c>a) {
		cout<<"This triangle exists\n";
	} else {
		cout<<"This triangle doesn't exist\n";
	}
	return 0;
}

