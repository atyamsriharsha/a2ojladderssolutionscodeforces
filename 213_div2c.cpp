#include <bits/stdc++.h>
using namespace std ;

char x[4500];
long long int a,s[4500];
long long int v[4500*4500],nv=0;
int main()
{
    cin >> a >> x;
    int len=strlen(x);
    s[0] = x[0]-'0';
    for(int i=1;i<len;++i)
    {
        s[i]=s[i-1]+x[i]-'0';
    }
    if(a==0)
    {
        long long int nzero=0,all=0;
        for(int i=0;i<len;++i)
        {
        	for(int j=i;j<len;++j)
        	{
            	long long t = s[j]-s[i]+x[i]-'0';
            	if(t==0)
                	++nzero;
            	++all;
        	}
        }
        cout << (all-nzero)*nzero + nzero*all << "\n";
        return 0;
    }
    for(int i=0;i<len;++i)
    {
    	for(int j=i;j<len;++j)
    	{
        	long long t = s[j]-s[i]+x[i]-'0';
        	if(t==0 || a%t)
        		continue;
        	v[nv++] = t;
    	}
    }
    sort(v,v+nv);
    long long int cnt = 0;
    for(int i=0;i<nv;++i)
    {
    	if(a%v[i]==0)
    	{
        	long long r = a/v[i];
        	cnt += upper_bound(v,v+nv,r)-lower_bound(v,v+nv,r);
    	}
    }
    cout << cnt << endl;
    return 0;
}