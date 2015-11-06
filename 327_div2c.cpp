#include <bits/stdc++.h>
using namespace std ;
int main()
{
	long long int n,temp ;
	cin >> n ;
	std::vector<long long int> v,v1;
	v.push_back(0) ;
	v1.push_back(0) ;
	for(long long int i=0;i<n;i++)
	{
		cin >> temp ;
		v.push_back(temp) ;
		v1.push_back(temp) ;
	}
	long long int count1 =0 ;
	while(1)
	{
		bool flag1 = 0 ;
		/*for(long long int i=0;i<n;i++)
		{
			cout << v[i] << " " ;
		}
		cout << "\n" ;
		for(long long int i=0;i<n;i++)
		{
			cout << v1[i] << " " ;
		}
		cout << "\n" ;*/
		std::vector<long long int> q;
		for(long long int i=2;i<=n-1;i++)
		{
			q.clear() ;
			q.push_back(v[i-1]) ;
			q.push_back(v[i]) ;
			q.push_back(v[i+1]) ;
			sort(q.begin(),q.end()) ;
			//cout << v[i-1]<< " " << v[i] << " " << v[i+1] << "\n" ;
			//cout <<q[0]<<" " <<q[1] << " " << q[2] << "\n";
			v1[i]=q[1] ;
		}
		/*for(long long int i=0;i<n;i++)
		{
			cout << v[i] << " " ;
		}
		cout << "\n" ;
		*/
		for(long long int i=0;i<n;i++)
		{
			if(v[i]!=v1[i])
			{
				flag1=1 ;
				break ;
			}
		}
		if(flag1==0)
		{
			cout << count1 << "\n";
			for(long long int i=1;i<=n;i++)
			{
				cout << v[i] << " " ;
			}
			break ;
		}
		else
		{
			count1++ ;
		}
		for(long long int i=0;i<n;i++)
		{
			v[i]=v1[i] ;
		}
		if(count1>1500)
		{
			cout << -1 ;
			break ;
		}
	}
	return 0 ;
}