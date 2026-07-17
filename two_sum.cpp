#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    int target;
    cin>>target;
    for(int i = 0 ; i<n; i++){
        cin>>nums[i];
    }
    for(int i = 0 ; i<n-1; i++){
        for(int j = i+1;j<n;j++){
            if(nums[i] + nums[j] ==target){
                cout<<i<<" "<<j<<endl;
                return 0;
            }
        }
    }

    
}