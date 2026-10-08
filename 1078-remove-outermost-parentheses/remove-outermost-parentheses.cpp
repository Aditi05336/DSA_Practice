class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>st;
        string ans="";
       /* for(char ch:s){
            if(ch=='('){
                if(!st.empty()){
                    ans+=ch;
                }
                st.push(ch);
            }
            else{
                st.pop();
                if(!st.empty()){
                    ans+=ch;
                }

            }

        }
        return ans;
        */
        int bal=0;
        for(char ch:s){
            if(ch=='('){
                if(bal>0){
                    ans+=ch;
                }
                bal++;

            }
            else{
                bal--;

                if(bal>0){
                    ans+=ch;
                }
            }
        }

        return ans;
        
    }
};