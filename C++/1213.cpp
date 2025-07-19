#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	for (int tc = 1; tc <= 10; tc++) {
		int tmp;
		string to_find, total_str;
		cin >> tmp >> to_find >> total_str;
		int ans = 0;
		for (int i = 0; i < total_str.size(); i++) {
			if (total_str.substr(i, to_find.size()) == to_find) {
				ans++;
				i += to_find.size();
			}
		}
		cout << "#" << tc << " " << ans << endl;
	}
}
