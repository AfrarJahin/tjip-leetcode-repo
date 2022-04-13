class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int smallest_num;
        unordered_set<int>set(nums.begin(),nums.end());
        
        for(int i = 1; i <= nums.size() + 1; i++){
            if(set.count(i)== 0){
                smallest_num = i;
                break;
            }
        }
        return smallest_num;
    }
};

Time complexity: O(n)
space complexity: O(n)