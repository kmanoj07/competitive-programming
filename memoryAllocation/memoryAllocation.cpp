// SMA VS DMA
// Static memory allocation and Dynamic memory allocation
// For static memory allocation it will decide at the compile time how much memory it will take in the memory 


//DMA -> We will decide at run time how much memory wil required
//Dynamic declarion will not determin eby the compile time it will only done at run time

#include<iostream>
using namespace std;

int main()
{
    int *p = new int; // Static memory allocation == dynamic memory allocation
    float *q = new float[5]; // iske starting byte ka address return hoga and q pointer main store ho jayega
    

    // delete -- It will only release the memory DMA
    delete p;
    delete []q;

    return 0;
}