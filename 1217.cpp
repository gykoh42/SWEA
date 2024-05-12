#include <iostream>
using namespace std;

int pow_recur(int N, int M) {
	if (M == 0)
		return 1;
	if (M - 1 != -1) {
		return (N * pow_recur(N, M - 1));
	}
	return 1;
}

int main() {
	for (int tc = 1; tc <= 10; tc++) {
		int testCase;
		cin >> testCase;
		int N, M;
		cin >> N >> M;
		cout << "#" << testCase << " " << pow_recur(N, M) << "\n";
	}
}
