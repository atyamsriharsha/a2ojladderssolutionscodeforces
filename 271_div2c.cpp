/************************************************************
   Author : atyam
************************************************************/

#include <bits/stdc++.h>
using namespace std ;
/*debugging*/

#define out1(x)cout<<#x<<" is "<<x<<endl
#define out2(x,y)cout<<#x<<" is "<<x<<" "<<#y <<" is "<<y<<endl
#define out3(x,y,z)cout<<#x<<" is "<<x<<" "<<#y<<" is "<<y<<" "<<#z<<" is "<<z<<endl;
#define out4(a,b,c,d)cout<<#a<<" is "<<a<<" "<<#b<<"  is "<<b<<" "<<#c<<" is "<<c<<" "<<#d<<" is "<<d<<endl;
#define show(i,a,n) for(i=0;i<n;i++)cout<<a[i]<<" ";cout<<endl;
#define sz(a) cout<<"size of "<<#a<<" is "<<a.size()
#define exectime() cout<<"execution time "<<(double)(clock() - tStart)/CLOCKS_PER_SEC<<endl;

/*standard values*/

#define INF 1e18
#define PI 3.14159265359
#define MAX 1000006


/*Frequent functions*/

#define PB push_back
#define MP make_pair
#define F first
#define S second
#define si(n) scanf("%d",&n)
#define sl(n) scanf("%lld",&n)
#define pu putchar
#define gu getchar
#define FastIn std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

/*loops and initialisation*/

#define init(a,b) memset(a,b,sizeof(a))
#define rep(i,a,b) for(i=a;i<=b;i++)
#define repi(i,a,b) for(i=a;i>=b;i--)
#define repdf(i,a,b,d) for(i=a;i<=b;i+=d)
#define repdb(i,a,b,d) for(i=a;i>=b;i-=d)
#define TC() int t;cin>>t;while(t--)

typedef long long LL ;

class Point
{
public:
	int x,y;
	void input()
	{
		scanf("%d%d",&x,&y);
	}
};

class Mole
{
public:
	Point a,b;
	void input()
	{
		a.input(),b.input();
	}
	void Rotate(Point &res) ;
	Point rotate(int t) ;
};

void Mole::Rotate(Point &res)
{
	res.x-=b.x;
	res.y-=b.y;
	swap(res.x,res.y);
	res.x*=-1;
	res.x+=b.x;
	res.y+=b.y;
}

Point Mole::rotate(int t)
{
	Point Ret=a;
	while(t--)
		Rotate(Ret);
	return Ret;
}


LL dist(Point &a,Point &b)
{
	return(1LL*(a.x-b.x)*(a.x-b.x)+1LL*(a.y-b.y)*(a.y-b.y)) ;
}

bool sqr(Point &ta,Point &tb,Point &tc,Point &td)
{
	LL d[6]={dist(ta,tb),dist(ta,tc),dist(ta,td),dist(tb,tc),dist(tb,td),dist(tc,td)};
	sort(d,d+6);
	if(d[0]==d[1]&&d[1]==d[2]&&d[2]==d[3]&&d[4]==d[5]&&d[0]&&d[0]*2==d[4])
	{
		return 1;
	}
	else
	{
		return 0 ;
	}
}

int main()
{
	TC()
	{
		Mole a,b,c,d ;
		a.input();
		b.input();
		c.input();
		d.input();
		int ans=20;
	    for(int i=0;i<4;i++)
		   for(int j=0;j<4;j++)
			   for(int k=0;k<4;k++)
				   for(int l=0;l<4;l++)
				   {
					  Point ta =a.rotate(i), tb=b.rotate(j), tc=c.rotate(k),td=d.rotate(l);
					  if(sqr(ta,tb,tc,td))
						ans=min(ans,i+j+k+l);
				    }
	    if(ans==20)
		   ans=-1;
	    cout << ans << endl;
	}
	return 0;
}