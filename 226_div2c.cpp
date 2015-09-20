#include <bits/stdc++.h>
using namespace std ;
const long long int max1 = 10000000+7 ;
long long int count1[max1] ;
bool rem[max1] ;
long long int cnt[max1] ;
int main()
{
	long long int n,temp,m,l,r ;
	cin >> n ;
	for(long long int i=0;i<n;i++)
	{
		scanf("%lld",&temp) ;
		count1[temp]=count1[temp]+1 ;
	}
	for(long long int i=2;i*i<=max1;i++)
	{
		if(rem[i]==0)
		{
			for(long long int j=i*i;j<=max1;j+=i)
			{
				rem[j] = 1; 
			}
		}
	}
	for(long long int i=2;i<=max1;i++)
	{
        cnt[i]=cnt[i - 1];
        if(!rem[i])
        {
            for(long long int j=i;j<=max1;j+=i)
            {
                cnt[i]+=count1[j];
            }
        }
    }
	cin >> m ;
	for(long long int i=0;i<m;i++)
	{
		scanf("%lld%lld",&l,&r) ;
		cout << cnt[min(max1,r)]-cnt[min(max1,l-1)] << "\n" ;
	}
	return 0 ;
}