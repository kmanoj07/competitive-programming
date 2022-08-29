package Javacode.Array;

import java.util.Scanner;

public class ReverseArray {
    public static String reverse(char[] charArr) {
        int start = 0;
        int end = charArr.length - 1;
        while(start < end){
            char ch = charArr[start];
            charArr[start] = charArr[end];
            charArr[end] = ch;

            start++;
            end--;
        }
        return new String(charArr);
    }
    public static void main(String[] args)
    {
        Scanner scn = new Scanner(System.in);
        int t = scn.nextInt();
        while(t > 0) {

            String str = scn.nextLine();

            //split the string to char array
            char[] chArray = str.toCharArray();
            System.out.println(reverse(chArray));

            t--;
        }
    }
}
