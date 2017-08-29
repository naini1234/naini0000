#include <iostream>
using namespace std;

int main() {
	float a=0.0,b=0.0,c=0.0,d=0.0,e=0.0,t=0.0,avg=0.0,p=0.0;
	cout<<"enter the marks of all five subjects\n";
	cin>>a>>b>>c>>d>>e;
	t=a+b+c+d+e;
	avg=t/5;
	p=t/(500)*100;
	cout<<"the total is"<<t<<endl;
	cout<<"the average is"<<avg<<endl;
	cout<<"the percentage is"<<p<<endl;
	return 0;
}