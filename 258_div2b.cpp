#include <bits/stdc++.h>
using namespace std ;
long long int a[100001];
int main()
{
    long long int n,index1=1,index2;
    cin>>n;
    for(long long int i=1;i<=n;i++)
    {
        cin >> a[i] ;
    }
    for(long long int i=1;i<n;i++)
    {
        if(a[i]>a[i+1]) 
        {
        	index1=i;
        	break;
        }
    }
    bool flag1 = 0 ;
    for(long long int i=index1;i<n;i++)
    {
        if(a[i]<a[i+1])
        {
        	index2=i;
        	flag1=1 ;
        	break;
        }
    }
    if(flag1==0)
    { 
    	index2=n;
    }
    reverse(a+index1,a+index2+1);
    flag1=0;
    for(long long int i=1;i<n;i++)
    {
        if(a[i]>a[i+1])
        { 
        	flag1 = 1 ;
        	break;
        }
    }
    if(flag1==1)
    { 
    	cout<<"no";
    }
    else
    {
        cout<<"yes\n";
        cout<<index1<<" "<<index2<<endl;
    }
} 