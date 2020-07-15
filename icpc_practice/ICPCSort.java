import java.util.*;
import java.io.*;
import java.lang.*;
import static java.lang.System.out;

public class ICPCSort {
	public static void main(String[] args) throws IOException {
		BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
		Scanner sc = new Scanner(System.in);

		File file = new File("./sort.in");
		FileInputStream fs = new FileInputStream(file);
		int x = 0;
		List<Long> ls = new ArrayList<>();

		while ((x = fs.read()) != -1) {
			ls.add((long) x);
		}

		File newFile = new File("sorted.txt");
		newFile.createNewFile();
		FileWriter fw = new FileWriter("sorted.txt");

		for (int i = 0; i < ls.size(); i++) {
			for (int j = i + 1; j < ls.size() - i - 1; j++) {
				if (ls.get(j) > ls.get(j + 1)) {
					Collections.swap(ls, j, j + 1);
				}
			}
		}

		for (long i : ls) {
			fw.write((int) i);
		}

		sc.close();
		fw.close();
		fs.close();
	}
}
