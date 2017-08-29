#include <iostream>
using namespace std;

int main() {
	int a=0,b=0,c=0;
	cout<<"enter the two angles of the triangle\n";
	cin>>a>>b;
	c=180-(a+b);
	cout<<"the third angle is"<<c<<endl;
	return 0;
}