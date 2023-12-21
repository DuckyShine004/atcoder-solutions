#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

const ll INF = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<ll> stones(n), dp(n, INF);

    for (ll &stone : stones) {
        cin >> stone;
    }

    dp[0] = 0;

    for (int i = 1; i < n; i++) {
        dp[i] = min(dp[i], dp[i - 1] + abs(stones[i] - stones[i - 1]));

        if (i > 1) {
            dp[i] = min(dp[i], dp[i - 2] + abs(stones[i] - stones[i - 2]));
        }
    }

    cout << dp[n - 1];
}
