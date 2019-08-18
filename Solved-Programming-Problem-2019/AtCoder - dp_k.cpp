/*
Template for vjudge.net

	Author: Iqbal Hossain Rasel
	CodeForces: The_Silent_Man
	AtCoder   : IHR57
	TopCoder  : IHR57

*/
//Problem Link: https://atcoder.jp/contests/dp/tasks
#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define PI acos(-1)
#define pi 3.1415926535897932384
#define INF 2147483647
#define EPS 1e-8
#define MOD 1000000007
#define MAX 100005
using namespace std;

typedef long long ll;

int Set(int mask, int pos){return mask = mask | (1<<pos);}
bool check(int mask, int pos){return (bool)(mask & (1<<pos));}

int dp[MAX], arr[MAX];

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    #ifdef ONLINE_JUDGE
    	freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
    #endif
    int n, k;

    cin>>n>>k;

    for(int i = 0; i < n; i++){
        cin>>arr[i];
        dp[arr[i]] = 1;
    }

    for(int i = 1; i <= k; i++){
        if(!dp[i]){
            for(int j = 0; j < n; j++){
                if((i - arr[j] >= 0) && dp[i-arr[j]] == 0){
                    dp[i] = 1;
                    break;
                }
            }
        }
    }

    (dp[k]) ? cout<<"First"<<endl : cout<<"Second"<<endl;

    return 0;
}
