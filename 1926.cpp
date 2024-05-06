#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		int tmp = i;
		bool flag = false;
		while (tmp) {
			if (tmp % 10 == 3 || tmp % 10 == 6 || tmp % 10 == 9) {
				cout << "-";
				flag = true;
			}
			tmp /= 10;
		}
		if (!flag) {
			cout << i;
		}
		cout << " ";
	}
}
