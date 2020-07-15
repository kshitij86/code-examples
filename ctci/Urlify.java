import java.util.*;
import java.io.*;
import java.lang.*;


public class Urlify {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String url = sc.next();
        String fied = "";        

        for(int i = 0; i < url.length(); i++){
            if(url.charAt(i) == ' '){
                fied += '%';
                fied +=  '2';
                fied += '0';
            } else {
                fied = fied + url.charAt(i);
            }
        } 
    
        System.out.println(fied);
    }

}

