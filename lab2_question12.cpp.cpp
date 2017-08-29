#include <iostream>
#include<cmath>
using namespace std;

int main() {
	float p=0.0,r=0.0,n=0.0,t=0.0,a=0.0,e=0.0,x=0.0,y=0.0;
	cout<<"enter the principal, rate (in decimal), no. of times interest is compounded per year, time (in years)\n";
	cin>>p>>r>>t>>n;
	x=1+(r/n);
	y=n*t;
	e=pow(x,y);
	cout<<x<<"^"<<y<<"="<<e;
	a=p*e;
	cout<<"the compound interest is"<<a<<endl;
	
	return 0;
}