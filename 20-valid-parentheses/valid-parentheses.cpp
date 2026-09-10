class Solution {
public:
    bool isValid(string s) {
        stack<int>stack;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{')
            stack.push(s[i]);
            if(s[i]==')'){
            if(stack.empty() || stack.top()!='(')
            return false;
            stack.pop();
            }
            if(s[i]==']'){
            if(stack.empty() || stack.top()!='[')
            return false;
            stack.pop();
            }
            if(s[i]=='}'){
            if(stack.empty() || stack.top()!='{')
            return false;
            stack.pop();
            }
        }
        return stack.empty();
    }
};