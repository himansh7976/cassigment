
#include<iostream>
using namespace std;
int add(int a,int b)
{
	int sum;
	sum=a+b;
	cout<<sum;
}
int main()
{
	int a,b;
	cout<<"enetr the value of a and b";
	cin>>a>>b;
	add(a,b);
}
