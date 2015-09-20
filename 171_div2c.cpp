#include <bits/stdc++.h>
using namespace std ;
const long long int max1 = 100000+7 ;
long long int n,m,temp1,q,temp2 ;
long long int a[max1+1],l[max1+1],r[max1+1] ;
int main()
{
	cin >> n >> m ;
	for(long long int i=1;i<=n;i++)
	{
		cin >> a[i] ;
	}
	r[n] = n ;
	for(long long int i=n-1;i>=1;i--)
	{
		if(a[i]<=a[i+1])
			r[i]=r[i+1] ;
		else
			r[i] =i ;
	}
	l[1]=1 ;
	for(long long int i=2;i<=n;i++)
	{
		if(a[i]<=a[i-1])
			l[i]=l[i-1] ;
		else
			l[i]=i ; 
	}
	//cin >> q ; // no of queries
	for(long long int i=1;i<=m;i++)
	{
		cin >> temp1 >> temp2 ;
		if(r[temp1]>=l[temp2])
			cout << "Yes\n" ;
		else
			cout << "No\n" ;
	}
	return 0 ;
}