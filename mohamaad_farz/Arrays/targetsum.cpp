#include<iostream>
#include<vector>
using namespace std;



int main()
{
    vector<int> v = {2, 4, 3, 1, 7, 11};
    int target = 10;

    //Brute force technique
    for(int i = 0; i < v.size(); i++)
    {
        for(int j = i+1; j < v.size(); j++)
        {
             if(v[i] + v[j] == 10)
             {
                 cout<<v[i]<<" "<<v[j]<<endl;
                 break;
             }
        }
    }

    //lets write an optimal solution
    

    return 0;
}