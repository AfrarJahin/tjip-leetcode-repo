class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>result;
        unordered_map<int, int>seen;
        sort(nums.begin(),nums.end());
        for(int i = 0; i < nums.size(); i++){
            seen[nums[i]] = i;
        }
        
        for(int i = 0; i < nums.size(); i++){
            int target = 0 - nums[i];
            for(int j = i + 1; j < nums.size(); j++){
                int rem_target = target - nums[j];
                if(seen[rem_target] && seen[rem_target] > j)//to handle duplicate triplets
                {
                    result.push_back({nums[i],nums[j],rem_target});
                }
                j = seen[nums[j]];//to handle duplicate elements and triplets
            }
            i = seen[nums[i]];//to handle duplicate elements
        }
        return result;
    }
};