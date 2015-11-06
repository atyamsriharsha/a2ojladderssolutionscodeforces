#include <bits/stdc++.h>
using namespace std ;
std::vector<string> v;
set<long long int> s1 ;
long long int a[10000] ;
int main()
{
	string temp ;
	long long int n ;
	cin >> n ;
	for(long long int i=0;i<n;i++)
	{
		cin >> temp ;
		s1.clear();
		for(long long int j=0;j<temp.size();j++)
		{
			s1.insert(temp[j]-'a'+1) ;
		}
		if(s1.size()<=2)
		{
			long long int sum1 =0,count1=0,q[2]={0,0} ;
			for(std::set<long long int>::iterator it=s1.begin();it!=s1.end();++it)
			{
				long long int p = *it ;
				q[count1]=p ;
				count1++ ;
			}
			if(q[1]>0)
				sum1 = q[0]*100+q[1] ;
			else
				sum1 = q[0] ;
			//cout << sum1 ;
			if(a[sum1]==0)
				a[sum1]=temp.size() ;
		}
		else
		{
			cout << "hello" ;
			for(set<long long int>::iterator it=s1.begin();it!=s1.end();it++ )
			{
				long long int har1 = *it ;
				a[har1-'a'+1]=-1 ;
				for(set<long long int>::iterator it1=s1.begin();it1!=s1.end();it1++)
				{
					long long int har2 = *it1 ;
					if(har2!=har1)
					{
						a[(har1)*100+(har2)]=-1 ;
						a[(har2)*100+(har1)]=-1 ;
					}
				}
			}
			cout << "you" ;
		}
	}
	for(long long int i=0;i<2626+1;i++)
	{
		if(a[i]>0)
		{
			cout << i << " " << a[i] << "\n" ;
		}
	}
	long long int ans =-1 ;
			for(long long int j=27;j<2627;j++)
			{
				if(a[j]>0)
				{
					if(j>999)
					{
						long long int temp34 = j/100 ;
						long long int temp33 = j%100 ;
						cout << temp33 <<" "<< temp34 << "\n" ; 
						if(a[temp33]>0 || a[temp34]>0)
						{
							ans = max(ans,a[j]+a[temp34]+a[temp33]) ;
						}
					}
					else
					{
						long long int temp34 = j/100 ;
						long long int temp33 = j%100 ;
						cout << temp33 <<" "<< temp34 << "\n" ; 
						if(a[temp33]>0 || a[temp34]>0)
						{
							ans = max(ans,a[j]+a[temp34]+a[temp33]) ;
						}
					}
				}
			}
	cout << ans << "\n" ;
	return 0 ;
}