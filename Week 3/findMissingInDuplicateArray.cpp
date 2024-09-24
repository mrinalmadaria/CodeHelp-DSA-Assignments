#include<bits/stdc++.h>
using namespace std;

int findMissing(vector<int> &nums){
    int ans = 0;
    // Mark Visited
    for(int i = 0; i < nums.size(); i++){
        int index = abs(nums[i]);
        if(nums[index-1] > 0){
            nums[index-1] *= -1;
        }
    }

    // All positive indexes are missing
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] > 0){
            ans = i+1;
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {1,3,4,5,3};
    cout<<findMissing(nums);

    return 0;
}