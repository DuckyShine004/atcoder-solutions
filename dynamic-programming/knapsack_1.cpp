#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

const ll INF = 1e9;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, W;
    ll w, v, weight, value;

    cin >> N >> W;

    vector<pair<ll, ll>> vec(N);
    vector<ll> dp(W + 1);

    for (int i = 0; i < N; i++) {
        cin >> w >> v;
        vec[i] = {w, v};
    }

    dp[0] = 0;

    for (int k = 0; k < N; k++) {
        pair<int, int> wv = vec[k];

        int weight = wv.first;
        int value = wv.second;

        for (int i = W; i >= 0; i--) {
            if (i + weight <= W && dp[i] != -INF) {
                dp[i + weight] = max(dp[i + weight], dp[i] + value);
            }
        }
    }

    cout << dp[W];
}
