#include<bits/stdc++.h>
using namespace std;

int findPivotIndex(vector<int> nums){
    int n = nums.size();
    for(int i = 0; i < n; i++){
        int leftSum = 0, rightSum = 0;

        // Caluclating left sum
        for(int j = 0; j < i; j++){
            leftSum += nums[j];
        }

        // Calculating right sum
        for(int j = i+1; j < n; j++){
            rightSum += nums[j];
        }

        if(leftSum == rightSum){
            return i;
        }
    }

    return -1;
}

int main(){
    vector<int> arr = {1, 7, 3, 6, 5, 6};
    cout<<findPivotIndex(arr);
}