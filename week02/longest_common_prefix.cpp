class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string longestPrefix = strs[0];
        if(strs.size() == 1)return strs[0];
        for(int i = 1; i < strs.size(); i++){
            while(strs[i].find(longestPrefix) != 0){
                longestPrefix = longestPrefix.substr(0, longestPrefix.size() - 1);
                if(longestPrefix.size() == 0) return "";
            }
        }
       
        return longestPrefix;
    }
};

//time complexity: O(size of string array * N * K) [k = substring operation cost, N = length of the string]
//space complexity: O(N)