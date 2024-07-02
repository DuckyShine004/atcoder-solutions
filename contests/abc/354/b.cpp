#include <bits/stdc++.h>

using namespace std;

typedef int64_t ll;

int main() {
    int n,b,x=0; cin>>n;
    string a;
    vector<pair<string,int>> v(n);

    for(int i=0;i<n;i++){
        cin>>a>>b;
        v[i]={a,b};
        x+=b;
    }
    sort(v.begin(),v.end());
    cout<<v[x%n].first;

    return 0;
}
