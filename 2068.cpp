#include <iostream>
using namespace std;

int main() {
	int T;
	int arr[10];
	cin >> T;
	for (int testCase = 1; testCase <= T; testCase++) {
		for (int i = 0; i < 10; i++) {
			cin >> arr[i];
		}
		int max = -1;
		for (int i = 0; i < 10; i++) {
			if (arr[i] > max)
				max = arr[i];
		}
		cout << "#" << testCase << " " << max << endl;
	}
}
