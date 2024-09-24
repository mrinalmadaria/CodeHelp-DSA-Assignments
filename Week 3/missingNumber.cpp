#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &nums){
    int n = nums.size();
    int ans = 0;
    sort(nums.begin(), nums.end());

    for(int i = 0; i < n; i++){
        if(ans != nums[i]){
            return ans;
        }
        ans++;
    }
}

int main(){
    vector<int> nums = {6, 3, 1, 2, 0, 4};
    cout<<missingNumber(nums);
}