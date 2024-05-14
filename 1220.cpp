#include <iostream>
using namespace std;

int map[100][100];

int main() {
	int T;
	for (int tc = 1; tc <= 10; tc++) {
		int num;
		cin >> num;

		for (int i = 0; i < 100; i++) {
			for (int j = 0; j < 100; j++) {
				int magnet;
				cin >> magnet;
				map[i][j] = magnet;
			}
		}

		int cnt = 0;
		for (int i = 0; i < 100; i++) {
			int n_flag = 0;
			for (int j = 0; j < 100; j++) {
				if (map[j][i] == 1 && n_flag == 0) {
					n_flag = 1;
				}
				if (n_flag == 1 && map[j][i] == 2) {
					cnt++;
					n_flag = 0;
				}
			}
		}
		cout << "#" << tc << " " << cnt << "\n";
	}
}
