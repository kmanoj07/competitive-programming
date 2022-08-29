package Javacode;

public class Pickformbothside {

    public static int pickFromBothSide(int[] A, int B)
    {
        int len = A.length;
        //create prefix sum array
        int[] Psum = new int[len];
        Psum[0] = A[0];
        for(int i=1; i < len; i++){
            Psum[i] = Psum[i-1] + A[i];
        }
        //When all B from front or left
        int sum = Psum[B-1];
        int maxSum = sum;

        int exc = B-1;
        int inc = len-1;

        while(exc >= 0 && inc >=0) {
            sum += (Psum[exc]) + (Psum[inc] - Psum[inc - 1]);
            if(sum > maxSum){
                maxSum = sum;
            }
            exc--;
            inc--; 
        }
        return maxSum;
    }

    public static void main(String[] args)
    {
        int[] arr = new int[]{5, -2, 3 , 1, 2};
        int B = 3;
        int max = pickFromBothSide(arr, B);
        System.out.println(max);
    }
}
