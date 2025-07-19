import java.util.Scanner;
import java.io.FileInputStream;

class Solution {
	public static void main(String args[]) throws Exception {
		int ans = 0;
		java.util.Scanner sc = new java.util.Scanner(System.in);
		int num = sc.nextInt();
		while (num > 0) {
			ans += num % 10;
			num /= 10;
		}
		System.out.println(ans);
		sc.close();
	}
}
