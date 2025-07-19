#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string finalScore[10] = {"A+", "A0", "A-", "B+", "B0", "B-", "C+", "C0", "C-", "D0"};
int main() {
    int T;
    cin >> T;
    for (int testCase = 1; testCase <= T; testCase++) {
        int N, K;
        cin >> N >> K;
        vector<float> scores(N);
        float KScore = 0;
        for (int i = 0; i < N; i++) {
            int mid, final, assign;
            cin >> mid >> final >> assign;
            float totalScore = mid * 0.35 + final * 0.45 + assign * 0.2;
            scores[i] = totalScore;
            if (i == K - 1) {
                KScore = totalScore;
            }
        }
        sort(scores.begin(), scores.end(), greater<float>());
        int rank = find(scores.begin(), scores.end(), KScore) - scores.begin();
        int scoreIdx = rank * 10 / N;
        cout << "#" << testCase << " " << finalScore[scoreIdx] << endl;
    }
    return 0;
}
