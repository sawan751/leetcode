class Solution {
public:
    string convert(string s, int numRows) {

        if(numRows == 1) return s;

        vector<string> rows(numRows);

        int currRows = 0;
        int dir = 1;

        for(char c : s) {

            rows[currRows] += c;
            //cout<<currRows<<" "<< rows[currRows]<<endl;

            if(currRows == 0)
                dir = 1;

            else if(currRows == numRows - 1)
                dir = -1;

            currRows += dir;
        }

        string ans;

        for(string r : rows) {
            ans += r;
        }

        return ans;
    }
};