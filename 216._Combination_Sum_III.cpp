class Solution {
    void combination(int k,int n,vector<vector<int>> &res,vector<int>& curr,vector<int> &nums,int i)
    {
        if(curr.size()==k && n ==0)
        {
            res.push_back(curr);
            return;
        }
        if(n<0 || curr.size()>k)
            return;
        
        for(int j=i;j<9;j++)
        {
            curr.push_back(nums[j]);
            combination(k,n-nums[j],res,curr,nums,j+1);
            curr.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        vector<int> curr;
        vector<int> nums = {1,2,3,4,5,6,7,8,9};
        if(n==0)
            return res;
        
        combination(k,n,res,curr,nums,0);
        
        return res;
        
    }
};
