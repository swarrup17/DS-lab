#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int c,f;
	float n;
	cout<<"Enter the number:";
	cin>>n;
	c= ceil(n);
	f= floor(n);
	cout<<"The required ceiling of "<<n<<" is "<< c<<"\n"<<" and floor is "<< f;
	return 0;
	
}
