#include<iostream>
using namespace std;
int main()
{
int tc;
cin>>tc;
while(tc--)
{
	double n;
	cin>>n;
	double x=0;
	while(x<=1e18)
	{
		if(n==x)
		{
			cout<<"YES"<<endl;
			break;
		}
		else if(n!=x && x==0)
		x=x+1;
		else 
		x=x+x;
	}
	if(x>=1e18)
	cout<<"NO"<<endl;
}
}
