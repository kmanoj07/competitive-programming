package Javacode;

import java.util.*;

public class EquilibriumIndex {
    public static int  getEquilibriumIndex(int arr[]) {
        
        int len = arr.length;
        //create Psum 
        int[] Psum = new int[len];
        Psum[0] = arr[0];
        for(int i=1;i<len;i++){
            Psum[i] = Psum[i-1] + arr[i];
        }
        //List to hold the Equilibrium index
        List<Integer> Eindex = new ArrayList<Integer>();
        //find equilibrium index
        for(int i=0;i<len;i++){
            //get Lsum
            int Lsum = 0;
            if(i > 0){
                Lsum = Psum[i-1];
            }
            //get Rsum
            int Rsum = ((Psum[len-1]) - Psum[i]);
            if(Lsum == Rsum){
                Eindex.add(i);
            }
        }
        if(!Eindex.isEmpty()){
            int minIndex = Eindex.get(0);
            for(int i=1;i<Eindex.size();i++){
                if(Eindex.get(i) < minIndex){
                    minIndex = i;
                }
            }
            return minIndex;
        } 

        return -1;
    }

    public static void main(String[] args)
    {
        int[] arr = new int[] {-7, 1, 5, 2, -4, 3, 0};
        System.out.println(arr.length);

        int eqIndex = getEquilibriumIndex(arr);
        System.out.println(eqIndex);
    }
}
