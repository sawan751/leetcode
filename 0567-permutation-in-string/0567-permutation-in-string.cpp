bool equal(const int* a, const int* b) {  // Modified to take 2 parameters
    for (int i = 0; i < 26; ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int len1 = s1.length(), len2 = s2.length();
        if (len1 > len2) return false;

        int count1[26] = {0}, count2[26] = {0};

        for (int i = 0; i < len1; ++i) {
            count1[s1[i] - 'a']++;
            count2[s2[i] - 'a']++;
        }

        for (int i = 0; i <= len2 - len1; ++i) {
            if (i > 0) {
                count2[s2[i - 1] - 'a']--;
                count2[s2[i + len1 - 1] - 'a']++;
            }
            if (equal(count1, count2)) {  // Modified to use 2 parameters
                return true;
            }
        }
        return false; 
    }
};
