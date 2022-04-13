class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int winner, vote_count = 1;
        if(nums.size()){
            winner = nums[0];
        }
        for(int i = 1; i < nums.size(); i++){
             if(vote_count == 0){
                winner = nums[i];
            }
            if(nums[i] == winner){
                vote_count++;
            }
            else{
                vote_count--;
            }
        }
        return winner;
    }
};
//time complexity: O(N)
//space complexity: O(1)