#include<bits/stdc++.h>
using namespace std;

bool twoSum(int arr[], int n, int target){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i] + arr[j] == target){
                return true;
            }
        }
    }

    return false;
}

int main(){
    int arr[] = {28, 1, 3, 17, 50};
    cout<<twoSum(arr, 5, 31);
}