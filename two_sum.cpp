class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,l,j,c=nums.size();
      
      
        for(i=0;i<c;i++)
        {
           
            for(j=i+1;j<c;j++)
            {
                l=nums[i]+nums[j];
    
          if(l==target)
          {
            return{i,j};
          }
            }
        
        }
        
  return{}; }
    
   
};