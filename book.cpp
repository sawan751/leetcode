#include <iostream>
#include <string>
using namespace std;
bool isvalid(int arr[],int mid,int n, int m){
    int pages = 0;
    int students = 1;
    for(int i = 0;i<n;i++){
        if(pages +arr[i]<=mid){
            pages+=arr[i];
        }
        else{
            students++;
            if(arr[i]>mid){
                return false;
            }
        }
    }
}

int main(){
    int arr[] = {15,17,20,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = 0;
    int m = 2;
    int st= 0;
    int end = 0;
    for(int i = 0; i <n;i++){
        end += arr[i];
    }
    while(st<=end){
        int mid = st+(end-st)/2;
        if (isvalid(arr,mid,n,m)){
            ans = mid;
            end = mid - 1;
        }
        else{
            st = mid + 1;
        }
    }
    
    cout<<ans<<endl;
    return 0;

}