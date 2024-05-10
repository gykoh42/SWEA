#include <iostream>
using namespace std;

int map[9][9];

int main() {
	int T;
	cin >> T;
	for (int TC = 1; TC <= T; TC++) {
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				cin >> map[i][j];
			}
		}
		bool isValid = true;
		for (int num = 1; num <= 9 && isValid; num++) {
			int iIdx[9] = {0}, jIdx[9] = {0}, gridIdx[9] = {0};
			for (int i = 0; i < 9; i++) {
				for (int j = 0; j < 9; j++) {
					if (map[i][j] == num) {
						iIdx[i]++;
						jIdx[j]++;
						int grid = (i / 3) * 3 + (j / 3);
						gridIdx[grid]++;
					}
				}
			}
			for (int i = 0; i < 9; i++) {
				if (iIdx[i] != 1 || jIdx[i] != 1 || gridIdx[i] != 1) {
					isValid = false;
					break;
				}
			}
		}
		cout << "#" << TC << " " << (isValid ? 1 : 0) << "\n";
	}
}
