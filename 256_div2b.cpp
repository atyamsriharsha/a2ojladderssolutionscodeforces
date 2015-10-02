#include <bits/stdc++.h>
using namespace std ;
const long long int N = 1e5+5;
long long int cnt[30];
char s[N], t[N];
int main()
{
	string s,t ;
	cin >> s >> t ;
	long long int n = s.length();
    long long int m = t.length();
    bool sau = false;
    for(long long int i=0,j=0;i<n;i++)
    {
        if(j<m && s[i]==t[j])
        { 
        	++j;
        }
        if(j==m)
        { 
        	sau = true;
        }
    }
    for(long long int i=0;i<n;i++)
    { 
    	cnt[s[i]-'a']++;
    }
    for(long long int i=0;i<m;i++)
    { 
    	cnt[t[i]-'a']--;
    }
    bool sar = true;
    bool all = true;
    for(long long int i=0;i<26;i++)
    {
        sar&=cnt[i]==0;
        all&=cnt[i]>=0;
    }
    if(sau)
    { 
    	cout<<"automaton";
    } 
    else if(sar)
    {
    	cout<<"array"; 
    }
    else if(all)
    {
    	cout<<"both";
    }
    else
    {
        cout<<"need tree";
    }
	return 0 ;
}