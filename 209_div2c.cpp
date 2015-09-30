#include <bits/stdc++.h>
using namespace std ;
const long long int mod1 = 1000000007 ;
map<long long int,long long int> k ;

long long int gcd(long long int a,long long int b)
{
	if(b==0)
		return a%mod1 ;
	return gcd(b,a%b)%mod1 ;
}

long long int power(long long int a,long long int b)
{
	long long int ans1 = 1 ;
	while(b!=0)
	{
		if(b&1!=0)
		{
			ans1 = (1LL*ans1*a)%mod1 ;
		}
		a =(1LL*a*a)%mod1 ;
		b = b>>1 ;
	}
	return ans1 ;
}

int main()
{
	long long int n,x,temp,sum1=0 ;
	cin >> n >> x ;
	std::vector<long long int> v;
	for(long long int i=0;i<n;i++)
	{
		cin >> temp ;
		v.push_back(temp) ;
		sum1+=temp ;
	}
	long long int ref  = sum1 ;
	for(long long int i=0;i<n;i++)
	{
		k[sum1-v[i]]=k[sum1-v[i]]+1 ;
		ref = min(ref,sum1-v[i]) ;
	}
	while(1)
	{
		if(k[ref]%x)
		{
			break ;
		}
		k[ref+1] += k[ref]/x ;
		ref++ ;
	}
	ref = min(ref,sum1) ;
	cout << power(x,ref) ;
	return 0 ;
}