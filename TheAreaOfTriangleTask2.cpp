#include<cmath>
#include<iostream>

using namespace std;

int main() {
	cout<<"Type coordinates of triangle (x1,y1) (x2,y2) (x3,y3) :\n";
	double x1,y1,x2,y2,x3,y3;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	//get side's length
	double A = sqrt(abs(x1-x2)*abs(x1-x2) + abs(y1-y2)*abs(y1-y2));
	double B = sqrt(abs(x2-x3)*abs(x2-x3) + abs(y2-y3)*abs(y2-y3));
	double C = sqrt(abs(x3-x1)*abs(x3-x1) + abs(y3-y1)*abs(y3-y1));
	//Check if it exist
	if(A+B>C && B+C>A && C+A>B) {
		//Using heroin method
		double p = (A+B+C)/2;
		double S = sqrt(p*(p-A)*(p-B)*(p-C));
		cout<<"The area of a triangle is "<<S<<"\n";
	} else {
		cout<<"That triange doesn't exist\n";
	}
	return 0;
}

