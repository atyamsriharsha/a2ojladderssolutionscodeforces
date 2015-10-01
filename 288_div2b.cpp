#include <bits/stdc++.h>
using namespace std ;

int main()
{
	string st ;
	long long int flag1 = 0 ;
	cin >> st;
    for(long long int i=0;i<st.size();i++)
    {
       if(st[i]%2==0)
       {
         flag1=1;
       }
    }
    if(flag1==0)
    {
      cout<<-1;
      return 0;
    }
    for(long long int i=0;i<st.size();i++)
    {
       if(st[i]<st[st.size()-1]&&st[i]%2==0)
       {
         swap(st[i],st[st.size()-1]);
         cout << st;
         return 0;
       }
    }
    for(long long int i=st.size()-1;i+1;i--)
    {
      	if(st[i]%2==0)
      	{
         	swap(st[i],st[st.size()-1]);
         	cout<<st;
         	return 0;
       	}
    }
	return 0 ;
}