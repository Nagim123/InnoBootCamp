#include<bits/stdc++.h>

using namespace std;

int main() {
	cout<<"Type a, b, c\n";
	double a,b,c;
	cin>>a>>b>>c;
	cout<<"Solving "<<a<<"x^2 + " <<b<<"x + "<<c<<"\n";
	double D = b*b-4*a*c;
	if(D < 0) {
		cout<<"No solutions\n";
	} else if (D == 0) {
		cout<<"X = "<<-b/2*a<<"\n";
	} else {
		cout<<"X1 = "<<(-b+sqrt(D))/2*a<<"\n";
		cout<<"X2 = "<<(-b-sqrt(D))/2*a<<"\n";
	}
	return 0;
}

