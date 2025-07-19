#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	for (int i = 1; i <= T; i++) {
		int A, B;
		cin >> A >> B;

		int ans = (A + B) % 24;
		cout << "#" << i << " " << ans << "\n";
	}
}
