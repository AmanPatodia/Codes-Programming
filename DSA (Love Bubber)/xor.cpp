#include<bits/stdc++.h>
using namespace std;

int main()
{   vector<int>nums={4,2,5,7};
      vector<int>odd;
      vector<int>even;
        int k=0,j=0;        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                even.push_back(nums[i]);
            }
            else 
            {
                odd.push_back(nums[i]);
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0)
            {
                nums[i]=even[k];
                k++;
            }
            else 
            {
                nums[i]=odd[j];
                j++;
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            cout<<nums[i]<<" ";
        }
        return  0;
}