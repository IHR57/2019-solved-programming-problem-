//BISMILLAHIR RAHMANIR RAHIM
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <climits>
#include <ctime>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
#include <sstream>
#include <iomanip>
#include <list>
#define cos(a) cos(a*pi/180)
#define sin(a) sin(a*pi/180)
#define tan(a) tan(a*pi/180)
#define cosi(a) acos(a)/(pi/180)
#define sini(a) asin(a)/(pi/180)
#define tani(a) atan(a)/(pi/180)
#define mem(a, b) (memset(a, b, sizeof(a)))
#define read (freopen("input.txt", "r", stdin))
#define write (freopen("output.txt", "w", stdout))
#define fastIO (ios::sync_with_stdio(0), cin.tie(0), cout.tie(0));
#define dis(x1, y1, x2, y2) ((x1-x2) * (x1-x2)) + ((y1-y2) * (y1-y2))
#define debug (printf("PINK FLOYD:)\n"))
#define iosflags (cout<<setiosflags(ios::fixed)<<setprecision(8))
#define pb push_back
#define mp make_pair
#define PI acos(-1)
#define pi 3.1415926535897932384
#define INF 2147483647
#define EPS 1e-8
#define MOD 1000000007
#define MAX 100005
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef vector<pii> vii;
typedef priority_queue<int,vector<int>,greater<int> > PQ;

const int inf = 1<<28;
int dirx[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int diry[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
int dx[] = { -1, 1, 0, 0 };
int dy[] = { 0, 0, -1, 1 };
int fx[] = { -2, -2, -1, -1,  1,  1,  2,  2 };
int fy[] = { -1,  1, -2,  2, -2,  2, -1,  1 };

int Set(int mask, int pos){return mask = mask | (1<<pos);}
bool check(int mask, int pos){return (bool)(mask & (1<<pos));}

int main()
{
    fastIO;
    int x, cnt = 0;

    cin>>x;
    int lg = (int) log2(x);
    if(x == (1 << (lg + 1)) - 1){
        cout<<0<<endl;
        return 0;
    }
    vi res;
    while(true){
        bool flag = 0;
        for(int i = lg; i >= 0; i--){
            if((x & (1 << i)) == 0){
                x ^= ((1 << (i+1)) - 1);
                //cout<<((1 << (i + 1)) - 1)<<endl;
               // cout<<x<<endl;
                cnt++;
                res.pb(i+1);
                if(x == (1 << (lg + 1)) - 1){
                    flag = 1;
                    break;
                }
                x = x + 1;
                cnt++;
                if(x == (1 << (lg + 1)) - 1){
                    flag = 1;
                    break;
                }
                break;
            }
        }
        if(flag)
            break;
    }

    cout<<cnt<<endl;
    for(int i = 0; i < res.size(); i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;

    return 0;
}
