#include <iostream>
using namespace std;

int main() {
	int TC;
	cin >> TC;
	for (int i = 1; i <= TC; i++) {
		int log;
		cin >> log;
		string ans = "Alice";
		if (log % 2 == 1) {
			ans = "Bob";
		}
		cout << "#" << i << " " << ans << "\n";
	}
}
