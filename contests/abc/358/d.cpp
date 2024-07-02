#include <bits/stdc++.h>

using namespace std;

typedef int64_t ll;

int main() {
    int n,m;
    cin>>n>>m;

    vector<ll>a(n),b(m);

    for (ll &x:a) {
        cin>>x;
    }

    for (ll &x:b) {
        cin>>x;
    }

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    int l,r;
    l=r=0;

    ll res=0;

    while (l<n&&r<m){
        if(a[l]>=b[r]){
            res+=a[l];
            l++;
            r++;
        } else {
            l++;
        }
    }

    cout<<(r==m?res:-1);

    return 0;
}
