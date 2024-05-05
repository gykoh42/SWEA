#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	int str[] = {50000, 10000, 5000, 1000, 500, 100, 50, 10};
	int ans[8] = {0, };
	for (int test_case = 1; test_case <= T; test_case++) {
		int N;
		cin >> N;
		int total_cnt = 0;
		for (int i = 0; i < 8; i++) {
			ans[i] = N / str[i];
			N -= ans[i] * str[i];
		}
		cout << "#" << test_case << endl;
		for (int i = 0; i < 8; i++) {
			cout << ans[i] << " ";
		}
		cout << endl;
	}
}
