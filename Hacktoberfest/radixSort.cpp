#include<bits/stdc++.h>
using namespace std;


void countSort(vector<int>& arr, int n, int exp){

    int maxEle = arr[0];

    for(int i=1;i<n;i++){
        maxEle = max(maxEle, arr[i]);
    }

    vector<int> count(maxEle+1, 0);


    for(int i=0;i<n;i++){

        count[(arr[i] / exp)%10]++;

    }

    for(int i=1;i<n;i++){

        count[i] += count[i-1];

    }

    vector<int> temp(n, 0);

    for(int i=n-1;i>=0;i--){

        int pos = count[(arr[i] / exp)%10] - 1;
        temp[pos] = arr[i];
        count[(arr[i] / exp)%10] = pos;
    }

    for(int i=0;i<n;i++){
        arr[i] = temp[i];
    }

}


void radixSort(vector<int>& arr, int n){

    int maxEle = arr[0];

    for(int i=1;i<n;i++){
        maxEle = max(maxEle, arr[i]);
    }


    int exp = 1;

    while(exp <= maxEle){

        countSort(arr, n, exp);
        exp = exp * 10;
    }


}








int main(){

    vector<int> arr = {12, 12, 38 , 298, 2378, 10, 1, 3, 4, 9, 10};

    int n = arr.size();

    radixSort(arr, n);

    for(auto& i:arr){
        cout<<i<<" ";
    }

    cout<<endl;

    return 0;
}