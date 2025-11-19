class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> op;
        int i = 0;
        for(int num =1;num<=n;num++){
            if(i==target.size())break;

            if(num ==target[i]){
                op.push_back("Push");
                i++;
            }
            else{
                op.push_back("Push");
                op.push_back("Pop");
            }
        }
        return op;
        

    }
};