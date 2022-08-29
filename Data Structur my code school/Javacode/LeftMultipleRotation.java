public class LeftMultipleRotation {

    public static int[][] solve(int[] A, int[] B) {
        int aLen = A.length;
        int bLen = B.length;
        int[][] ans = new int[bLen][aLen];
        for(int i=0;i<bLen;i++) {
            //K times rotation
            int k = B[i];
            for(int j=0;j < aLen; j++) {
                //left roation by k
                int nIndex = (j- k + aLen) % aLen;
                ans[i][nIndex] = A[j];
            }
        }
        return ans;
    }
    
    public static void printArr(int[] A, int N) {
        for(int i =0; i< N; i++){
            System.out.print(A[i] + " ");
        }
    }

    public static void printArr(int[][] A) {
        for(int i=0;i<A.length;i++ ){
            for(int j=0;j<A[0].length;j++){
                System.out.print(A[i][j]+ " ");
            }System.out.println();
        }
    }

    public static void main(String[] args) {
       int[] A = {5, 17, 100, 11};
       int[] B = {1};
       int len = A.length;
       
       System.out.println("Arrray before the rotaion....");
       printArr(A, len);
       System.out.println();
       
       int[][] res = solve(A, B);

       System.out.println("Array after the rotation....");
       printArr(res);
    }
}
