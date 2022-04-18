#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        vector<int> result ;
        vector<int> subarray;
        
        for(int i=0;i<k;i++)
        {
            subarray.push_back(nums[i]);
        }
        
        for(int i=k;i<nums.size();i++)
        {
            result.push_back(*max_element(subarray.begin(),subarray.end()));
            subarray.push_back(nums[i]);
            subarray.erase(subarray.begin());
        }
        
        result.push_back(*max_element(subarray.begin(),subarray.end()));
        return result;
    }

int main()
{
  vector<int> vec {10,56,98,101,23};
  vector<int> res = maxSlidingWindow(vec,3);
  cout<<"\n The result is "<<endl;
  for(auto &ele:res)
  {
    cout<<ele<<" ";
  }
  return 0;
}

