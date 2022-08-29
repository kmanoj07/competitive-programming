package Javacode;

import java.util.*;

public class Squareroot {
    public static int getSqrt(int A){
        int s = 1;
        int e = A;
        while(s <= e){
            int mid = (s + e)/2;
            if(A == mid*mid){
                return mid;
            }
            if(mid*mid > A){
                e = mid - 1;
            }else{
                s = mid + 1;
            }
        }
        return -1;
    }

    public static void main(String[] args){
        Scanner scn = new Scanner(System.in);
        int N = scn.nextInt();
        System.out.println(String.format("This sqrt root of the %d is %d",N, getSqrt(N)));
    }
}
