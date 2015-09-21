#include <bits/stdc++.h>
using namespace std ;

int main()
{
	long long int n,d,temp ;
	cin >> n >> d ;
	std::vector<long long int> v;
	v.push_back(0) ;
	for(long long int i=0;i<n;i++)
	{
		cin >> temp ;
		v.push_back(temp) ;
	}
	long long int low = 1,count1=0 ;
	for(long long int i=1;i<=n;i++)
	{
		while(low<n)
		{
			if(v[low+1]-v[i]<=d)
				low++;
			else
				break ;
		}
		count1+= ((low-i)*(low-i-1))/2 ;
	}
	cout << count1 << "\n" ;
	return 0 ;
}