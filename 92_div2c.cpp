#include <bits/stdc++.h>
using namespace std ;
char s[1005];
long long int w[26];
long long int d[1005];

int main()
{
    cin >> s ;
    for(long long int i=0;s[i];i++) 
    {
        w[s[i]-'a']++;
    }
    long long int n =strlen(s),c=n-1;
    d[0] = 1;
    for(long long int i=n/2+1;i<=n;i++) 
    {
        for(long long int j=2;j<=i;j++)
        {
            if(i%j==0) 
            {
                if(i==j) 
                {
                    d[i-1]=1; 
                    --c;
                }
                break;
            }
        }
    }
    if(*max_element(w,w+26)>=c) 
    {
        cout << "YES\n" ;
        char v = max_element(w,w+26)-w +'a';
        for(long long int i=0;i<n;i++)
        {
            if(d[i]==0)
            { 
                s[i]=v;
                w[v-'a']--;
            }
        }
        for(long long int i=0;i<n;i++)
        {
            if(d[i]==1) 
            {
                int j;
                for(j=0;j<26;j++)
                {
                    if(w[j])
                    { 
                        break;
                    }
                }
                s[i] = j+'a';
                w[j]--;
            }
        }
        cout << s ;
    } 
    else 
    {
        cout << "NO" ;
    }
    return 0;
}