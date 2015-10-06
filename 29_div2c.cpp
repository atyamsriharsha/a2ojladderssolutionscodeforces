#include <bits/stdc++.h>
using namespace std ;
long long int n, a, b;
vector<long long int> V;
map<long long int,long long int> M1;
map<long long int,long long int>::iterator it;
map<long long int,pair<long long int,long long int> > M2;
int main()
{
    cin >> n ;
    for(long long int i =1;i<=n;++i)
    {
        cin >> a >> b ;
        M1[a]++; 
        M1[b]++;
        if(M2[a].first==0) 
        	M2[a].first = b;
        else
        	M2[a].second = b;
        if(M2[b].first==0) 
        	M2[b].first = a;
        else 
        	M2[b].second = a;
    }
    long long int u = -1,v = -1,par = 0;
    for(it = M1.begin(); it != M1.end(); it++)
    {
        if((*it).second == 1)
        {
            u = (*it).first;
        }
    }
    V.push_back(u);
    for(long long int i =1;i<=n;++i)
    {
        v = M2[u].first;
        if(v == par) 
        	v = M2[u].second;
        par = u;
        u = v;
        V.push_back(u);
    }
    for(long long int i =0;i<V.size();++i) 
    	cout << V[i] << " " ;
    return 0;
}