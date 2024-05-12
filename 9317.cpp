#include <iostream>
#include <vector>
using namespace std;

vector <char> vec1;
vector <char> vec2;
int main() {
	int TC;
	cin >> TC;
	for (int tc = 1; tc <= TC; tc++) {
		int N;
		cin >> N;

		for (int i = 0; i < N; i++) {
			char tmp;
			cin >> tmp;
			vec1.push_back(tmp);
		}
		for (int i = 0; i < N; i++) {
			char tmp;
			cin >> tmp;
			vec2.push_back(tmp);
		}

		int ans = 0;
		for (int i = 0; i < N; i++) {
			if (vec1[i] == vec2[i]) {
				ans++;
			}
		}
		cout << "#" << tc << " " << ans << "\n";
		vec1.clear();
		vec2.clear();
	}
}
