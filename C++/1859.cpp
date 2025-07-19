#include <iostream>
#include <vector>
using namespace std;

vector <int>nums;
int main() {
	int T;
	cin >> T;
	for (int test = 1; test <= T; test++) {
		int N;
		cin >> N;
		long long res = 0;
		while (N--) {
			int num;
			cin >> num;
			nums.push_back(num);
		}
		int max = nums.back();
		for (int i = nums.size() - 2; i >= 0; i--) {
			if (nums[i] < max) {
				res += (max - nums[i]);
			} else {
				max = nums[i];
			}
		}
		nums.clear();
		cout << "#" << test << " " << res << endl;
	}
}
