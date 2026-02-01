class Solution {
public:
    string reverseByType(string s) {
        vector<char> letters;
        vector<char> specials;

        // 1) Traverse string (normal for)
        for (int i = 0; i < s.size(); i++) {
            char ch = s[i];
            if (ch >= 'a' && ch <= 'z') {
                letters.push_back(ch);
            } else {
                specials.push_back(ch);
            }
        }

        // 2) Reverse both
        reverse(letters.begin(), letters.end());
        reverse(specials.begin(), specials.end());

        // 3) Put back
        int li = 0, si = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                s[i] = letters[li++];
            } else {
                s[i] = specials[si++];
            }
        }

        return s;
    }
};
