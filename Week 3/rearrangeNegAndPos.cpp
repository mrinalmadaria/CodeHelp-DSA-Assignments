#include<bits/stdc++.h>
using namespace std;

void rearrange(vector<int> &nums){
    int i = 0, j = 1;
    while(j < nums.size()){
        if(nums[i] < 0){
            i++;
            j++;
        }else if(nums[j] < 0){
            swap(nums[i], nums[j]);
            i++;
            j++;
        }else{
            j++;
        }
    }
}

int main(){
    vector<int> nums = {-1,2,3,-4,8,-7,-8};
    rearrange(nums);

    for(int i = 0; i < nums.size(); i++){
        cout<<nums[i]<<" ";
    }

    return 0;
}