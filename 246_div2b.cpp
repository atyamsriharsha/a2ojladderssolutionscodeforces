#include <bits/stdc++.h>
using namespace std ;
const long long int max1 = 200000+7 ;
long long int x1[max1],x2[max1],count1[max1];
int main()
{
	long long int n,ans ;
	cin>>n;
	for(long long int i=1;i<=n;i++)
	{
 		cin >> x1[i] >> x2[i];
 		count1[x1[i]]++;
	}
	for(long long int i=1;i<=n;i++)
	{
 		ans=n-1;
 		ans+=count1[x2[i]];
 		cout << ans <<" "<< n*2-2-ans << "\n";
	}
	return 0 ;
}