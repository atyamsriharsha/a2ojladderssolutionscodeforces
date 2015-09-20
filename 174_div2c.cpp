#include <bits/stdc++.h>
using namespace std;
#define MAXN 200005
int fenwick[MAXN];
int n;

int query(int x)
{
	int res=0;
	for(int i=x;i>0;i-=(i&(-i)))
	{
		res+=fenwick[i];
	}
	return res;
}

int add(int pos,int value)
{
	for(int i=pos;i<MAXN;i+=(i&(-i)))
	{
		fenwick[i] += value;
	}
}

int main()
{
	double sum = 0;
	int oper;
	n = 1;
	scanf("%d",&oper);
	for(int i=0;i<oper;i++)
	{
		int a,b,c;
		scanf("%d",&a);
		if(a==3)
		{
			int temp = query(n);
			sum-=temp;
			add(n,-temp);
			add(n+1,temp);
			n--;
		}
		else if(a==2)
		{
			scanf("%d",&b);
			sum+=b;
			n++;
			add(n,b);
			add(n+1,-b);
		}
		else 
		{
			scanf("%d%d",&b,&c);
			sum +=(double)c*min(n,b);
			add(1,c);
			add(min(n+1,b+1),-c);
		}
		printf("%.6lf\n",sum/n);
	}
}