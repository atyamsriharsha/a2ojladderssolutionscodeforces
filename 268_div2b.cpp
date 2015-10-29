#include <bits/stdc++.h>
using namespace std ;
int main()
{
	long long int p,q,l,r ;
	cin >> p >> q >> l >> r ;
	vector<pair<long long int,long long int> >one_timings,second_timings ;

	long long int temp1,temp2 ;
	for(long long int i=0;i<p;i++)
	{
		cin >> temp1 >> temp2 ;
		one_timings.push_back(make_pair(temp1,temp2)) ;
	}
	for(long long int i=0;i<q;i++)
	{
		cin >> temp1 >> temp2 ;
		second_timings.push_back(make_pair(temp1,temp2)) ;
	}
	sort(one_timings.begin(),one_timings.end()) ;
	sort(second_timings.begin(),second_timings.end()) ;
	long long int res = 0;
    for(long long int i = l; i <= r; i++) 
    {
        long long int j = 0;
        long long int k = 0;
        while(j<(int)one_timings.size() && k<(int)second_timings.size()) 
        {
            if(one_timings[j].first > second_timings[k].second+i) 
            {
                k++;
            } 
            else if(second_timings[k].first + i > one_timings[j].second) 
            {
                j++;
            } 
            else 
            {
                res++;
                break;
            }
        }
    }
    cout << res ;
	return 0 ;
}