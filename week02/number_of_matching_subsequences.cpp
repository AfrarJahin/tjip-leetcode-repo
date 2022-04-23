class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        unordered_map<char,vector<int>>subSeq;
        for(int i = 0; i < s.size(); i++){
            subSeq[s[i]].push_back(i);
        }
        int result = 0;
        for(int i = 0; i< words.size(); i++){
            string word = words[i];
            int curr_position = -1;
            for(int j = 0; j < word.size(); j++){
                auto it = upper_bound(subSeq[word[j]].begin(),subSeq[word[j]].end(), curr_position);
                if(it==subSeq[word[j]].end())break;
                if(j == word.size() - 1)result++;
                curr_position = *it;
            }
        }
        return result;
    }
};

//Time complexity: O(Length of words array * N * LogN)
//Space complexity: O(N) 