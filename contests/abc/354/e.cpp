#include <bits/stdc++.h>

using namespace std;

typedef int64_t ll;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,dx,dy,res=0; cin>>n;
    vector<int> x(n),y(n);

    for(int &a:x)
        cin>>a;

    for(int &a:y)
        cin>>a;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)
                continue;
            dx=x[i]-x[j];
            dy=y[i]-y[j];
            res=max(res,(dx*dx)+(dy*dy));
        }
    }
    cout<<res;
    return 0;
}
