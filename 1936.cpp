#include <iostream>
using namespace std;

int main(){
	int a = 0;
	int b = 0;
	string res;

	cin >> a >> b;
	if (a == 1 && b == 3){
		res = "A";
	} else if (a == 3 && b == 1) {
		res = "B";
	} else {
		if (a > b) {
			res = "A";
		} else if (a < b) {
			res = "B";
		}
	}
	cout << res;
	return 0;
}
