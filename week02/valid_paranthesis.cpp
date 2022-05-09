class Solution {
public:
    bool isValid(string s) {
        stack<char>paranStack;
        int size = s.size();
        
        for(int i = 0; i < size; i++){
            
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                paranStack.push(s[i]);
            }
            else{
                if(paranStack.empty()){
                    return false;
                }
              
                if(s[i] == ')' && paranStack.top() == '('){
                     paranStack.pop();
                 }
                else if(s[i] == '}' && paranStack.top() == '{'){
                    paranStack.pop();
                }
                else if(s[i] == ']' && paranStack.top() == '['){ 
                        paranStack.pop();
                }
                else{
                    return false;
                }
            }
        }
        
        if(paranStack.empty() == true){
            return true;
        }
        else{
            return false;
        }
    }
};

//Time complexity: O(N)
//Space complexity: O(N)