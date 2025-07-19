#include <iostream>
#include <vector>
using namespace std;

int N, ans;
int col[11];

bool check(int row) {
	for (int i = 0; i < row; i++) {
		if (col[i] == col[row] || abs(col[row] - col[i]) == row - i) {
			return false;
		}
	}
	return true;
}

void nQueen(int row) {
	if (row == N) {
		ans++;
	}
	for (int i = 0; i < N; i++) {
		col[row] = i;
		if (check(row)) {
			nQueen(row + 1);
		}
	}
}

int main() {
	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		cin >> N;
		memset(col, 0, sizeof(col));
		nQueen(0);
		cout << "#" << tc << " " << ans << "\n";
	}
}
