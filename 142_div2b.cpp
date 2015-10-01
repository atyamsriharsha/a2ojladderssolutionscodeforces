#include <bits/stdc++.h>
using namespace std ;
const int M=1000001;
long long int p[M];
int main()
{
    for(long long int i=2;i<M;i++)
    {
        if(!p[i])
        {
            for(long long int j=i;j<M;j+=i)
            {
                p[j]=i;
            }
        }
    }
    long long int t;
    double k;
    long long int n;
    cin>>t;
    while(t--)
    {
        cin >> n;
        k = sqrt(n);
        cout<< (p[int(k)]==k?"YES\n":"NO\n") ;
    }
}