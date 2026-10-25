class Solution {
public:
    string removeOccurrences(string s, string part) {

        while (s.length() > 0 && s.find(part) < s.length()) {

            int idx = s.find(part);

            s.erase(idx, part.length());
        }

        return s;
    }
};