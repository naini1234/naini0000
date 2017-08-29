#include <iostream>
using namespace std;

int main() {
	float far=0.0,cel=0.0;
	cout<<"enter the temperature in celsius";
	cin>>cel;
	far=32 + (cel*9.0/5.0);
	cout<<"the temperature in celsius"<<cel<<endl;
	cout<<"the temperature in fahrenheit"<<far<<endl;
	return 0;
}