import java.util.*;
import java.io.*;
import java.lang.*;
import static java.lang.System.out;

public class TheGuy {
	public static void main(String[] args) {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		List<Integer> X = new ArrayList<>();
		List<Integer> Y = new ArrayList<>();

		Set<Integer> set = new HashSet<>();

		int levels = Integer.parseInt(br.readLine());
		
		String[] lines = br.readLine().split(" ");

		if (set.size() == levels) {
			out.println("I become the guy.");
		} else {
			out.println("Oh, my keyboard!");
		}

		sc.close();
	}
}
