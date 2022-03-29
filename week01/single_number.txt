class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int singleItem = 0;
        for(int i = 0; i < nums.size(); i++){
            singleItem ^= nums[i];
        }
        return singleItem 
    }
};

Time complexity: O(N)
Space complexity : O(1)