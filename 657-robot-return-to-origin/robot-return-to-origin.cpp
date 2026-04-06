class Solution {
public:
    bool judgeCircle(string moves) {
        int x_axis =0;
        int y_axis =0;

        for(char ch: moves){

            if(ch == 'U') y_axis++;
            if(ch == 'D') y_axis--;

            if(ch == 'R') x_axis++;
            if(ch == 'L') x_axis--;
        }
        return (x_axis == 0 && y_axis == 0) ? true :false; 
    }
};