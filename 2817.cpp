#include <iostream>
using namespace std;

int arr[21];
int main() {
	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		int N, K;
		cin >> N >> K;
		for (int i = 0; i < N; i++) {
			cin >> arr[i];
		}
		int ans = 0;
		for (int i = 0; i < N; i++) {
			int tmp = 0;
			int idx = i;
			while (tmp <= K) {
				tmp += arr[idx];
				idx++;
			}
			if (tmp == K) {
				ans++;
			}
		}
		cout << ans << "\n";
	}
}
