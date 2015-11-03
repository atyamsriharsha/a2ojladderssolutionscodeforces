#include <bits/stdc++.h>
using namespace std ;
long long int p[24][6] =
{
  {1, 2, 3, 4, 5, 6},
  {1, 2, 5, 6, 4, 3},
  {1, 2, 4, 3, 6, 5},
  {1, 2, 6, 5, 3, 4},
  {2, 1, 4, 3, 5, 6},
  {2, 1, 5, 6, 3, 4},
  {2, 1, 3, 4, 6, 5},
  {2, 1, 6, 5, 4, 3},
  {3, 4, 2, 1, 5, 6},
  {3, 4, 5, 6, 1, 2},
  {3, 4, 1, 2, 6, 5},
  {3, 4, 6, 5, 2, 1},
  {4, 3, 1, 2, 5, 6},
  {4, 3, 5, 6, 2, 1},
  {4, 3, 2, 1, 6, 5},
  {4, 3, 6, 5, 1, 2},
  {5, 6, 1, 2, 3, 4},
  {5, 6, 3, 4, 2, 1},
  {5, 6, 2, 1, 4, 3},
  {5, 6, 4, 3, 1, 2},
  {6, 5, 2, 1, 3, 4},
  {6, 5, 3, 4, 1, 2},
  {6, 5, 1, 2, 4, 3},
  {6, 5, 4, 3, 2, 1}
};


int main()
{
	set<string> M;
	long long int R=0;
	char s[6];
	scanf("%s",s);
	sort(s,s+6);
	do{
		string g="";
		for(long long int i=0;i<6;i++)
		{ 
			g+=s[i];
		}
		if(M.find(g)!=M.end()) 
			continue;
		R++;
		for(long long int k=0;k<24;k++)
		{
			string h="";
			for(long long int i=0;i<6;i++)
			{ 
				h+=g[p[k][i]-1];
			}
			M.insert(h);
		}
	}while(next_permutation(s,s+6));
	cout << R ;
	return 0;
}
