#include <bits/stdc++.h>
using namespace std ;

int main()
{
	long long int a;
	cin>>a;
	vector<int> v;
	for(long long int j=2;j*j<=a;j++)
	{
		while(a%j==0)
		{
			v.push_back(j);
			a/=j;
		}
	}
	if(a!=1)
	{ 
		v.push_back(a);
	}
	if(v.size()==2)
	{ 
		cout << 2 << "\n" ;
	}
	else 
	{
		if(v.size()<=1)
		{ 
			cout << 1 << "\n" << 0 << "\n" ;
		}
		else
		{
			cout << 1 << "\n" ;
			cout<<v[0]*v[1]<<endl;
		}
	}
	return 0 ;
}