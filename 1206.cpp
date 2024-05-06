#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	for (int test = 1; test <= 10; test++) {
		int N;
		cin >> N;
		vector<int> build(N);
		for (int i = 0; i < N; i++) {
			cin >> build[i];
		}
		int res = 0;
		for (int i = 2; i < N - 2; i++) {
			int max_neighbor = max(max(build[i - 2], build[i - 1]), max(build[i + 1], build[i + 2]));
			if (build[i] > max_neighbor) {
				res += build[i] - max_neighbor;
			}
		}
		cout << "#" << test << " " << res << endl;
	}
}
