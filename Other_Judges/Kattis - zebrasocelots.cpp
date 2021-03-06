#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define PI acos(-1)
#define INF 1e17
#define MOD 1000000007
#define MAX 200005
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

int Set(int mask, int pos){return mask = mask | (1<<pos);}
bool check(int mask, int pos){return (bool)(mask & (1<<pos));}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    int n;
    char ch;

    cin>>n;

    ll ans = 0;
    for(int i = 0; i < n; i++){
        cin>>ch;
        if(ch == 'O')
            ans += (1LL << (n - i - 1));
    }

    cout<<ans<<endl;

    return 0;
}
