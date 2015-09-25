#include <bits/stdc++.h>
using namespace std ;
int main()
{
	long long int h1,a1,d1 ;
	cin >> h1 >> a1 >> d1 ;
	long long int h2,a2,d2 ;
	cin >> h2 >> a2 >> d2 ;
	long long int h,a,d ;
	cin >> h >> a >> d ;
	long long int ans = 1<<30 ;
	for(long long int i=0;i<210;i++)
	{
		for(long long int j=0;j<210;j++)
		{
			long long int diff1 = a1-d2 ;
			long long int diff2 = a2-d1 ;
			diff1 = diff1+i ;
			diff2 = diff2-j ;
			//cout << diff1 << "this is diff1\n" ;
			//cout << diff2 << "this is diff2\n" ;
			if(diff1<=0)
			{
				continue ;
			}
			if(diff2<0)
			{
				diff2 =0 ;
			}
			long long int val = (h2+diff1-1)/diff1 ;
			long long int hp_needed = val*diff2 ;
			long long int buying_needed = hp_needed-h1+1 ;
			if(buying_needed<0)
			{
				buying_needed =0 ;
			}
			long long int cost = buying_needed*h+i*a+j*d ;
			ans = min(cost,ans) ;
		}
	}
	cout << ans ;
	return 0 ;
}