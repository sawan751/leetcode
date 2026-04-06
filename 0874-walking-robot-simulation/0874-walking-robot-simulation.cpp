class Solution {
public:
    char changedir(char d,int move){
        vector<char> dir = {'N','E','S','W'};
        int pole = 0;
        for(pole = 0;pole<4;pole++){
            if(dir[pole] == d) break;
        }
        if(move == -1){ 
            return dir[(pole+1) % 4];
        }
        else if(move == -2){
            return dir[(pole+3)% 4];
        }
        else{
            return d;
        }
    }
    bool checkobs(vector<int> &pos, char d, set<pair<int,int>> &obs) {
        int nx = pos[0];
        int ny = pos[1];

        if(d == 'N') ny++;
        else if(d == 'E') nx++;
        else if(d == 'S') ny--;
        else if(d == 'W') nx--;

        if(obs.count({nx, ny})) return false;

        pos[0] = nx;
        pos[1] = ny;
        return true;
    }
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        
        int n = commands.size();
        char d = 'N';
        set<pair<int,int>> obs;
        for(auto &obbs:obstacles){
            obs.insert({obbs[0],obbs[1]});
        }
        int ans = 0;
        vector<int> pos(2,0);
        for(int i = 0;i<n;i++){
            if(commands[i]<0){
                d = changedir(d,commands[i]);
            }else{
                for(int step = 0; step < commands[i]; step++){
                    if(!checkobs(pos, d, obs)) break;

                    int x = pos[0];
                    int y = pos[1];
                    ans = max(ans, x*x + y*y);
                }
            }
        }
        return ans;
    }
};