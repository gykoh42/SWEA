#include <iostream>
#include <vector>
using namespace std;

vector<int> passwd;

int main() {
	for (int tc = 1; tc <= 10; tc++) {
		int testCase;
		cin >> testCase;
		for (int i = 0; i < 8; i++) {
			int num;
			cin >> num;
			passwd.push_back(num);
		}
		while (true) {
			for (int i = 1; i <= 5; i++) {
				int tmp = passwd.front();
				passwd.erase(passwd.begin());
				if (tmp - i > 0)
					passwd.push_back(tmp - i);
				else {
					passwd.push_back(0);
					break;
				}
			}
			if (passwd.back() == 0) {
				break ;
			}
		}
		cout << "#" << tc << " ";
		for (int i = 0; i < 8; i++) {
			cout << passwd[i] << " ";
		}
		cout << "\n";
		passwd.clear();
	}
}
