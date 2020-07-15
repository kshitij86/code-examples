import java.util.*;
import java.io.*;
import java.lang.*;

public class BoyOrGirl {
	public static void main(String[] args){
		BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
		Scanner sc = new Scanner(System.in);
		
		int ctr = 0;
		int[] chars = new int[26]; 
		String userName = sc.next();
		Set<Character> set = new HashSet<>(); 

		for(char i: userName.toCharArray()){
			if(!set.contains(i)){
				set.add(i);
				chars[i - 'a']++;	
			}
		}

		for(int i: chars){
			if(i == 1){
				ctr ++; 
			}
		}

		// System.out.println(Arrays.toString(chars));
		// System.out.println(ctr);
		
		if(ctr % 2 != 0){
			System.out.print("IGNORE HIM!");
		} else {
			System.out.print("CHAT WITH HER!");
		}

		sc.close();
	}
}
