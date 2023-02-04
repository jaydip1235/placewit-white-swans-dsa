class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string fs="";
        string ss="";

        stack<char>st;
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if(ch=='#' && st.size()>0){
                st.pop();
            }
            if(ch=='#'){
                continue;
            }
            else{
                st.push(ch);
            }
        }
        while(st.size()>0){
            fs+=st.top();
            st.pop();
        }

        for(int i=0;i<t.size();i++){
            char ch=t[i];
            if(ch=='#' && st.size()>0){
                st.pop();
            }
            if(ch=='#'){
                continue;
            }
            else{
                st.push(ch);
            }
        }

        while(st.size()>0){
            ss+=st.top();
            st.pop();
        }
        return fs==ss;

    }
};






