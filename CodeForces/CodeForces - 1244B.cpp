//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
#define mem(a, b) (memset(a, b, sizeof(a)))
#define pb push_back
#define mk make_pair
#define ff first
#define ss second
#define PI acos(-1)
#define INF 2147483647
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
    int test;
    string str;

    cin>>test;

    while(test--){
        int n;
        cin>>n;
        cin>>str;
        int Max = n;
        bool flag = false;
        for(int i = 0; i < str.size(); i++){
            if(str[i] == '1')
                Max = max(Max, max(2 * (i + 1), 2 * (n - i)));
        }

        cout<<Max<<endl;
    }

    return 0;
}
