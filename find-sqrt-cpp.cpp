#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int a,b,c;
	cout<<"Enter number A: ";
	cin>>a;
	cout<<"Enter number B: ";
	cin>>b;
	cout<<"Enter number C: ";
	cin>>c;
	
	float x1,x2;
	float sqr_root = sqrt(b*b-4*a*c);

	x1 = (-b+sqr_root)/(2*a);
	x2 = (-b-sqr_root)/(2*a);
	cout<<"The Square roots of "<<a<<"(x)2+"<<b<<"x+"<<c<<"is: "<<x1<<" and "<<x2;
	return 0;
}
