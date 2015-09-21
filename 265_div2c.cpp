#include <bits/stdc++.h>
using namespace std ;
	
int main()
{
	int n,p;
	string A ;
   	cin >> n >> p >> A ;
   	int i=n-1;
   	while(i>=0 && i<n)
   	{
        A[i]++;
        if(A[i]-96>p)
        {
            A[i]=96;
            i--;
            continue;
        }
        if(i>0 && A[i]==A[i-1])
            continue;
        if(i>1 && A[i]==A[i-2])
            continue;
        i++;
   	}
   	if(i<0)
    	cout << "NO\n" ;
   	else
   		cout << A << "\n" ;
    return 0;
}