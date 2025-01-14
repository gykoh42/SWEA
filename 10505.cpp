#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;
  for (int i = 1; i <= T; i++) {
    int N;
    cin >> N;

    int group[100000];
    int sum = 0;
    for (int j = 0; j < N; j++) {
      cin >> group[j];
      sum += group[j];
    }

    int avg = sum / N;
    int cnt = 0;
    for (int j = 0; j < N; j++) {
      if (group[j] <= avg) {
        cnt++;
      }
    }
    cout << "#" << i << " " << cnt << endl;
  }
}
