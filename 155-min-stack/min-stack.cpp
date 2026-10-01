class MinStack {
public:
    stack<long long> st;
    long long minn;

    MinStack() {
        minn = LLONG_MAX;
    }

    void push(int value) {
        if(st.empty()) {
            st.push(value);
            minn = value;
        }
        else if(value >= minn) {
            st.push(value);
        }
        else {
            st.push(2LL * value - minn);
            minn = value;
        }
    }

    void pop() {
        if(minn <= st.top()) {
            st.pop();
        }
        else {
            minn = 2LL * minn - st.top();
            st.pop();
        }
    }

    int top() {
        if(minn > st.top()) {
            return minn;
        }
        else {
            return st.top();
        }
    }

    int getMin() {
        return minn;
    }
};