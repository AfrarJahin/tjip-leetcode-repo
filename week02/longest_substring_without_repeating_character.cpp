class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int longestLength = 0,L=0,R=0;
        vector<int>freq(256,0);
        while(R < s.size()){
            if(freq[s[R]] > 0){
             while(freq[s[R]] > 0){
                 freq[s[L]]--;
                 L++;
             }
            }
            freq[s[R]]++;
            R++;
            longestLength = max(longestLength ,R-L);
        }
         return longestLength;
        }
       
};

//Time complexity: O(N)
//Space complexity: O(1)