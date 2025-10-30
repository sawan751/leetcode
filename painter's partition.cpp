#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std;
bool isPossible(vector<int>& wall,int painters,int n, int maxload){
    int reqpainters= 1;
    int currentsum=0;
    for(int i=0;i<n;i++){
        if(currentsum+wall[i]<=maxload){
            currentsum+=wall[i];
        }
        else{
            reqpainters++;
            currentsum=wall[i];
            if(reqpainters>painters || wall[i]>maxload){
                return false;
            }
        }
    }
    return true;
}

int main() {
    vector<int> wall = {40,30,20,10}; 
    int n = wall.size();
    int st= 0;
    int end = 0;
    int ans = -1;
    int painters = 2;
    for (int i = 0; i < n; i++) {
        end += wall[i];
    }
    while(st <= end){
        int mid = (st + end) / 2;
        if(isPossible(wall, painters, n, mid)){
            ans = mid;
            end = mid - 1;
        }
        else{
            st = mid + 1;
        }
    }
    cout << "Minimum time required to paint all walls: " << ans << endl;
    return 0;
}
