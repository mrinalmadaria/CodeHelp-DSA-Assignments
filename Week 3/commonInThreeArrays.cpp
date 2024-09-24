#include<bits/stdc++.h>
using namespace std;

vector<int> commonElement(int a[], int b[], int c[], int n1, int n2, int n3){
    vector<int> ans;
    set<int> st;
    int i = 0, j = 0, k = 0;

    while(i < n1 && j < n2 && k < n3){
        if(a[i] == b[j] && b[j] == c[k]){
            st.insert(a[i]);
            i++, j++, k++;
        }else if(a[i] < b[j]){
            i++;
        }else if(b[j] < c[k]){
            j++;
        }else{
            k++;
        }
    }

    for(auto i : st){
        ans.push_back(i);
    }
    return ans;
}

int main(){
    int a[] = {1,5,10,20,40,80};
    int b[] = {6,7,20,80,100};
    int c[] = {3,4,15,20,30,70,80,120};

    int n1 = 6, n2 = 5, n3 = 8;

    vector<int> ans = commonElement(a, b, c, n1, n2, n3);

    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}