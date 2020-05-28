/* Combination Sum II */
class Solution {
    void findCombination(vector<int>  candidates,int target,vector<vector<int>>& result,vector<int>& curr,int i,int n)
    {
        if(target==0)
        {
            result.push_back(curr);
            return;
        }
     
        
        for(int j=i;j<n;j++)
        {
            if(i!=j && candidates[j]==candidates[j-1])
                continue;
            
            if(candidates[j]<=target)
            {
                curr.push_back(candidates[j]);
                findCombination(candidates,target-candidates[j],result,curr,j+1,n);
                curr.pop_back();
            }
        }
        
        
            
             
     }
    
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<vector<int>> result;
        vector<int> curr;
        
        if(n==0)
        {
            return result;
        }
        sort(candidates.begin(),candidates.end());
        
        findCombination(candidates,target,result,curr,0,n);
        
        return result;
        
    }
};
