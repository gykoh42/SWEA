#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		int L, U, X;
		cin >> L >> U >> X;
		if (X < L) {
			cout << "#" << tc << " " << L - X << endl;
		}
		else if (X > U) {
			cout << "#" << tc << " " << -1 << endl;
		}
		else {
			cout << "#" << tc << " " << 0 << endl;
		}
	}
}
