#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,temp,sum1=0,sum2=0,count1=0; 
	cin >> n ;
	std::vector<long long int> v;
	for(long long int i=0;i<n;i++)
	{
		cin >> temp ;
		v.push_back(temp) ;
		sum1+=temp ;
	}
	for(long long int i=0;i<n-1;i++)
	{
		sum2+=v[i] ;
		if(sum2==sum1-sum2)
			count1++ ;
	}
	cout << count1 << "\n" ;
	return 0 ;
}