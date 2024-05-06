#include <iostream>
#include <algorithm>
using namespace std;
int arr[100];
int main() {
    for (int test = 1; test <= 10; test++) {
        int dump;
        cin >> dump;
        for (int i = 0; i < 100; i++) {
            cin >> arr[i];
        }
        int res = 0;
        while (dump--) {
            sort(arr, arr + 100);
            arr[0]++;
            arr[99]--;
        }
        sort(arr, arr + 100);
        cout << "#" << test << " " << arr[99] - arr[0] << endl;
    }
}
