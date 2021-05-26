//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define mem(a, b) (memset(a, b, sizeof(a)))
#define pb push_back
#define mk make_pair
#define ff first
#define ss second
#define PI acos(-1)
#define min3(a,b,c)     min(a,min(b,c))
#define max3(a,b,c)     max(a,max(b,c))
#define min4(a,b,c,d)   min(a,min(b,min(c,d)))
#define max4(a,b,c,d)   max(a,max(b,max(c,d)))
#define FOR(i,a,b)      for(int i=a;i<=b;i++)
#define ROF(i,a,b)      for(int i=a;i>=b;i--)
#define REP(i,b)        for(int i=0;i<b;i++)
#define all(v)          v.begin(),v.end()
#define SORT(v)         sort(v.begin(),v.end())
#define RSORT(v)        sort(v.rbegin(),v.rend())
#define REV(v)          reverse(v.begin(),v.end())
#define INF 2147483647
#define MOD 998244353
#define MAX 300005
using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef pair<ii, int> pii;
typedef pair<ll, ll> LL;
typedef vector<ii> vii;
typedef priority_queue<int,vector<int>,greater<int> > PQ;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

int setBit(int mask, int pos){return mask = mask | (1<<pos);}
bool checkBit(int mask, int pos){return (bool)(mask & (1<<pos));}

void solve()
{
    int n;
    cin>>n;

    vi a(n), b(n), arr(n);

    int prev = -1;

    set<int> s1, s2;
    REP(i, n)   s1.insert(i + 1), s2.insert(i + 1);

    REP(i, n) {
        cin>>arr[i];
        if(arr[i] != prev) {
            a[i] = arr[i];
            b[i] = arr[i];
            s1.erase(arr[i]);
            s2.erase(arr[i]);
        }
        else {
            a[i] = b[i] = -1;
        }
        prev = arr[i];
    }


    REP(i, n) {
        if(a[i] == -1) {
            a[i] = *s1.begin();
            s1.erase(*s1.begin());
        }
    }

    prev = -1;
    REP(i, n) {
        if(b[i] == -1) {
            auto it = s2.lower_bound(prev);
            it--;
            b[i] = *it;
            s2.erase(*it);
        }
        else {
            prev = b[i];
        }
    }

    REP(i, n)   cout<<a[i]<<" ";
    cout<<endl;

    REP(i, n)   cout<<b[i]<<" ";
    cout<<endl;

    return;
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int test = 1;

    cin>>test;

    while(test--) {
        solve();
    }

    return 0;
}

