#include <iostream>
using namespace std;

string zip[2001];
int main() {
	int T;
	cin >> T;
	for (int test_case = 1; test_case <= T; test_case++) {
		int N;
		cin >> N;
		int idx = 0;
		while (N--) {
			string alphabet;
			int cnt = 0;
			cin >> alphabet >> cnt;
			while (cnt--) {
				zip[idx] = alphabet;
				idx++;
			}
		}
		cout << "#" << test_case << endl;
		int print_cnt = 0;
		for (int i = 0; i < idx; i++) {
			cout << zip[i];
			print_cnt++;
			if (print_cnt % 10 == 0) {
				cout << endl;
			}
		}
		cout << endl;
	}
}
