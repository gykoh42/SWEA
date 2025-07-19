#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int num[10];
int main() {
	int T;
	cin >> T;
	for (int test = 1; test <= T; test++) {
		for (int i = 0; i < 10; i++) {
			cin >> num[i];
		}
		sort(num, num + 10);
		float res = 0;
		for (int i = 1; i <= 8; i++) {
			res += num[i];
		}
		res = round(res / 8);
		cout << "#" << test << " " << res << endl;
	}
}
