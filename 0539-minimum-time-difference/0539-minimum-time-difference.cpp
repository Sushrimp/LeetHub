class Solution {
public:
    int min(int a, int b){
        return a < b ? a : b;
    }

    int convert(string time){
        int hour = stoi(time.substr(0,2)) * 60;
        int minute = stoi(time.substr(3,2));
        return hour+minute;
    }

    int findMinDifference(vector<string>& timePoints) {
        sort(timePoints.begin(), timePoints.end());
        timePoints.push_back(timePoints[0]);

        int res = INT_MAX;

        for(int i = 0 ; i < timePoints.size()-1 ; i++){
            int temp1 = convert(timePoints[i]);
            int temp2 = convert(timePoints[i+1]);

            res = min(res, abs(temp1-temp2));
            res = min(res, abs(temp1-(1440+temp2)));
        }

        return res;
    }
};