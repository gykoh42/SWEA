#include <iostream>
using namespace std;

int main(){
	int N = 0;
	int res = 0;
	cin >> N;
	while (N % 10) {
		res += N % 10;
		N /= 10;
	}
	cout << res;
	return 0;
}
