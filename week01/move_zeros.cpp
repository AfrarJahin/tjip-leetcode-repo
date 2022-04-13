class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index = 0;
        for(int i = 0; i < nums.size(); i++){
              if(nums[i]!=0){
                  nums[index++] = nums[i];
              }
          }
        int rem = nums.size()-index;
        // cout<<rem<<endl;
        while(rem--){
            nums[index++] = 0;
        }
        
    }
};

Time Complexity: O(N)
Space Complexity: O(1)