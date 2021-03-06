//Date: 11/02/2020
#include <bits/stdc++.h>
#define pb push_back
#define mk make_pair
#define ff first
#define ss second
#define PI acos(-1)
#define pi 3.1415926535897932384
#define INF 2147483647
#define EPS 1e-8
#define MOD 1000000007
#define MAX 200005
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> ii;
 
int Set(int mask, int pos){return mask = mask | (1<<pos);}
bool check(int mask, int pos){return (bool)(mask & (1<<pos));}

int pref[MAX], suff[MAX];
int arr[MAX];

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int n;

    cin>>n;

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }    

    for(int i = 0; i < n; i++){
        pref[i+1] = pref[i] | arr[i];
    }
    for(int i = n - 1; i >= 0; i--){
        suff[i] = suff[i+1] | arr[i];
    }

    int Max = -1, idx = -1;
    for(int i = 0; i < n; i++){
        int temp = suff[i+1] | pref[i];
        int res = (arr[i] | temp) ^ temp;
        if(res > Max){
            Max = res;
            idx = i;
        }
    }

    cout<<arr[idx]<<" ";
    for(int i = 0; i < n; i++){
        if(i != idx)
            cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}