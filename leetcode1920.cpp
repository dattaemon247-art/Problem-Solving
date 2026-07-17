#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i = 0 ; i<n ; i++){
        cin>>nums[i];
    }

    int s = nums.size();
    vector<int>ans(s);
    for(int i = 0  ; i<s; i++){
        ans[i] = nums[nums[i]];
    }

    for(int i = 0 ; i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
