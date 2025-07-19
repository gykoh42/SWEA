#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		int N;
		cin >> N;
		cout << "#" << tc << " ";
		for (int i = 0; i < N; i++) {
			cout << "1/" << N << " ";
		}
		cout << "\n";
	}
}
