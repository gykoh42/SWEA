#include <iostream>
using namespace std;

int main() {
	for (int tc = 1; tc <= 10; tc++) {
		int N;
		string str;
		cin >> N >> str;
		string res;

		for (int i = 0; i < N; i++) {
			if (!res.empty() && str[i] == res.back()) {
				res.pop_back();
			} else {
				res.push_back(str[i]);
			}
		}
		cout << "#" << tc << " " << res << "\n";
	}
}
