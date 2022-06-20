void insertEle(stack<int> &st, int x){
    if(st.empty() || st.top()<x){
        st.push(x);
        return;
    }
    
    int ele = st.top();
    st.pop();
    insertEle(st,x);
    st.push(ele);
}

void sortStack(stack<int> &st)
{
	// Write your code here
    if(st.empty() || st.size()==1)    return ;
    
    int ele = st.top();
    st.pop();
    sortStack(st);
    insertEle(st,ele);
}