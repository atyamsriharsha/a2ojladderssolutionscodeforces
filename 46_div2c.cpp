#include <bits/stdc++.h>
using namespace std ;
int main()
{
	long long int n,temp ;
	cin >> n ;
	if(n&01)
		cout << "1";
	for(long long int i=n%2;i+1<n;i+=2) 
	{
		if(i!=0)
		{
			cout << " ";
		}
		cout << i+2 << " " << i+1;
	}
	cout << "\n";
	return 0 ;
}