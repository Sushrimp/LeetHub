class Solution {
public:
    bool startsWith(const string& str, const string& prefix) {
        if (str.size() < prefix.size()) {
            return false;
        }
        return str.compare(0, prefix.size(), prefix) == 0;
    }

    string shortestPalindrome(string s) {
        string r = s;
        reverse(r.begin(), r.end());

        for(int i = 0 ; i < r.size() ; i++){
            if(startsWith(s, r.substr(i))){
                return r.substr(0, i) + s;
            }
        }

        return r + s;
    }
};