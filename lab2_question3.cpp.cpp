#include <iostream>
using namespace std;

int main() {
	float far=0.0,cel=0.0;
	cout<<"enter the temperature in fahrenheit";
	cin>>far;
	cel=(far-32)*5/9;
	cout<<"the temperature in fahrenheit"<<far<<endl;
	cout<<"the temperature in celsius"<<cel<<endl;
	return 0;
}