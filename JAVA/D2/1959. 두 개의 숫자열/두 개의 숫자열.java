import java.util.Scanner;
import java.io.FileInputStream;

class Solution {
	public static void main(String args[]) throws Exception {
		Scanner ac = new Scanner(System.in);
		int T = ac.nextInt();

		for (int tc = 1; tc <= T; tc++) {
			int N = ac.nextInt();
			int M = ac.nextInt();

			int[] A = new int[N];
			int[] B = new int[M];

			for (int i = 0; i < N; i++)
				A[i] = ac.nextInt();
			for (int i = 0; i < M; i++)
				B[i] = ac.nextInt();

			int[] longArr, shortArr;
			if (N >= M) {
				longArr = A;
				shortArr = B;
			} else {
				longArr = B;
				shortArr = A;
			}

			int max = Integer.MIN_VALUE;
			int diff = longArr.length - shortArr.length;
			for (int i = 0; i <= diff; i++) {
				int sum = 0;
				for (int j = 0; j < shortArr.length; j++) {
					sum += shortArr[j] * longArr[j + i];
				}
				max = Math.max(max, sum);
			}

			System.out.println("#" + tc + " " + max);
		}
		ac.close();
	}
}
