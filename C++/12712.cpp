#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin >> T;
	for (int t = 1; t <= T; t++) {
		int N, M;
		cin >> N >> M;
		vector<vector<int> > map(N, vector<int>(N));
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				cin >> map[i][j];
			}
		}
		int oi[4] = {-1, 1, 0, 0};
		int oj[4] = {0, 0, -1, 1};
		int di[4] = {-1, 1, -1, 1};
		int dj[4] = {-1, 1, 1, -1};
		int maxNum = 0;
		int ans = 0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				int orth = map[i][j];
				int diag = map[i][j];
				for (int k = 0; k < 4; k++) {
					for (int l = 1; l < M; l++) {
						int a = i + oi[k] * l;
						int b = j + oj[k] * l;
						int c = i + di[k] * l;
						int d = j + dj[k] * l;
						if (a >= 0 && a < N && b >= 0 && b < N) {
							orth += map[a][b];
						}
						if (c >= 0 && c < N && d >= 0 && d < N) {
							diag += map[c][d];
						}
					}
				}
				maxNum = max(orth, diag);
				if (ans < maxNum) {
					ans = maxNum;
				}
			}
		}
		cout << "#" << t << " " << ans << endl;
	}
}
