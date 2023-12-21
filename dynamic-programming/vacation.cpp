#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<vector<ll>> mat(n, vector<ll>(3)), dp(n, vector<ll>(3));

    ll res = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> mat[i][j];
            res = max(res, mat[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            dp[i][j] = mat[i][j];

            if (i == 0) {
                continue;
            }

            if (j == 0) {
                dp[i][j] += max(dp[i - 1][1], dp[i - 1][2]);
            } else if (j == 1) {
                dp[i][j] += max(dp[i - 1][0], dp[i - 1][2]);
            } else {
                dp[i][j] += max(dp[i - 1][0], dp[i - 1][1]);
            }

            res = max(res, dp[i][j]);
        }
    }

    cout << res;
}
