#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int tc = 1; tc <= t; tc++) {
		int N, L;
		int dp[21][10001];
		int score[21], cal[21];

		cin >> N >> L;
		for (int i = 1; i <= N; i++) {
			cin >> score[i] >> cal[i];
		}
		for (int i = 1; i <= N; i++) {
			for (int j = 1; j <= L; j++) {
				if (cal[i] > j) {
					dp[i][j] = dp[i - 1][j];
				} else {
					dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - cal[i]] + score[i]);
				}
			}
		}
		cout << "#" << tc << " " << dp[N][L];
	}
}
