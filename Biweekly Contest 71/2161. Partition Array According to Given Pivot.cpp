class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        
         int n=nums.size();
        vector<int> answer(n);
        
        int l=0;
        for(int i=0;i<n;i++){
            if(nums[i]<pivot){
                answer[l++]=nums[i];
            }
        }
        
        for(int i=0;i<n;i++){
            if(nums[i]==pivot){
                 answer[l++]=nums[i];
            }
        }
          for(int i=0;i<n;i++){
            if(nums[i]>pivot){
                 answer[l++]=nums[i];
            }
        }
        return answer;
        
    }
};