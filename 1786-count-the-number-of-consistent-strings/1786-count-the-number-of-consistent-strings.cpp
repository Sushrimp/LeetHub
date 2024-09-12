class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> set;
        int counter = 0;

        for(char c : allowed) set.insert(c);

        for(string s : words){
            bool flag = true;
            for(char c : s){
                if(set.find(c) == set.end()){
                    flag = false;
                    break;
                }
            }

            if(flag) counter++;
        }

        return counter;
    }
};