#include<iostream>
#include<cstring>
using namespace std;

//declare the funtion'
void seiveoferastothenes(int);

void seiveoferastothenes(int num)
{
    //Step 1; Create bool array
    // this is due to indexing if 10 0 - 9, 10+1 0-10
    bool prime[num+1]; 
    //set all the block value to 0 or -1 we set to 0
    memset(prime, true, sizeof(prime));//value set to true means first time we set all the values are prime
    
    for(int p=2;p*p<=num;p++)
    {
        //prime[p] = false; --> it means this will not a prime number
        if(prime[p] == true)
        {
            //check the multiple of p and set them to false
            for(int i=p*p; i<=num; i = i+p)
            {
                prime[i] = false;
            }
        }
    }

    //print prime number
    for(int j=2; j<=num; j++)
    {
        if(prime[j]==true)
            cout<<j<<endl;
    }

}

int main()
{
    cout<<"Enter number upto which you want to print the prime number "<<endl;
    int n;cin>>n;
    seiveoferastothenes(n);
    
    return 0;
}