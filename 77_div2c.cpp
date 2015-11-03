#include <bits/stdc++.h>
using namespace std ;
long long int n ;
std::vector<string> v;
string original ;
char letter ;
int main()
{
	long long int rem[111] ;
	memset(rem,0,sizeof(rem)) ;
	string temp ;
	cin >> n ;
	for(long long int i=0;i<n;i++)
	{
		cin >> temp ;
		v.push_back(temp) ;
	}
	cin >> original ;
	cin >> letter ;
	for(long long int i=0;i<n;i++)
	{
		//cout << original.size()-v[i].size() << "\n";
		for(long long int j=0;j<=int(original.size())-int(v[i].size());j++)
		{
			string ref1 = original.substr(j,v[i].size()) ;
			string ref2 = v[i] ;
			bool flag = 0 ;
			for(long long int p=0;p<ref1.size();p++)
			{
				if(tolower(ref1[p])!=tolower(ref2[p]))
				{
					flag = 1 ;
					break ;
				}
			}
			if(flag==0)
			{
				for(long long int k=0;k<v[i].size();k++)
				{
					rem[j+k]=1 ;
				}
			}
		}
	}
	for(long long int i=0;i<original.size();i++)
	{
		if(rem[i]!=0)
		{
			char temp1 = tolower(original[i]) ;
			if(temp1!=letter)
			{
				temp1 = letter ;
			}
			else
			{
				if(temp1=='a')
				{
					temp1='b' ;
				}
				else
				{
					temp1 = 'a' ;
				}
			}
			original[i]=isupper(original[i])?toupper(temp1):temp1 ;
		}
	}
	cout << original << "\n" ;
	return 0 ;
}