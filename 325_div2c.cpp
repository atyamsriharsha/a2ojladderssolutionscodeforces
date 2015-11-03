#include <bits/stdc++.h>
using namespace std ;
int main() 
{
    std::ios::sync_with_stdio(false);
    long long int n;
    cin>>n;
    vector<long long int> v(n),d(n),c(n);
    for(long long int i=0;i<n;i++)
    {
        cin>>v[i]>>d[i]>>c[i];
    }
    std::vector<long long int> fa,vis(n,0);
    for(long long int i=0;i<n;i++)
    {
        if(c[i]>=0) 
        {
            fa.push_back(i+1);
            long long int cur = v[i];
            long long int  other = 0;
            for(long long int j=i+1;j<n;j++)
            {
                if(vis[j] == 1)
                    continue;
                c[j]-=cur+other;
                if(c[j]<0) 
                {
                    vis[j] = 1;
                    other+=d[j];
                }
                if(cur!=0)
                    cur--;
            }
        }
    }
    cout<<fa.size()<<endl;
    for(long long int i=0;i<fa.size();i++)
        cout<<fa[i]<<" ";
    return 0;
}