class Solution {
public:
    static bool compare(const string &a, const string &b) {
        return a + b > b + a;
    }

    string largestNumber(vector<int>& nums) {
        vector<string> numStrs;
        for (int i : nums) {
            numStrs.push_back(to_string(i));
        }

        sort(numStrs.begin(), numStrs.end(), compare);
        
        if (numStrs[0] == "0") {
            return "0";
        }

        string result;
        for (const string &str : numStrs) {
            result += str;
        }

        return result;
    }
};