#include<iostream>
using namespace std;
long int sum(int n){

if(n==1)
return 1;
else
return n+sum(n-1);
}
int main()
{
	int n;
	cout<<"Enter the number:"<<endl;
	cin>>n;
	long int a=sum(n);
	cout<<"The sum of "<<n<<" is "<<a;
	return 0;
}
