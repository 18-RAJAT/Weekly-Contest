class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        vector<int> ans(nums.size(),0);
        
        int positive_index=0,negative_index=1;
        
         for(auto num: nums)
        {
            if(num > 0)
            {
                ans[positive_index]=num;
            
                positive_index += 2;
            }
            
            if(num < 0)
            {
                ans[negative_index]=num;
                
                negative_index += 2;
            }
        }
        
        return ans;
        
        
    }
};


/*

Time complexity : O(n)
Space Complexity : O(n)

*/