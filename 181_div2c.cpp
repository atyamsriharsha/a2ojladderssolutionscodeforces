#include <bits/stdc++.h>
using namespace std ;
#define LL long long
const int mod = (int)1e9 + 7 ;
const int maxn = (int)1e6 + 10;
int rem[maxn] ;

int check(int sum1,int a,int b)
{
	int flag1 = 0 ;
	int temp ;
	//cout << sum1 << " " << a << " " << b << "\n" ;
	while(sum1>0)
	{
		temp = sum1%10 ;
		//cout << temp << " " << a << " " << b << "  this is for debugging\n" ;
		if(temp!=a && temp!=b)
		{
			//cout << "entered here\n" ;
			flag1 = 1 ;
			break ;
		}
		sum1=sum1/10 ;
	}
	//cout << flag1 ;
	if(flag1==1)
		return 0 ;
	//cout << "here it will return 1\n" ;
	return 1 ;
}

int modulusfunc(int a,int b) 
{
    int res = 1;
    while(b>0) 
    {
        if(b&1) 
        {
            res =res*(LL)a% mod;
        }
        a = a*(LL)a%mod;
        b >>= 1;
    }
    return res;
}

int main()
{
	std::vector<int> v;
	int a,b,n,sum1 ;
	cin >> a >> b >> n ;
	rem[0]=1 ;
	int ans1 =0 ;
	for(int i=1;i<=n;i++)
	{
		rem[i] = rem[i - 1] * (LL)(n - i + 1) % mod*(LL)modulusfunc(i,mod - 2) % mod;
		//cout << rem[i] << "\n" ;
	}
	//cout << "yuhoo\n" ;
	for(int i=1;i<=b*n;i++)
	{
		sum1 = i ;
		//cout << sum1 << "this is sum1\n" ;
		if(check(sum1,a,b))
		{
			//cout << "bussu\n" ;
			//cout << i << "\n" ;
			v.push_back(i) ;
		}
	}
	//cout << "hello1" ;
	for(int i=0;i<=n;i++)
	{
		int j = n-i ;
		if(binary_search(v.begin(),v.end(),i*a+j*b))
		{
			ans1+=rem[i] ;
			ans1%=mod ;
			//cout << ans1 << "\n" ;
		}	
	}
	cout << ans1 << "\n" ;
	return 0 ;
}