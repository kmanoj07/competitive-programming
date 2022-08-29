public class RangeSumQuery {
    public static int[] rangeSumQuery(int[] A, int[][] B) {
        
        int len  = A.length;

        //prefix sum array 
        int[] Psum = new int[len];
        Psum[0] = A[0];
        for(int i=1;i<len;i++){
            Psum[i] = Psum[i-1] + A[i];
        }
        
        printArr(Psum);

        int row = B.length;
        int[] ans = new int[row];
        
        for(int i=0;i<row;i++){

            int L = B[i][0] - 1;
            int R = B[i][1] - 1;

            if(L == 0) {
                ans[i] = Psum[R];
            } else {
                ans[i] = Psum[R] - Psum[L-1];
            }
        }

        return ans;
    }
    
    public static void printArr(int[] arr) {
        int len = arr.length;
        for(int i=0;i<len;i++){
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        int[] A = new int[]{1,2,3,4,5};
        int[][] B = new int[][] {{1,4},{2,3}};
        int[] ans = rangeSumQuery(A, B);
        printArr(ans);
    }
}
