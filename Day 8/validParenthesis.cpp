bool isValidParenthesis(string exp)
{
    // Write your code here.
    stack <char> st;
    for(int i=0;i<exp.size();i++){
        if(exp[i]=='{' || exp[i]=='[' || exp[i]=='('){
            st.push(exp[i]);
        }else{
                if(  !st.empty() && (st.top()=='(' && exp[i]==')' 
                  || st.top()=='{' && exp[i]=='}'
                  || st.top()=='[' && exp[i]==']')){
                    st.pop();
                }else{
                    return false;
                }
        }
    }
    return st.size()==0;
}