#include <bits/stdc++.h>
using namespace std ;
long long int a[7][7] ;
long long int arr[7]={0,1,2,3,4,5,6} ;
string names[]={"Anka","Chapay","Cleo","Troll","Dracul","Snowy","Hexadecimal"};

long long int find1(string s)
{
	for(long long int i=0;i<7;i++)
	{
		if(s==names[i])
			return i ;
	}
}

long long int ans(long long int ref1,long long int ref2)
{
	std::vector<long long int> v1;
	long long int count1 = 0 ;
	for(long long int i=ref1;i<ref2;i++)
	{
		v1.push_back(arr[i]) ;
	}
	for(long long int i=0;i<v1.size();i++)
	{
		for(long long int j=0;j<7;j++)
		{
			if(a[v1[i]][j]==1)
			{
				if(find(v1.begin(),v1.end(),j)!=v1.end())
				{
					count1++ ;
				}
			}
		}
	}
	return count1 ;
}

int main()
{
	long long int n,one,two,three ;
	cin >> n ;
	string s1,s2,s3 ;
	for(long long int i=0;i<n;i++)
	{
		cin >> s1 >> s2 >> s3 ;
		long long int x = find1(s1) ;
		long long int y = find1(s3) ;
		//cout << x << " " << y << "\n" ;
		a[x][y]=1 ;
		//cout << s ;
	}
	cin >> one >> two >> three ;
	long long int res = 2e9 ;
	//cout << res ;
	long long int ref1,ref2 ;
	for(long long int i=1;i<=5;i++)
	{
		for(long long int j=1;j<=5;j++)
		{
			if(7-i-j>=1)
			{
				//cout << "hello" ;
				long long int temp1 = one/i ;
				long long int temp2 = two/j ;
				long long int temp3 = three/(7-(i+j)) ;
				long long int max1 = max(temp1,max(temp2,temp3)) ;
				long long int min1 = min(temp1,min(temp2,temp3)) ;
				long long int ans = max1-min1 ;
				if(res>=ans)
				{
					res = ans ;
					ref1 =i ;
					ref2 = j ;
				}
			}
		}
	}
	// cout << ref1 << " " << ref2 << "\n" ;
	cout << res << " ";
	long long int finalans =-1 ;
	finalans = 0;
	do
	{
		long long int result = ans(0,ref1)+ans(ref1,ref1+ref2)+ans(ref1+ref2,7) ;
		//cout << result << "\n" ;
		//finalans = max(finalans,result) ;
		if(result>finalans)
		{
			finalans = result;
		}
		//cout << "this is result " << result << "\n" ;
		//
	}while(next_permutation(arr,arr+7));
	cout << finalans << endl;
	return 0 ;
}