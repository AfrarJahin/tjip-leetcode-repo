class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp;
        vector<int>res;
        for(int i = 0; i < nums.size();i++){
            int rem = target - nums[i];
            if(mp[rem]){
                res.push_back(i);
                res.push_back(mp[rem] - 1);
                break;
            }
            mp[nums[i]] = i + 1;
        }
        return res;
        
    }
};

//Time complexity: O(N)
//Space complexity: O(N)