#include <bits/stdc++.h>
using namespace std ;
int main()
{
	long long int x,a1,a2,b1,y,b2,c1,c2,z ;
	cin >> x >> a1 >> a2 >> b1 >> y >> b2 >> c1 >> c2 >> z ;
	long long int ans1,ans2,ans3 ;
	ans2 = (a1+a2+c1+c2-b1-b2)/2;
	ans3 = (a1+a2+b1+b2-c1-c2)/2 ;
	ans1 = (c1+c2+b1+b2-a1-a2)/2 ;
	cout << ans1 << " " << a1 << " " << a2 << "\n" ;
	cout << b1 << " " << ans2 << " " << b2 << "\n" ;
	cout << c1 << " " << c2 << " " << ans3 << "\n" ;
	return 0 ;
}