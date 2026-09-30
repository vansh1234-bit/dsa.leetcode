class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
    vector<int> ans;
    stack<int> st;

    for(int i = 0; i < asteroids.size(); i++) {

        int curr = asteroids[i];

        if(st.empty()) {
            st.push(curr);
        }

        else {

            while(!st.empty()) {

                if(st.top() * curr >= 0 || st.top() < 0) {
                    st.push(curr);
                    break;
                }

                else {

                    if(st.top() < abs(curr)) {
                        st.pop();
                    }

                    else if(st.top() == abs(curr)) {
                        st.pop();
                        curr = 0;
                        break;
                    }

                    else {
                        curr = 0;
                        break;
                    }
                }
            }

            if(st.empty() && curr != 0) {
                st.push(curr);
            }
        }
    }

    while(!st.empty()) {
        ans.push_back(st.top());
        st.pop();
    }

    reverse(ans.begin(), ans.end());

    return ans;
}
    };