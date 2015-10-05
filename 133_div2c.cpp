#include <bits/stdc++.h>
using namespace std ;
long long int of[2002];
int main()
{
  	long long int n, m, k;
  	cin >> n >> m >> k;
  	vector<long long int> res;
  	for(long long int i = 0; i < k; i++) 
  		res.push_back(1);
  	if(k==1) 
  	{
    	of[n+1] = 1;
    	for(long long int i=n;i<=m+n;i++)
    	{	 
    		if(of[i+1]) 
    		{
				res.push_back(i);
				of[i+n] += 1;
      		}
    	}
  	} 
  	else 
  	{
    	of[n+1] = k-1;
    	of[2*n] = 1;
    	res.push_back(n);
    	for(long long int i=n+1;i<=m+n;i++)
    	{ 
      		while(of[i]) 
      		{
				res.push_back(i);
				of[i]--;
				of[i+n] += 1;
      		}
  		}
  	}
  	cout << res.size() << "\n";
  	for(long long int i = 0;i<res.size();i++) 
  		cout << res[i] << " ";
  	cout << "\n";
  	return 0 ;
}