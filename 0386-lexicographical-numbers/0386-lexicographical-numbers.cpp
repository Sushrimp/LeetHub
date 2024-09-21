class Solution {
public:
    static bool comparator(int a, int b){
        return to_string(a) < to_string(b);
    }

    vector<int> lexicalOrder(int n) {
        vector<int> res;

        for (int i = 1; i <= n; ++i) {
            res.push_back(i);
        }

        sort(res.begin(), res.end(), comparator);

        return res;
    }
    
};