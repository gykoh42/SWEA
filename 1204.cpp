#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	for (int test_case = 1; test_case <= T; ++test_case) {
		int cnt[101] = {0, };
		int a;
		cin >> a;
		for (int i = 0; i < 1000; i++) {
			int tmp;
			cin >> tmp;
			cnt[tmp]++;
		}
		int now = 0, score = 0;
		for (int i = 0; i <= 100; i++) {
			if (now <= cnt[i]) score = i, now = cnt[i];
		}
		cout << "#" << test_case << " " << score << '\n';
	}
	return 0;
}
