class Solution {
public:
    vector<int> solve (string str){
        vector<int> res;

        for(int i = 0 ; i < str.size() ; ++i){
            char temp = str[i];
            if(temp == '+' || temp == '*' || temp == '-'){
                vector<int> temp1 = solve(str.substr(0, i));
                vector<int> temp2 = solve(str.substr(i+1));
                for(int a : temp1){
                    for(int b : temp2){
                        if(temp == '+') res.push_back(a+b);
                        else if(temp == '-') res.push_back(a-b);
                        else if(temp == '*') res.push_back(a*b);
                    }
                }
            }
        }

        if(res.empty()) res.push_back(stoi(str));

        return res;
    }

    vector<int> diffWaysToCompute(string expression) {
        vector<int> res;
        res = solve(expression);

        return res;
    }
};