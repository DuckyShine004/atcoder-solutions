#include <bits/stdc++.h>

using namespace std;

typedef int64_t ll;

int main() {
    int h; cin>>h;
    int x=1,cur=0,exp=0;

    while(cur<=h){
        cur+=x;
        x*=2;
        exp++;
    }

    cout<<exp;
    return 0;
}
