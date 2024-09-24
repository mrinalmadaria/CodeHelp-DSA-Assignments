#include<bits/stdc++.h>
using namespace std;

double maxAverageSubarray(vector<int> &nums, int k){
    int i = 0, j = k - 1;
    int sum = 0;

    for(int y = i; y <= j; y++){
        sum += nums[y];
    }
    int maxSum = sum;
    j++;

    while(j < nums.size()){
        sum -= nums[i++];
        sum += nums[j++];
        maxSum = max(maxSum, sum);
    }

    double maxAvg = maxSum / (double)k;
    return maxAvg;
}

int main(){
    vector<int> nums = {1, 12, -5, -6, 50, 3};
    int k = 4;
    cout<<maxAverageSubarray(nums, k);

    return 0;
}