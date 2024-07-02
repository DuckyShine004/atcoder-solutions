#include <bits/stdc++.h>

using namespace std;

typedef int64_t ll;

int main() {
    int n,a,t;
    cin>>n>>a;

    ll mx,res;
    mx=res=0;

    for (int i=0;i<n;i++) {
        cin>>t;
        if (t>mx) {
            mx=t+a;
        } else {
            mx+=a;
        }

        cout<<mx<<'\n';
    }

    return 0;
}

