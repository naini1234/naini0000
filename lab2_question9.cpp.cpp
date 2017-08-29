#include <iostream>
#include<cmath>
using namespace std;

int main() {
	float s=0.0,a=0.0;
	cout<<"enter the side of triangle\n";
	cin>>s;
	a=pow(3,0.5)*0.25*s*s;
	cout<<"the area of the triangle is"<<a<<endl;
	return 0;
}