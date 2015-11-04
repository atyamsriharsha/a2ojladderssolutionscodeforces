#include <bits/stdc++.h>
using namespace std ;
const long long int MAX_N = 1000;
long long int p,r;
char s[MAX_N];
map<string,long long int> b;

bool has_sub(const char c)
{
  return (c == ':' || c == ',');
}

void parse()
{
  string name;
  while(isalpha(s[p])) 
  	name.push_back(s[p++]);
  r += b[name];
  b[name]++;
  while(has_sub(s[p++])) 
  	parse();
  b[name]--;
}

int main()
{
  cin >> s ;
  parse();
  cout << r ;
  return 0;
}