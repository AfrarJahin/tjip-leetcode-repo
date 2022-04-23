class Solution {
public:
    long long int mod = 10007;
    unsigned long long getHash(string &str){
        unsigned long long hashValue = 1;
        for(int i = 0; i < str.size();i++){
            hashValue = (hashValue * (257 + (str[i] - 'a')))% mod;
        }
        return hashValue;
    }
    bool isAnagram(string s, string t) {
        
        if(getHash(s) == getHash(t))return true;
        return false;
        
    }
};
//Time complexity:  O(N)
//Space complexity: O(1)