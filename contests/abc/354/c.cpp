#include <bits/stdc++.h>

using namespace std;

typedef int64_t ll;

bool cmp(const vector<int>& a,const vector<int>& b){
    return a[0]<b[0];
}

void dbg(vector<vector<int>>& v){
    for(vector<int>& p:v)
        cout<<p[0]<<' '<<p[1]<<' '<<p[2]<<'\n';
}


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,a,c; cin>>n;
    vector<vector<int>> v(n,vector<int>(3));
    vector<bool> tb(n,true);

    for(int i=0;i<n;i++){
        cin>>a>>c;
        v[i][0]=a;v[i][1]=c;v[i][2]=i;
    }

    sort(v.begin(),v.end(),cmp);
    int k=n; priority_queue<pair<int,int>> pq;
    //dbg(v);

    for(int i=0;i<n;i++){
        while(!pq.empty()&&pq.top().first>v[i][1]){
            tb[pq.top().second]=false;
            pq.pop();
            k--;
        }
        pq.push({v[i][1],v[i][2]});
    }
    
    cout<<k<<'\n';

    for(int i=0;i<n;i++){
        if(tb[i])
            cout<<i+1<<' ';
    }

    return 0;
}
