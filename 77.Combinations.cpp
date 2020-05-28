/* Combinations */
class Solution {
    void pattern(int n,int k,vector<vector<int>> &res,int i,vector<int> &curr)
    {
        if(k==0)
        {
            res.push_back(curr);
            return;
        }
        
        for(int j=i;j<=n;j++)
        {
            curr.push_back(j);
            pattern(n,k-1,res,j+1,curr);
            curr.pop_back();
        }
        
        
       
        
    }
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> curr;
        if(k==0)
            return res;
        
        pattern(n,k,res,1,curr);
        
        return res;
        
    }
};
