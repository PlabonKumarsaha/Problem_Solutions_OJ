class Solution {
    public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
      const int size = nums.size();
        vector<int> twoSums;
        for (int i = 0 ; i < size - 1; i++ )
            for (int j = i+1; j < size; j++)
                if(nums[i] + nums[j] == target)
                {
                    twoSums.push_back(i);
                    twoSums.push_back(j);
                    return twoSums;
                }
        return twoSums;
    }  
    
};
