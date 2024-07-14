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

void dbg(const vector<int>& v){
    for(int x:v)
        cout<<x<<" ";
}

void rev(vector<int>& v,int l,int r){
    int t;
    while(l<r){
        t=v[l];
        v[l]=v[r];
        v[r]=t;
        l++;
        r--;
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,l,r;
    cin>>n>>l>>r;
    l--; r--;
    vector<int> v(n,1);

    for(int i=1;i<n;i++)
        v[i]=i+1;
    rev(v,l,r);
    dbg(v);
    return 0;
}

