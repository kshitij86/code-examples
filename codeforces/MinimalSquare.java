import java.util.*;
import java.io.*;
import java.lang.*;

public class MinimalSquare {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int test = s.nextInt();

		int x, y;
		while (test > 0) {
			x = s.nextInt();
			y = s.nextInt();

			int a = Math.min(Math.max(2 * x, y), Math.max(2 * y, x));
			System.out.println(a * a);

			test -= 1;
		}
	}
}