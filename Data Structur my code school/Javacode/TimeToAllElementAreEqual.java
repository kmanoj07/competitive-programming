public class TimeToAllElementAreEqual {
    public static int solve(int[] A) {
        int N = A.length;
        int[] Psum = new int[N];
        Psum[0] = A[0];
        for(int i=1;i<N;i++){
            Psum[i] = Psum[i-1] + A[i];
        }

        int max = A[0];
        for(int i=1;i<N;i++){
            if(A[i]>max){
                max = A[i];
            }
        }

        int totalTimeifallelemEqual = max * N;
        int actualTime = Psum[N-1];

        return (totalTimeifallelemEqual - actualTime);
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
        int ans = solve(A);
     System.out.println(ans);
    }
}
