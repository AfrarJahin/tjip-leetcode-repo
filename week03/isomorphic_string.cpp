class Solution {
public:
    bool isIsomorphic(string s, string t, int iteration = 0) {
        unordered_map<char, char>isomor;
        for(int i = 0; i < s.size(); i++){
            if(isomor[s[i]]){
                if(isomor[s[i]] == t[i])continue;
                else return false;
            }
            isomor[s[i]]= t[i];
        }
        if(iteration == 0)return isIsomorphic(t,s,1);
        return true;
    }
};

//Time complexity: O(N)
//Space complexity: O(N)