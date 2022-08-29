#include<iostream>
#include<vector>
using namespace std;

void printArr(vector<int> A);

// 5 4 2 7 9 6
// odd=  4 + 7 + 6
// even= 5+2+9
// 5 4 2 9 6
// new_odd = 4 + 9 = (Sum of odd indexes before 7)+
// (Sum of even indexes after 7)
// new_even = (5 + 2) + 6  (Sum of even indexes before 7)+
// (Sum of odd indexes after 7)

int countWaysToMakeOddEvenIndexSumEqual(const vector<int> &A) {
    int N = A.size();
    vector<int> PevenSum(N);
    vector<int> PoddSum(N);

    PevenSum[0] = A[0];
    PoddSum[0] = 0;

    //creating prefix sum array for evenSum and oddSum
    for(int i=1;i<N;i++){
        //check even or odd
        if(i%2 != 0){ // odd
            PoddSum[i] = PoddSum[i-1] + A[i];
            PevenSum[i] = PevenSum[i-1];
        } else {
            PevenSum[i] = PevenSum[i-1] + A[i];
            PoddSum[i] = PoddSum[i-1];
        }
    }

    printArr(A);
    printArr(PevenSum);
    printArr(PoddSum);

    int odd_sum =0;
    int even_sum =0;
    int count = 0;

    for(int i=0;i<N; i++){
        if(i == 0){
            odd_sum = (PevenSum[N-1]) - (PevenSum[i]);
            even_sum = (PoddSum[N-1] - (PoddSum[i]));
        } else {
            odd_sum = PoddSum[i - 1] + (PevenSum[N - 1] - PevenSum[i]);
			even_sum = PevenSum[i - 1] + (PoddSum[N - 1] - PoddSum[i]);
        }

        if(odd_sum == even_sum){
            count++;
        }
    }
    
    return count;
}

void printArr(vector<int> A) {
    int N = A.size();
    for(int i=0;i<N;i++){
        cout << A[i] << " ";
    }cout << endl;
    cout << "-------";
    cout << endl;
}

int main() {
    vector<int> arr = {2, 1, 6, 4};
    int count = countWaysToMakeOddEvenIndexSumEqual(arr);
    cout << count << endl;
    return 0;
}