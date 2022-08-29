public class ProductArrayPuzzle {
    public static int[] solve(int[] A) {
        int N = A.length;
        //creating ans array of the same size
        int[] ans = new int[N];

        //crating Prefixproduct
        int[] Pprod = new int[N];
        Pprod[0] = A[0];
        for(int i=1; i<N;i++){
            Pprod[i] = Pprod[i-1] * A[i];
        }

        //loop over A
        for(int i=0;i<N;i++){
            ans[i] = (Pprod[N-1] / A[i]);
        }

        return ans;
    }

    public static void printArr(int[] A){
        int N = A.length;
        for(int i=0;i<N;i++){
            System.out.print(A[i] + ", ");
        }
    }

    public static void main(String[] args) {
        int[] A = new int[]{
            1,2,3,4,5
        };
        int[] ans = solve(A);
        printArr(ans);
    }
}
