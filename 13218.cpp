#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	for (int i = 1; i <= T; i++) {
		int N;
		cin >> N;
		cout << "#" << i << " " << N / 3 << "\n";
	}
}
