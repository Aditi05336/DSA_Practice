class Solution {
public:

    bool isValid(string s) {
        int balance = 0;

        for(char c : s) {
            if(c == '(') {
                balance++;
            }
            else if(c == ')') {
                balance--;
            }

            // More ')' than '('
            if(balance < 0)
                return false;
        }

        // All '(' must also be closed
        return balance == 0;
    }

    vector<string> removeInvalidParentheses(string s) {

        vector<string> ans;

        queue<string> q;
        unordered_set<string> visited;

        q.push(s);
        visited.insert(s);

        bool found = false;

        while(!q.empty()) {

            string curr = q.front();
            q.pop();

            // Check whether current string is valid
            if(isValid(curr)) {
                ans.push_back(curr);
                found = true;
            }

            // If valid strings are found at this level,
            // don't remove any more parentheses.
            if(found)
                continue;

            // Remove one parenthesis and generate next level
            for(int i = 0; i < curr.length(); i++) {

                if(curr[i] != '(' && curr[i] != ')')
                    continue;

                string next = curr.substr(0, i) 
                            + curr.substr(i + 1);

                if(!visited.count(next)) {
                    visited.insert(next);
                    q.push(next);
                }
            }
        }

        return ans;
    }
};