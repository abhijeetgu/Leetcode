/* 46. Permutations */

class Solution {
    void permute(vector<int> & nums,vector<vector<int>> &res,int i,int n)
    {
        if(i==n)
        {
            res.push_back(nums);
            return;
        }
        
        for(int j=i;j<n;j++)
        {
            swap(nums[j],nums[i]);
            permute(nums,res,i+1,n);
            swap(nums[j],nums[i]);
            
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) 
    { 
        int n= nums.size();
        vector<int> curr;
        vector<vector<int>> res;
        if(n==0)
            return res;
        permute(nums,res,0,n);
        return res;
        
    }
};
