#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

const ll INF = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<ll> stones(n), dp(n, INF);

    for (ll &stone : stones) {
        cin >> stone;
    }

    dp[0] = 0;

    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= k; j++) {
            if (i - j >= 0) {
                dp[i] = min(dp[i], dp[i - j] + abs(stones[i] - stones[i - j]));
            }
        }
    }

    cout << dp[n - 1];
}
