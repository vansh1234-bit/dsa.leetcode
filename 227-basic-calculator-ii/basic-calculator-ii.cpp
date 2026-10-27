class Solution {
public:
    int calculate(string s) {
        stack<int> st;
        char op = '+';

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') {
                continue;
            }

            if (isdigit(s[i])) {
                int num = 0;

                while (i < s.length() && isdigit(s[i])) {
                    num = num * 10 + (s[i] - '0');
                    i++;
                }
                i--;

                if (op == '+') {
                    st.push(num);
                }
                else if (op == '-') {
                    st.push(-num);
                }
                else if (op == '*') {
                    int val = st.top() * num;
                    st.pop();
                    st.push(val);
                }
                else if (op == '/') {
                    int val = st.top() / num;
                    st.pop();
                    st.push(val);
                }
            }
            else {
                op = s[i];
            }
        }

        int ans = 0;

        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        return ans;
    }
};