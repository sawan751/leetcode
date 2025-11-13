#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());
        
        int i = 0, j = 0;
        int res = 0;
        
        while (i < players.size() && j < trainers.size()) {
            if (players[i] <= trainers[j]) {
                // Trainer j can train player i
                res++;
                i++;
                j++;
            } else {
                // Trainer j is too weak, move to next stronger trainer
                j++;
            }
        }
        
        return res;
    }
};
