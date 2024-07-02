#include <bits/stdc++.h>

using namespace std;

typedef int64_t ll;

int tb[27];
ll dp[27][1002];

const ll mod=998244353;
const int maxnCr=2e6+5;

ll memo[1002][1002];

ll comb(ll n,ll r){
    if(n<r)
        return 0;
    if(r==0)
        return 1;
    if(r==1)
        return n;
    if(n==1)
        return 1;

    if(memo[n][r]!=-1){
        return memo[n][r];
    }

    memo[n][r]=(comb(n-1,r-1)%mod)+(comb(n-1,r)%mod);

    return memo[n][r];

}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int k; cin>>k;

    memset(dp,0,sizeof(dp));
    memset(memo,-1,sizeof(memo));
    dp[0][0]=1;

    for(int i=1;i<=26;i++){
        cin>>tb[i];
    }

    ll res=0;

    // Using the ith letter
    for(int i=1;i<=26;i++){
        // Creating a strings of length x+j
        for(ll j=0;j<=tb[i];j++){
            // Checking strings of length x
            for(ll x=0;x+j<=k;x++){
                dp[i][x+j]=(dp[i][x+j]+(comb(x+j,j)*dp[i-1][x]))%mod;
            }
        }
    }

    for(int i=1;i<=k;i++){
        res=(res+dp[26][i])%mod;
    }

    cout<<res;

    return 0;
}
