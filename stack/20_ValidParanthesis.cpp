class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char c : s){
            if (c == '(' || c == '[' || c == '{'){
                st.push(c);
            }
            if (c == ')' || c == '}' || c == ']'){
                if(st.empty()){
                    return false;
                }
                if (c == ')' && st.top() != '(')
                    return false;
                if (c == ']' && st.top() != '[')
                    return false;
                if (c == '}' && st.top() != '{')
                    return false;
                st.pop();    
            }
        }
        if(st.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};