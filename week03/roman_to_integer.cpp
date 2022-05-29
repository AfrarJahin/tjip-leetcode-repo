class Solution {
public:
    int romanToInt(string s) {
        vector<char>symbols{'I', 'V','X','L','C','D','M'};     
        vector<int>values{1,5,10,50,100,500,1000};  
        unordered_map<char, int>romantoInt;
        
        for(int i = 0; i < symbols.size() ; i++){
            romantoInt[sym1bols[i]] = values[i];
        }
        int result = 0;
        for(int i = 0; i < s.size();i++){
            if(i+1 < s.size() && ((s[i] == 'I' && s[i+1]== 'V') || 
                                  (s[i] == 'I' && s[i+1]== 'X') || 
                                  (s[i] == 'X' && s[i+1]== 'L') ||  
                                  (s[i] == 'X' && s[i+1]== 'C') || 
                                  (s[i] == 'C' && s[i+1]== 'D') || 
                                  (s[i] == 'C' && s[i+1]== 'M'))){
                result += romantoInt[s[i+1]] - romantoInt[s[i]];
                i++;
            }
            else{
                 result += romantoInt[s[i]];
            }
           
        }
        return result;
    }
};

//Time complexity: O(N)
//Space complexity: O(1)