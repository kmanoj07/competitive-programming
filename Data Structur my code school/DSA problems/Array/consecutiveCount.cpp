#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int> v;
      
        int i = 0;
        int conseOnes = 0;
        while( i < nums.size()){
            
            if(nums[i] == 1)
            {
                conseOnes += 1;
            }
            else
            {
                v.push_back(conseOnes);
                conseOnes = 0;
            }
            i++;
        }

        v.push_back(conseOnes);
        
        int maxConsecCount = INT_MIN;

        for(int i=0; i<v.size(); i++) 
        {
            if(v[i] > maxConsecCount)
            {
                maxConsecCount = v[i];
            }
        }
        
        return maxConsecCount;
    }

int main()
{
    vector<int> nums = {1,1,0,1,1,1};
    cout << findMaxConsecutiveOnes(nums);
    
    return 0;
}