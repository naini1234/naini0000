#include <iostream>
using namespace std;

int main() {
	float cm=0.0,m=0.0,km=0.0;
	cout<<"the length in centimeters is";
	cin>>cm;
	m=cm/100,km=m/1000;
	cout<<"the length in meters is"<<m<<endl;
	cout<<"the length in kilometers is"<<km<<endl;
	return 0;
}