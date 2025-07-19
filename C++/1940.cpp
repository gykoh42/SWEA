#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	for (int test = 1; test <= T; test++) {
		int N;
		cin >> N;
		int speed = 0;
		int accel = 0;
		int res = 0;
		while (N--) {
			int cmd;
			cin >> cmd;
			if (cmd == 1) {
				cin >> accel;
				speed += accel;
			} else if (cmd == 2) {
				cin >> accel;
				if (accel > speed) {
					speed = 0;
				} else {
					speed -= accel;
				}
			}
			res += speed;
		}
		cout << "#" << test << " " <<  res << endl;
	}
}
