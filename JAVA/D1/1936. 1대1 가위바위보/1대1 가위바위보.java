import java.io.FileInputStream;
import java.util.*;

class Solution {
	public static void main(String args[]) throws Exception {
		Scanner ac = new Scanner(System.in);
		int A = ac.nextInt();
		int B = ac.nextInt();
		char win = 'A';
		if (Math.abs(A - B) == 2)
			if (A > B)
				win = 'B';
			else if (B > A)
				win = 'B';
		System.out.println(win);
		ac.close();
	}
}
