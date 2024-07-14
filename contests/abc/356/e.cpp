#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <numeric>
#include <vector>

using namespace std;

typedef int64_t ll;

#define f first;
#define s second;

void dbg(const vector<ll>& v){
    for(int x:v) cout<<x<<" ";
}

void pr(int x){
    cout<<x<<"\n";
}

//void solve(const vector<ll>& v,int n){
    //ll res=0;
    //for(int i=0;i<n-1;i++){
        //for(int j=i+1;j<0

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n; cin>>n;
    ll mn=0,mx=0,ss;
    vector<ll> v(n);

    for(ll &x:v) cin>>x;
    sort(v.begin(),v.end());
    ss=accumulate(v.begin(),v.end(),0);

    for(int i=0;i<n-1;i++){
        ss-=v[i];
        mn+=ss/v[i];
        mx+=ceil(double(ss)/v[i]);
    }

    cout<<mn<<" "<<mx;

    return 0;
}

