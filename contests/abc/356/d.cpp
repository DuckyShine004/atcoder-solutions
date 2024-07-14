#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdint>
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
#include <vector>

using namespace std;

typedef int64_t ll;
typedef uint64_t ull;

#define f first;
#define s second;

const ull mod=998244353;
const int maxe=60;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll n,m,res=0; cin>>n>>m;
    ll ones,rems;

    // Trick here is to look at the 1s in m
    for(int i=0;i<maxe;i++){
        if(!(m&(1LL<<i))) continue;
        // Get the number of cycles e.g. 0011 (column-wise)
        ones=(n+1LL)/(2LL<<i);
        // Get the remainder cycles
        rems=(n+1LL)%(2LL<<i);
        res=(res+(ones<<i)+max(0LL,rems-(1LL<<i)))%mod;
    }

    cout<<res;
    return 0;
}

