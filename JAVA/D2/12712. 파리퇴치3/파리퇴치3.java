import java.util.Scanner;
import java.io.FileInputStream;

class Solution {
	public static boolean checkBound(int x, int y, int N) {
		if (x < 0 || y < 0 || x >= N || y >= N) {
			return false;
		}
		return true;
	}

	public static void main(String[] args) throws Exception {

		int[] crossDirX = {0, 0, 1, -1};
		int[] crossDirY = {-1, 1, 0, 0};
		int[] diagDirX = {-1, 1, -1, 1};
		int[] diagDirY = {-1, 1, 1, -1};

		Scanner ac = new Scanner(System.in);
		int T = ac.nextInt();
		for (int tc = 1; tc <= T; tc++) {
			int N = ac.nextInt();
			int M = ac.nextInt();
			int flyArr[][] = new int[N][N];
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < N; j++) {
					flyArr[i][j] = ac.nextInt();
				}
			}
			int ans = Integer.MIN_VALUE;
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < N; j++) {
					int crossSum = flyArr[i][j];
					int diagSum = flyArr[i][j];
					for (int k = 1; k < M; k++) {
						for (int n = 0; n < 4; n++) {
							int crossDx = i + k * crossDirX[n];
							int crossDy = j + k * crossDirY[n];
							int diagDx = i + k * diagDirX[n];
							int diagDy = j + k * diagDirY[n];
							if (checkBound(crossDx, crossDy, N)) {
								crossSum += flyArr[crossDx][crossDy];
							}
							if (checkBound(diagDx, diagDy, N)) {
								diagSum += flyArr[diagDx][diagDy];
							}

						}
					}
					int sum = Math.max(crossSum, diagSum);
					ans = Math.max(ans, sum);
				}
			}
			System.out.println("#" + tc + " " + ans);
		}
		ac.close();
	}
}
