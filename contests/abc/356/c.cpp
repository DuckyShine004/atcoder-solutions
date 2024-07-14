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
    int n,m,k,x,C; cin>>n>>m>>k;
    vector<vector<int>> v(m);
    vector<char> S(m);
    int res=0,fl;

    for(int i=0;i<m;i++){
        vector<int> arr;
        cin>>C;
        for(int j=0;j<C;j++){
            cin>>x;
            arr.push_back(x-1);
        }
        v[i]=arr;
        cin>>S[i];
    }

    for(int i=0;i<(1<<n);i++){
        fl=1;
        for(int j=0;j<m;j++){
            int cur=0;
            for(int y:v[j]){
                // Check if key is real, 1 is real
                if(i&(1<<y)) ++cur;
            }
            if((S[j]=='o'&&cur<k)||(S[j]=='x'&&cur>=k)){
                fl=0;
                break;
            }
        }
        if(fl) ++res;
    }

    cout<<res;

    return 0;
}

