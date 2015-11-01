#include <bits/stdc++.h>
using namespace std ;
int a[10000007],c1[10000007],c2[10000007] ;
void split(int num,int c[])
{
	for(int i=2;i*i<=num&&a[num];i++)
	{
		while(num%i==0)
		{
			c[i]++ ;
			num=num/i ;
		}
	}
	if(num>1)
		c[num]++ ;
}
void print(int num,int c[])
{
	int tmp=1;
	for(int i=2;i*i<=num&&a[num];i++)
	{
		while(num%i==0)
		{
			if(c[i]!=0)
			{
				c[i]--;
				tmp*=i;
			}
			num/=i;
		}
	}
	if(num>1&&c[num])
	{
		c[num]--;
		tmp*=num;
	}
	printf("%d\n",tmp);
	//cout << tmp << " " ;
}
int main()
{
	for(int i=2;i<10000007;i++)
	{
		if(a[i]!=0)
		{
			continue ;
		}
		for(int j=2;j*i<10000007;j++)
		{
			a[i*j]=1 ;
		}
	}
	int n,m,temp ;
	while(cin >> n >> m) 
	{
	std::vector<int> numerators,denominators;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&temp) ;
		split(temp,c1) ;
		numerators.push_back(temp) ;
	}
	for(int i=0;i<m;i++)
	{
		scanf("%d",&temp) ;
		split(temp,c2) ;
		denominators.push_back(temp) ;
	}
	for(int i=2;i<10000007;i++)
	{
		int mm=min(c1[i],c2[i]);
		c1[i]-=mm;
		c2[i]-=mm;
	}
	printf("%d %d\n",n,m);
	//cout << n << " " << m << "\n" ;
	for(int i=0;i<n;i++)
	{ 
		print(numerators[i],c1);
	}
	printf("\n");
	//cout << "\n" ;
	for(int i=0;i<m;i++)
	{ 
		print(denominators[i],c2);
	}
	printf("\n");
	//cout << "\n" ;
	}
	return 0 ;
}