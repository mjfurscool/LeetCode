//Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
// An input string is valid if:
// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
class Solution {
public:
    bool isValid(string s) {
        string left = "([{";
        string right = ")]}";
        stack<char> stk;
        
        for(auto c : s){
            if(left.find(c) != string::npos){ //c is a left parenthese
                stk.push(c);
            }else{ //c is a right parenthese
                if(stk.empty() || stk.top() != left[right.find(c)])// right parenthese c does not have a match on the left 
                    return false;
                else
                    stk.pop();
            }
        }
        return stk.empty();
    }
};