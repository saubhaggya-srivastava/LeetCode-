class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
         int n = asteroids.size();
    stack<int> st;

    for (int i = 0; i < n; i++) {
        while (!st.empty() && asteroids[i] < 0 && st.top() > 0) {
            int ans = asteroids[i] + st.top();
            if (ans < 0) {
                st.pop();
            } else if (ans > 0) {
                asteroids[i]=0;
               
            } else {
                st.pop();
                asteroids[i]=0;
            }
        }

        if (asteroids[i] != 0) {
            st.push(asteroids[i]);
        }
    }

    int s = st.size();
    vector<int> result(s);
    int i = s - 1;

    while (!st.empty()) {
        result[i] = st.top();
        st.pop();
        i--;
    }

 return result;
    }
};