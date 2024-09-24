#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums){
    // Pointers
    int i = 0, j = 1;

    while(j < nums.size()){
        if(nums[i] == nums[j]){
            j++;
        }else{
            i++;
            nums[i] = nums[j];
            j++;
        }
    }
    return i+1;
}

int main(){
    vector<int> nums = {0,0,1,1,2,3,4,5,5};
    int ans = removeDuplicates(nums);

    for(int i = 0; i < ans; i++){
        cout<<nums[i];
    }
}