#include <bits/stdc++.h>
using namespace std ;
int main()
{
	string S1,s,str;
	long long int n,i,t;
	cin >> n ;
	i=0;
	while(cin>>str)
	{
		s+=str[0];
		if(getchar()!=' ')
			break;
	}
	t=s.length();
	if(n==1&&t==1)
	{
		puts("int");
		return 0 ;
	}
	stack<int> S;
	S1="";
	for(i=0;i<t;i++)
	{
		if(s[i]=='p')
		{
			S1+="pair<";
			S.push(0);
		}
		else
		{
			S1+="int";
			if(S.empty())
			{
				break;
			}
			if(!S.top())
			{
				S1+=",";
				S.push(1);
			}
			else
			{
				S1+=">";
				S.pop();
				S.pop();
				while(!S.empty())
				{
					if(S.top())
					{
						S1+=">";
						S.pop();
						S.pop();
					}
					else 
					{
						S1+=',';
						S.push(1);
						break;
					}
				}
			}
		}
	}
	if(i==t && S.empty())
	{
		cout << S1 ;
	}
	else
	{
		cout << "Error occurred" ;
	}
	return 0;
}