/*39. Combination Sum*/
class Solution {
     void findCombination(vector<int>  candidates,int target,vector<vector<int>>& result,vector<int>& curr,int i,int n)
    {
        if(target==0)
        {
            result.push_back(curr);
            return;
        }
        if(target<0)
            return;
        
         
        while(i<n && target-candidates[i]>=0)
         {
           
            
                curr.push_back(candidates[i]);
                findCombination(candidates,target-candidates[i],result,curr,i,n);
                   
                i++;
                    
                curr.pop_back();
            
                 
         }
         
       
     }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
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
