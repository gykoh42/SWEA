import java.util.Scanner;
import java.io.FileInputStream;
import java.util.*;

class Solution {
	public static void main(String args[]) throws Exception {
		Scanner ac = new Scanner(System.in);
		int N = ac.nextInt();

		int[] arr = new int[N];
		for (int i = 0; i < N; i++) {
			int num = ac.nextInt();
			arr[i] = num;
		}
		Arrays.sort(arr);
		System.out.println(arr[N / 2]);
		ac.close();
	}
}
