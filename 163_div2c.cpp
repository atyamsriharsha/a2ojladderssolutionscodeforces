#include <bits/stdc++.h>
using namespace std ;
#define MAXN 1111
bool m[MAXN][MAXN];
int row[MAXN], col[MAXN];
int N;
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define REP(i,b) for(int i=0;i<(b);i++)
vector<pair<int, pair<int, int> > > ans;
void swap_rows(int a, int b)
{
  if(a==b) 
    return;
  REP(i, N) 
    swap(m[a][i], m[b][i]);
  swap(row[a], row[b]);
  ans.push_back(make_pair(1,make_pair(a,b))); 
}
void swap_cols(int a, int b)
{
  if(a==b) 
    return;
  REP(i, N) 
    swap(m[i][a], m[i][b]);
  swap(col[a], col[b]);
  ans.push_back(make_pair(2,make_pair(a, b))); 
}

int main()
{
  scanf("%d", &N);
  REP(i,N-1)
  {
    int x, y;
    scanf("%d%d", &x, &y);
    x--; y--;
    m[x][y] = true;
    row[x]++;
    col[y]++;
  }
  REP(i,N-1)
  {
    FOR(j,i,N-1) 
      if(!row[j])
      { 
        swap_rows(i, j); 
        break; 
      }
    FOR(j,i,N-1)
      if(col[j]) 
      { 
        swap_cols(i, j); 
        break; 
      }
    FOR(j,i,N-1) 
      row[j] -= (m[j][i]);
  }
  printf("%d\n", (int)ans.size());
  REP(i,ans.size()) 
    printf("%d %d %d\n", ans[i].first, ans[i].second.first + 1, ans[i].second.second + 1);
  return 0;
}