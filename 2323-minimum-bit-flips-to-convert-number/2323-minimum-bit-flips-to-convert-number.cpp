class Solution {
public:
    int minBitFlips(int start, int goal) {
        int steps = 0;
        while(start > 0 && goal > 0){
            int num1 = start%2;
            int num2 = goal%2;

            if(num1 != num2) steps++;

            start >>= 1;
            goal >>= 1;
        }

        while(start > 0) {
            int num = start%2;
            if(num != 0) steps++;
            start >>= 1;
        }

        while(goal > 0){
            int num = goal%2;
            if(num != 0) steps++;
            goal >>= 1;
        }

        return steps;
    }
};