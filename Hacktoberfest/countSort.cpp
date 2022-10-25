#include<bits/stdc++.h>
using namespace std;

vector<int> countSort(vector<int> arr, int n){

    int maxEle = arr[0];

    for(int i=1;i<n;i++){

        if(arr[i] > maxEle){
            maxEle = arr[i];
        }

    }

    vector<int> count(maxEle+1, 0);


    for(int i=0;i<n;i++){
        count[arr[i]] += 1;
    }

    for(int i=1;i<=maxEle;i++){
        count[i] = count[i-1] + count[i];
    }

    vector<int> temp(n, 0);

    for(int i=n-1;i>=0;i--){

        int pos = count[arr[i]];

        pos -= 1;

        temp[pos] = arr[i];

        count[arr[i]] = pos;

    }

    return temp;

}


int main(){

    vector<int> arr = {4, 3, 5, 2, 4, 5, 6, 4, 2, 9, 8, 6, 5, 10};

    int n = arr.size();

    vector<int> ans = countSort(arr, n);
    
    for(int& i: ans){
        cout<<i<<" ";
    }
    
    cout<<endl;

    return 0;
}