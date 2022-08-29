public class NondeacreasingSubArrayqueries {
    public static int[] isNonDeacreasingSubArr(int[] A, int[][] B){
        int N = A.length;
        int row = B.length;

        int[] ans = new int[row];

        for(int i = 0;i<row; i++){
            int L = (B[i][0] - 1); //0 base index
            int R = (B[i][1] - 1); //0 base index
            boolean isNonDec = true;

            for(int j=L; j < R ;j++){
                if(A[j] > A[j+1] ){
                   isNonDec = false;
                   break;
                }
            }

            if(isNonDec){
                ans[i] = 1;
            }
            else {
                ans[i] = 0;    
            }
        }
        return ans;
    }

    public static void printArr(int[] A) {
        for(int i=0;i<A.length;i++){
            System.out.print(A[i] + " ");
        }
    }

    public static void main(String[] args) {
        int[] A = new int[]{3, 5, 19, 15, 17, 14, 2, 20, 2, 15};
        int[][] B = new int[][]{{3,10}, {7,9}, {5,9}, {6,20}, {3,7}, {7,8}, {3,4}, {3,8}, {2,4}, {5,6}};

        int[] res = isNonDeacreasingSubArr(A, B);
        printArr(res);
    }
}
