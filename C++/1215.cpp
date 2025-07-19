#include <iostream>
using namespace std;

char map[8][8];
int main() {
	for (int tc = 1; tc <= 10; tc++) {
		int N;
		cin >> N;
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				cin >> map[i][j];
			}
		}
		int ans = 0;
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				int first = j;
				int last = j + N - 1;
				int flag = 0;
				while (first < last && last < 8) {
					if (map[i][first] == map[i][last]) {
						flag++;
					}
					first++;
					last--;
				}
				if (flag == N / 2) {
					ans++;
				}
			}
		}
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				int first = i;
				int last = i + N - 1;
				int flag = 0;
				while (first < last && last < 8) {
					if (map[first][j] == map[last][j]) {
						flag++;
					}
					first++;
					last--;
				}
				if (flag == N / 2) {
					ans++;
				}
			}
		}
		cout << "#" << tc << " " << ans << "\n";
	}
}
