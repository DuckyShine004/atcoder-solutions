#include <bits/stdc++.h>

using namespace std;

typedef int64_t ll;

int masks[11];

int main() {
    int n,m;
    string s;
    cin>>n>>m;
    
    int x=(1<<m)-1;

    memset(masks,0,sizeof(masks));
    
    for (int i=0;i<n;i++){
        cin>>s;
        for (int j=0;j<m;j++){
            if (s[j]=='o'){
                masks[i]|=(1<<j);
            }
        }
    }

    function<int(int,int,int)>dp=[&](int i,int j,int k)->int{
        if(j==x){
            return k;
        }

        if (i==n){
            return n;
        }

        return min(dp(i+1,j,k),dp(i+1,j|masks[i],k+1));
    };

    cout<<dp(0,0,0);
    
    return 0;
}
