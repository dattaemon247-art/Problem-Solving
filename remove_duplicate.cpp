#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    int count = 0;
    for(int i = 0; i<nums.size()-1; i++){
        for(int j = i+1; j<nums.size(); j++){
            if(nums[i] == nums[j]){
                nums.erase(nums.begin() + j);
                j--;
            }
            else{
                j++;
            }
        }
    }
    for(int i = 0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }

}

// leetcode version
// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         for(int i = 0; i<nums.size()-1; i++){
//             for(int j = i+1; j<nums.size();j++){
//                 if(nums[i] == nums[j]){
//                     nums.erase(nums.begin() +j);
//                     j--;
//                 }
//                 else{
//                     j++;
//                 }
//             }
            
//         }
//         return nums.size();
//     }
// };