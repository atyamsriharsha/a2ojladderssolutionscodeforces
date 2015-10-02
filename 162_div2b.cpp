#include <bits/stdc++.h>
using namespace std ;
int main()
{    
    long long int N,ans=0,temp;
    std::vector<long long int> arr;
    cin >> N ;
    for(long long int i=0;i<N;i++)
    {
    	cin >> temp ;
    	arr.push_back(temp) ;
    }
    ans+=arr[0];
    ans+=N+N-1;
    for(long long int i=1;i<N;i++)
    {
		ans+=abs(arr[i]-arr[i-1]);
    }	
	cout << ans << "\n" ;
}
