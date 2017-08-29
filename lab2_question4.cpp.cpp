#include <iostream>
using namespace std;

int main() {
	int d=0,w=0,y=0;
	cout<<"enter number of days\n";
	cin>>d;
	w=d/7;
	d=d%7;
	y=d/365;
	d=d%365;
	cout<<"the number of days"<<d<<endl;
	cout<<"the number of weeks"<<w<<endl;
	cout<<"the number of years"<<y<<endl;
	return 0;
}