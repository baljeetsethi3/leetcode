class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        int x,y;
    map<int,int> m;
    //int n=sizeof(nums[])/4;
    for(int i=0;i<nums.size();i++)
    {
        m[nums[i]]++;
    }
    for(int i=0;i<nums.size();i++)
    {
        int temp=target-nums[i];
        m[nums[i]]--;
        if(m[temp]!=0)
        {
            x=nums[i];
            y=temp;
            m[nums[i]]++;
            break;
        }
        m[nums[i]]++;
    }
        m.clear();
      for(int i=0;i<nums.size();i++)
      {
          if(nums[i]==x)
          {
              v.push_back(i);
              m[i]++;
              break;
          }
      }
        for(int i=0;i<nums.size();i++)
      {
          if(nums[i]==y&& m[i]==0)
          {
              v.push_back(i);
              break;
          }
      }
        return(v);
    }
};