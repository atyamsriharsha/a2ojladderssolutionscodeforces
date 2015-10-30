#include <bits/stdc++.h>
using namespace std ;
const long long int maxN=100000+10;

char s[maxN];
long long int n,d[maxN];
long long int st[maxN],ns,bot;

int main()
{
    scanf("%s",s+1); 
    n=strlen(s+1);
    d[0]=0;
    for(long long int i=1;i<=n;i++)
    { 
    	d[i]=d[i-1]+(s[i]=='[');
    }
    ns=0; 
    bot=1; 
    st[0]=0;
    long long int res=-1,u=0,v=0,i=1,j=1,cc;
    while(i<=n&&j<=n)
    {
        while(j<=n&&s[j]==']'||s[j]==')')
        { 
        	j++;
        }
        if(j>n)
        { 
        	break;
        }
        if(s[i]=='(')
        { 
        	st[++ns]=i;
        	i++;
        }
        else if(s[i]=='[')
        { 
        	st[++ns]=-i;
        	i++;
        }
        else if(s[i]==')')
        {
            if(ns==0||st[ns]<0)
            {
            	ns=0; 
            	st[ns]=i; 
            	j=++i; 
            	continue;
            }
            cc=abs(st[--ns])+1;
            if(d[i]-d[cc-1]>res)
            {
             	res=d[i]-d[cc-1];
             	u=cc;
             	v=i-cc+1;
            }
            i++;
        }
        else if(s[i]==']')
        {
            if(ns==0||st[ns]>0)
            {
            	ns=0; 
            	st[ns]=i; 
            	j=++i; 
            	continue;
            }
            cc=abs(st[--ns])+1;
            if(d[i]-d[cc-1]>res)
            { 
            	res=d[i]-d[cc-1];
            	u=cc;
            	v=i-cc+1;
            }
            i++;
        }
    }
    s[u+v]=0;
    if(res==-1)
    { 
     	cout << 0 << "\n" ;
    }
    else
    { 
    	cout << res << "\n" << s+u << "\n" ;
    }
    return 0;
}