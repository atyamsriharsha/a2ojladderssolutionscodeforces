#include <bits/stdc++.h>
using namespace std ;
int A[100001];
int main()
{
	int N,l,r,Ql,Qr;
    cin >> N >> l >> r >> Ql >> Qr ;
    for(int i=0;i<N;i++)
    	cin >> A[i+1] ;
    for(int i=1;i<=N;i++)
    	A[i]+=A[i-1];
    int ans=1<<30;
    for(int i=0;i<=N;i++)
    {
        int lf=i;
        int rf=N-i;
        int pp=A[i]*l+(A[N]-A[i])*r;
        int dif=max(0,abs(rf-lf)-1);
        if(lf>rf)
        	pp+=Ql*dif;
        else 
        	pp+=Qr*dif;
        ans=min(ans,pp);
    }
    printf("%d\n",ans);
}