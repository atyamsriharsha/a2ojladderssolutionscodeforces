#include <bits/stdc++.h>
using namespace std;
long long int N;
string word[101];
int main() 
{
    cin >> N;
    for(long long int i = 0; i<N; i++)
    {
        cin >> word[i];
    }
    long long int ans = -1;
    for(char c1 ='a';c1<='z';c1++) 
    {
        for(char c2=c1+1;c2<='z';c2++) 
        {
            long long int score = 0;
            for(long long int i = 0; i < N; i++) 
            {
                bool flag1 = true;
                for(long long int j = 0; j < word[i].size(); j++) 
                {
                    flag1 &= word[i][j] == c1 || word[i][j] == c2;
                }
                if(flag1) 
                    score += word[i].size();
            }
            ans = max(ans, score);
        }
    }
    cout << ans << "\n";
}