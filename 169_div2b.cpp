#include <bits/stdc++.h>
using namespace std ;
long long int s[26];
int main()
{
	string p ;
	bool flag1 = 1 ;
    cin >> p ;
    long long int n=p.length();
    for(long long int i=0;i<n;i++)
    {
    	s[p[i]-'a']++;
    }
    for(long long int i=0;i<26;i++)
    {
    	s[i]%=2;
    }
    long long int sum1=0;
    for(long long int i=0;i<26;i++)
    {
    	sum1+=s[i];
    }
    while(sum1>=2)
    {   
    	sum1--;
    	flag1=flag1^1;
    }
    if(flag1==1)
    {
    	cout << "First" ;
    }
    else
    {
    	cout << "Second" ;
    }
    return 0;
}