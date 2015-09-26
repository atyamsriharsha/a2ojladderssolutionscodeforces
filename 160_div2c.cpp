#include <bits/stdc++.h>
using namespace std ;

long long int a[100000];
long long int b[100000];

int main()
{
	long long int r=0;
	long long int i,n,m;
	scanf("%lld",&n);
	for(long long int i=0;i<n;i++)
		scanf("%lld",&a[i]);
	scanf("%lld",&m);
	for(long long int i=0;i<m;i++)
		scanf("%lld",&b[i]);
	std::sort(a,a+n);
	std::sort(b,b+m);
	for(long long int i=0;i<m;i++)
	{
		if(i%(a[0]+2)<a[0])
		{
			r+=b[m-i-1];
		}
	}
    cout << r << "\n" ;
}