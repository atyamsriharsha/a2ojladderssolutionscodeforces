#include <bits/stdc++.h>
using namespace std ;
long long int v[100000+7];
long long int presum[100000+7] ;
int main()
{
	long long int n,k,temp,k1,count1=0,max1=-1,index1,i ;
	cin >> n >> k ;
	for(long long int i=1;i<=n;i++)
	{
		cin >> temp ;
		v[i]=temp ;
		presum[i]=0 ;
	}
	sort(v+1,v+n+1) ;
	for(long long int i=1;i<=n;i++)
	{
		presum[i]=presum[i-1]+v[i] ;
	}
	long long int best =0,worst=-100000000 ;
	for(long long int i=1;i<=n;i++)
	{
		long long int l=1,r=i,res=i ;
		while(l<=r)
		{
			long long int mid = (l+r)/2 ;
			if(v[i]*(i-mid+1LL)-(presum[i]-presum[mid-1])<=k)
			{
				res = mid ;
				r = mid-1 ;
			}
			else
				l = mid+1 ;
		}
		long long int len = i-res+1 ;
		if(len>best)
		{
			best = len ;
			worst = v[i] ;
		}
	}
	cout << best << " "<< worst <<"\n" ;
	return 0 ;
}