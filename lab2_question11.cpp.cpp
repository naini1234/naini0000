#include <iostream>
using namespace std;

int main() {
	float p=0.0,r=0.0,t=0.0,sim=0.0;
	cout<<"enter the principal, rate (in percent), time (in years)\n";
	cin>>p>>r>>t;
	sim=p*r*t/100;
	cout<<"the simple interest is"<<sim<<endl;
	return 0;
}