//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
#define mem(a, b) (memset(a, b, sizeof(a)))
#define debug (printf("PINK FLOYD:)\n"))
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define PI acos(-1)
#define INF 2147483647
#define EPS 1e-8
#define MOD 1000000007
#define MAX 100005
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef vector<ii> vii;
typedef priority_queue<int,vector<int>,greater<int> > PQ;

int Set(int mask, int pos){return mask = mask | (1<<pos);}
bool check(int mask, int pos){return (bool)(mask & (1<<pos));}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	ll n, k;

	cin>>n>>k;

	for(ll i = 1; i <= 100000; i++){
        ll temp = (i * (i + 1)) >> 1LL;
        ll x = temp - k;
        if(i + x == n){
            cout<<x<<endl;
            return 0;
        }
	}

    return 0;
}
