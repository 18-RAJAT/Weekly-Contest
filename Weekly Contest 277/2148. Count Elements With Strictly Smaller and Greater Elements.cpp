class Solution {
public:
    int countElements(vector<int>& nums) {
        
        int count =0;
      
        for(int i=0;i<nums.size();++i)
        
        {
        int first =0;
        int second =0;
        
        for(int j=0;j<nums.size();++j)
        {
            if(nums[j] > nums[i]) first=1;
            if(nums[j] < nums[i]) second=1;
        }
            
            if(first == 1 && second ==1)
                count++;
        }
        return count;
    }
};