import java.util.*;
import java.io.*;
import java.lang.*;

public class SoldierBananas {
	public static void main(String[] args){
		BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
		Scanner sc = new Scanner(System.in);
		
		int k, n, w;
		int totPrice = 0;
		
		k = sc.nextInt();
		n = sc.nextInt();
		w = sc.nextInt();
		
		//Calculate total price of bananas
		for(int i = 1; i <= w; i++){
			totPrice += (i*k); 
		}
		
		System.out.print(totPrice - n);

		sc.close();	
	}
}
