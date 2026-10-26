
class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;

        for (int i = 0; i < num.length(); i++) {
            while (!st.empty() && k > 0 &&
                   st.top() > num[i]) {
                st.pop();
                k--;
            }
            st.push(num[i]);
        }

        // Remove remaining digits from the end
        while (k > 0 && !st.empty()) {
            st.pop();
            k--;
        }

        string str = "";

        while (!st.empty()) {
            str.push_back(st.top());
            st.pop();
        }

        reverse(str.begin(), str.end());

        // Remove leading zeros
        int i = 0;
        while (i < str.length() && str[i] == '0') {
            i++;
        }

        str = str.substr(i);

        // Handle empty result
        if (str.empty()) {
            return "0";
        }

        return str;
    }
};
