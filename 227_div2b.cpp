#include <bits/stdc++.h>
using namespace std ;
int main()
{
	long long int n,m,temp ;
	cin >> n >> m ;
	std::vector<long long int> complexity,available;
	for(long long int i=0;i<n;i++)
	{
		cin >> temp ;
		complexity.push_back(temp) ;
	}
	for(long long int i=0;i<m;i++)
	{
		cin >> temp ;
		available.push_back(temp) ;
	}
	long long int rem[m] ;
	for(long long int i=0;i<m;i++)
	{
		rem[i]=-1 ;
	}
	long long int count1 = 0 ;
	sort(complexity.begin(),complexity.end()) ;
	sort(available.begin(),available.end()) ;
	for(long long int i=0;i<n;i++)
	{
		bool flag = 0 ;
		for(long long int j=0;j<m;j++)
		{
			if(available[j]>=complexity[i] && rem[j]==-1)
			{
				rem[j]= 0 ;
				flag = 1 ;
				break ;
			}
		}
		if(flag==0)
		{
			count1++ ;
		}
	}
	cout << count1 ;
	return 0 ;
}