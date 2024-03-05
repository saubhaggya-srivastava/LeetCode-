#include <string>

class Solution {
public:
    int minimumLength(std::string s) {
        int left = 0;
        int right = s.length() - 1;
        
        while (left < right && s[left] == s[right]) {
            char var = s[left];
            
            // Remove matching characters from both ends
            while (left <= right && s[left] == var) {
                left++;
            }
            while (left <= right && s[right] == var) {
                right--;
            }
        }

        return right - left + 1;
    }
};
