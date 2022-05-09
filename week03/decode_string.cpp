class Solution {
public:
    string decodeString(string s) {
        stack<char>charStack;
        string res = "";
        
        for(int i = 0; i < s.size(); i++){
            if(s[i] != ']'){
                charStack.push(s[i]);
            }
            else{
                string str = "";
                
                while(!charStack.empty() && charStack.top() != '['){
                    str = charStack.top()+ str;
                    charStack.pop();
                }
                
                charStack.pop();
                string num = "";
                
                while(!charStack.empty() && isdigit(charStack.top())){
                    num = charStack.top()+ num;
                    charStack.pop();
                }
                
                int preNum = stoi(num);
                
                while(preNum--){
                    for(int j = 0; j < str.size();j++){
                        charStack.push(str[j]);
                    }
                }
            }
        }
        while(!charStack.empty()){
           res =  charStack.top() + res; 
            charStack.pop();
        }
        return res;
        
    }
};

//Time complexity: O(N)
//Space complexity: O(N)