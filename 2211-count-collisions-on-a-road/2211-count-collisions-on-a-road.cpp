class Solution {
public:
    int countCollisions(string directions) {
        int count = 0;
        int i = 0,j = directions.size()-1;
        while(i<=j && directions[i] =='L') i++;
        while(j>=i && directions[j] == 'R')j--;
        for(int k = i;k<=j;k++){
            if(directions[k]=='L' || directions[k] =='R'){count++;}
        }
        return count;
    }
};