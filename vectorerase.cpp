#include<iostream>
#include<vector>
using namespace std;

int main()
{
     vector<int> ans;
     int n, pos, s, e;
     cout<<"Enter size >> ";
     cin>>n;
     for(int i=0;i<n;i++){
         int val=0;
         cin >> val;
         ans.push_back(val);
     }
     for(int i=0;i<ans.size();i++){
         cout<<ans[i]<<" ";
     }
     cout<<"\n Enter the position >> ";
     cin >> pos;
     cout << "\n Enter range >> ";
     cin >> s >> e;
     cout<<"\nerasing the element at this position ";
     ans.erase(ans.begin()+pos);
     cout<<"\nerasing the element at range";
     ans.erase(ans.begin()+s, ans.end()+e);
     cout<<"the size of an array is >> ";
     cout<<"The size of the array is"<< ans.size() << endl;
     for(int i=0;i<ans.size();i++){
         cout<<ans[i]<<" ";
     }
    return 0;
}