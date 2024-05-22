#include <iostream>
using namespace std;

int arr[50][50];

int main() {
	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		int N;
		cin >> N;
		for (int i = 0; i < N; i++) {
			string line;
			cin >> line;
			for (int j = 0; j < N; j++) {
				arr[i][j] = line[j] - '0';
			}
		}
		int ans = 0;
		int idx_flag = N / 2;
		int cnt = 1;
		for (int i = 0; i <= N / 2; i++) {
			for (int j = idx_flag; j < idx_flag + cnt; j++) {
				ans += arr[i][j];
			}
			idx_flag--;
			cnt += 2;
		}
		idx_flag = 1;
		cnt -= 4;
		for (int i = N / 2 + 1; i < N; i++) {
			for (int j = idx_flag; j < idx_flag + cnt; j++) {
				ans += arr[i][j];
			}
			idx_flag++;
			cnt -= 2;
		}
		cout << "#" << tc << " " << ans << "\n";
	}
}
