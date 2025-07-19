#include <iostream>
#include <string>
using namespace std;

int main() {
	int T;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		string tmp;
		cin >> tmp;

		int cnt = 0;
		if (tmp[0] == '1') {
			cnt++;
		}
		for (int i = 1; i < tmp.length(); i++) {
			if (tmp[i] != tmp[i - 1]) {
				cnt++;
			}
		}
		cout << "#" << tc << " " << cnt << "\n";
	}
}
