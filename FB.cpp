#include<iostream>
using namespace std;
int main()
{
	freopen("alchemy_input.txt","r",stdin);
	freopen("alchemy_output.txt","w",stdout);
	long test;cin>>test;
	long h=1;
	while(test--)
	{
		long n;
		cin>>n;
		string S;
		cin>>S;
		long a=0,b=0;
		for(int i=0;i<n;i++)
		{
		if(S[i]=='A')
		a++;
		else
		b++;
		}
		cout<<"Case #"<<h<<": ";
		if(a==(b+1) || b==(a+1))
		cout<<"Y\n";
		else
		cout<<"N\n";
		h++;
	}
}

