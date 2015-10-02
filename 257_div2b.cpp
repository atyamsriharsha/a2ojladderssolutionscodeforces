#include <bits/stdc++.h>
using namespace std ;
const long long int mod1 = 1000000000+7;
long long int a[6];
int main()
{
    long long int n;
    cin >> a[0] >> a[1] >> n;
    n =(n-1)%6;
    a[2]=a[1]-a[0];
    a[3]=a[3]-a[0];
    a[4]=a[4]-a[1];
    a[5]=a[5]-a[2];
    cout<<(a[n]%mod1+mod1)%mod1 ;
}