#include <bits/stdc++.h>
using namespace std ;
bool is[(1<<20)];
long long int n,m,a,b;
int main()
{
    cin >> n >> m;
    while(m--)
    {
        cin>>a>>b;
        is[a]=is[b]=1;
    }
    cout << n-1 << endl;
    for(long long int j=1;j<=n;j++)
    {
        if(!is[j])
        {
            for(long long int i=1;i<=n;i++)
                if(i!=j) 
                	cout<<i<<' '<<j<<endl;
            return 0;
        }
    }
}

