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
#include <vector>

using namespace std;

typedef int64_t ll;

#define f first;
#define s second;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,m; cin>>n>>m;
    vector<int> A(m);
    vector<vector<int>> X(n,vector<int>(m));
    for(int &x:A)
        cin>>x;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>X[i][j];
        }
    }

    for(int j=0;j<m;j++){
        int cur=0;
        for(int i=0;i<n;i++){
            cur+=X[i][j];
        }
        //cout<<"bruh: "<<cur<<"\n";
        if(cur<A[j]){
            cout<<"No";
            return 0;
        }
    }

    cout<<"Yes";
    return 0;
}

