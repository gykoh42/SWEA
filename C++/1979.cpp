#include <iostream>
using namespace std;

int map[15][15];
int main() {
	int test_case;
	int T;
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case) {
		int N, K;
		int res = 0;
		cin >> N >> K;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				cin >> map[i][j];
			}
		}
		for (int i = 0; i < N; i++) {
			int cnt = 0;
			for (int j = 0; j < N; j++) {
				if (map[i][j] == 1) {
					cnt++;
					if (cnt > K) {
						cnt = 0;
					}
					if (j == N - 1 && cnt == K) {
						res++;
					}
				}
				else {
					if (cnt == K) {
						res++;
					}
					cnt = 0;
				}
			}
		}
		for (int j = 0; j < N; j++) {
			int cnt = 0;
			for (int i = 0; i < N; i++) {
				if (map[i][j] == 1) {
					cnt++;
					if (cnt > K) {
						cnt = 0;
					}
					if (i == N - 1 && cnt == K) {
						res++;
					}
				}
				else {
					if (cnt == K) {
						res++;
					}
					cnt = 0;
				}
			}
		}
		cout << "#" << test_case << " " << res << endl;
	}
}
