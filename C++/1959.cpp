#include <iostream>
#include <limits>
#include <vector>
using namespace std;

vector <int>A;
vector <int>B;
vector <int>ansArr;

int main() {
	int T;
	cin >> T;
	for (int testCase = 1; testCase <= T; testCase++) {
		int N, M;
		cin >> N >> M;
		bool flag = true;
		if (N > M) {
			flag = false;
		}
		for (int i = 0; i < N; i++) {
			int tmp;
			cin >> tmp;
			A.push_back(tmp);
		}
		for (int i = 0; i < M; i++) {
			int tmp;
			cin >> tmp;
			B.push_back(tmp);
		}

		if (flag == true) {
			int idx = 0;
			while (idx <= M - N)
			{
				int ans = 0;
				for (int i = 0; i < A.size(); i++) {
					ans += A[i] * B[i + idx];
				}
				ansArr.push_back(ans);
				idx++;
			}
		} else if (flag == false) {
			int idx = 0;
			while (idx <= N - M)
			{
				int ans = 0;
				for (int i = 0; i < B.size(); i++) {
					ans += A[i + idx] * B[i];
				}
				ansArr.push_back(ans);
				idx++;
			}
		}

		int max = LLONG_MIN;
		for (int i = 0; i < ansArr.size(); i++) {
			if (ansArr[i] > max) {
				max = ansArr[i];
			}
		}
		cout << "#" << testCase << " " << max << "\n";
		A.clear();
		B.clear();
		ansArr.clear();
	}
}
