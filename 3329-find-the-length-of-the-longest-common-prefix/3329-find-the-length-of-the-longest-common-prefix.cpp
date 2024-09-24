class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        int res = 0;
        unordered_set<string> prefix;

        for(int num : arr1){
            string temp = std::to_string(num);
            for(int i = 1 ; i <= temp.size() ; i++){
                prefix.insert(temp.substr(0,i));
            }
        }

        for(int num : arr2){
            string temp = std::to_string(num);
            for(int i = 1 ; i <= temp.size() ; i++){
                string check = temp.substr(0,i);
                if (prefix.find(check) != prefix.end()) res = res > check.size() ? res : check.size();
            }
        }

        return res;
    }
};