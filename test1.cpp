#include <bits/stdc++.h>
using namespace std;
#define SpeedUp std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

typedef long long int ll;
typedef vector < int > vi;
typedef vector < ll > vl;
typedef pair < int , int > ii;
typedef pair < ll , ll > llll;
typedef vector < ii > vii;
typedef vector < llll > vllll;
typedef set < int > si;
typedef set < ll > sl;
typedef map < int , int > mii;
typedef map < ll , ll > mll;
typedef map < string , int > msi;
typedef priority_queue < ll , vector < ll > , greater < ll > > minheap;
typedef priority_queue < ll , vector < ll > , less < ll > > maxheap;

#define INF 1000000000000000000
#define PI M_PI
#define E M_E
#define MOD 1000000007
#define pb push_back
#define pp pop_back
#define mp make_pair
#define F first
#define S second

// Iterations
#define rep(i, a, b) for (int i = int(a);i <= int(b); i++)
#define rev(i, a, b) for (int i = int(b);i >= int(a); i--)
#define repi(i, a, b) for (int i = int(a);i < int(b); i++)
#define revi(i, a, b) for (int i = int(b);i > int(a); i--)
#define LET(x,a) __typeof(a) x(a) 
#define tr(v,it) for( LET(it,v.begin()) ; it != v.end() ; it++)
#define rtr(v,it) for( LET(it,v.rbegin()) ; it != v.rend() ; it++)
#define TC() int tc;cin >> tc; while(tc--)

// Initialise 
#define init(a,b) memset(a,b,sizeof(a))

// Debugging
#define echo(x)                  cerr << "It's fine at position : " << x << "\n";
#define trace1(x)                cerr << #x << ": " << x << "\n";
#define trace2(x, y)             cerr << #x << ": " << x << " | " << #y << ": " << y << "\n";
#define trace3(x, y, z)          cerr << #x << ": " << x << " | " << #y << ": " << y << " | " << #z << ": " << z << "\n";
#define trace4(a, b, c, d)       cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << "\n";
#define trace5(a, b, c, d, e)    cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << "\n";
#define trace6(a, b, c, d, e, f) cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << " | " << #f << ": " << f << "\n";
#define exectime() cerr << "execution time " << (double)(clock() - tStart)/CLOCKS_PER_SEC << "\n";

// Search
#define ALL(a) a.begin(),a.end()
#define LB(a,x) (lower_bound(ALL(a),x)-a.begin())
#define UB(a,x) (upper_bound(ALL(a),x)-a.begin())
inline ll f(ll idx)
{
    //Here Goes the function for search
    return 0;
}
inline ll g(ll val, ll key, ll ret)
{
    // Here goes ur final condition
    return (val<=key)?ret:ret-1; // This is default lowerbound .......
    // return ret;               // If f(idx) must be atleast equal to key and idx must be as small as possible
}
inline ll lowbound(ll l,ll r,ll key){ll mid,val;while(l<r){mid=(l+r)>>1;val=f(mid);if(key>val){l=mid+1;}else{r=mid;}}return g(f(l),key,l);}
//inline ll upbound(ll l, ll r,ll key){ll mid,val;while(l<r){mid=(l+r)>>1;val=f(mid);if(key<=val){r=mid;}else{l=mid+1;}}return r;}

                                                       /* Movement */

// int dx[]={1,0,-1,0},dy[]={0,1,0,-1}; //4 Direction
// int dx[]={1,1,0,-1,-1,-1,0,1},dy[]={0,1,1,1,0,-1,-1,-1};//8 direction 
// int dx[]={2,1,-1,-2,-2,-1,1,2},dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
// int dx[]={2,1,-1,-2,-1,1},dy[]={0,1,1,0,-1,-1}; //Hexagonal Direction

// NthPermutation
#define nperm(A) next_permutation(ALL(A)) // usage : returns 0 if its last permutation else 1 and sets the permuation in A

/*==========================================================================================================================================
==========================================================================================================================================*/
                                                       // Math
#define LIM1 1000001 
#define LIM2 1001
#define SEIVE LIM1
#define PHI LIM1
#define FACT LIM1
#define COMBI LIM2

// Seive
bitset<SEIVE> ok;
inline void seive(){ok.set();for(int i=2;i*i<SEIVE;i++)if(ok[i])for(int j=i<<1;j<SEIVE;j+=i)ok.reset(j);}

// Totient
ll phi[PHI];
inline void totient(){repi(i,1,PHI)phi[i]=(i&1)?i:i/2;for(ll i=3;i<PHI;i+=2)if(phi[i]==i)for(ll j=i;j<PHI;j+=i)phi[j]-=phi[j]/i;}

// Exponentiation
inline ll EXP(ll a, ll b, ll mod){ll res=1;while(b){if(b&1)res=(res*a)%mod;a=(a*a)%mod;b>>=1;}return res;}
inline ll Poww(ll a, ll b){ll res=1;while(b){if(b&1)res=res*a;a=a*a;b>>=1;}return res;}

// Inverse Modulo
inline ll inv(ll x,ll mod){return EXP(x,mod-2,mod);}
inline ll anyinv(ll a,ll mod){return (ok[mod])?EXP(a,mod-2,mod):EXP(a,phi[mod]-1,mod);}

// nCr by Inverse Modulo

ll fact[FACT];
inline void Fact(){fact[0]=1;repi(i,1,FACT)fact[i]=(i*fact[i-1])%MOD;}
inline ll comb(ll a, ll b){if(a<b)return 0;return (((fact[a]*inv(fact[b],MOD))%MOD)*inv(fact[a-b],MOD))%MOD;}

// nCr by DP

ll C[COMBI][COMBI];
inline void COMB(){repi(i,0,COMBI){C[i][0]=C[i][i]=1;rep(j,1,i>>1)C[i][j]=C[i][i-j]=(C[i-1][j]+C[i-1][j-1])%MOD;}}

/*==========================================================================================================================================
==========================================================================================================================================*/
vi pos[100];
int arr[300];
int n;
int place[300];
int main()
{
    SpeedUp;
    //clock_t tStart = clock();
    //seive();         // Usage: ok[i]
    //totient();       // Usage: phi[i]
    //Fact();          // Usage: fact[i]
    //COMB();          // Usage: comb(a,b) or C[a][b]
    cin >> n;
    rep(i,10,99) pos[i].clear();
    rep(i,1,2*n)
    {
        cin >> arr[i];
        pos[arr[i]].pb(i);
    }
    int prev=1;
    int cnt[2]={0};
    rep(i,10,99)
    {
        if(pos[i].size()==1)
        {
            cnt[prev]++;
            place[pos[i][0]]=prev;
            prev=1-prev;
        }
    }
    rep(i,10,99)
    {
        if(pos[i].size()>1)
        {
            cnt[prev]++;
            place[pos[i][0]]=prev;
            prev=1-prev;
                cnt[prev]++;
                place[pos[i][1]]=prev;
                prev=1-prev;
                repi(j,2,pos[i].size())
                {
                    place[pos[i][j]]=prev;
                    prev=1-prev;
                }
        }
    }
    //cout << cnt[0] << " " << cnt[1] << "\n"; 
    cout << cnt[0]*cnt[1] << "\n";
    rep(i,1,2*n)
    {
        cout << place[i]+1 << " ";
    }
    cout << "\n";
    //exectime();
    return 0;
}