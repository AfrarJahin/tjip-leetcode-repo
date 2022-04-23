class Solution {
public:
    long long int MOD = 10007;
    unsigned long long getHash(string str){
        unsigned long long hashValue = 1;
        for(int i = 0; i < str.size(); i++){
            hashValue = (hashValue * (257 + str[i] - 'a'));
        }
        return hashValue;
    }
    
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<unsigned long long,vector<string>>groupOfAnagrams;
        vector<vector<string>>result;
        
        for(int i = 0; i < strs.size(); i++){
            groupOfAnagrams[getHash(strs[i])].push_back(strs[i]);
        }
        for(auto &item:groupOfAnagrams){
            result.push_back(item.second);
        }
        return result;
    }
};

//Time complexity: O(Length of string array * N) , N = Length of maximum size string
//Space complexity: O(Length of string array * N)