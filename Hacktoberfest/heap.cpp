#include<bits/stdc++.h>
using namespace std;




class Heap{


    private:

    int* arr;

    int size;

    public:

    static int MAX_LEN;

    Heap(){
        this->size = 0;
        arr = new int[MAX_LEN];
        arr[0] = -1;
    }

    void insert(int value){

        this->size += 1;

        int index = this->size;

        this->arr[index] = value;

        while(index > 1){

            int parent = index/2;

            if(this->arr[parent] < this->arr[index]){
                swap(this->arr[parent], this->arr[index]);
                 index = parent;
            }
            else{
                return;
            }

           

        }

    }
    
    void deleteHeap(){

        this->arr[1] = this->arr[size];

        size--;

        int index = 1;

        while(index <= size){

            int leftIndex = 2*index;
            int rightIndex = 2*index+1;

            if(leftIndex <= size && this->arr[leftIndex] > this->arr[index]){
                swap(this->arr[leftIndex], this->arr[index]);
                index = leftIndex;
            }
            else if(rightIndex <= size && this->arr[rightIndex] > this->arr[index]){
                swap(this->arr[rightIndex], this->arr[index]);
                index = rightIndex;
            }
            else{
                return;
            }


        }


        
    }


    void print(){

        for(int i=1;i<=this->size;i++){

            cout<<this->arr[i]<<" ";

        }
        cout<<endl;
    }


};

int Heap::MAX_LEN = 100000;


void heapify(vector<int>& arr, int index, int n){

    int left = 2 * index + 1;
    int right = 2 * index + 2;


    if(left < n && arr[left] > arr[index]){
        swap(arr[left], arr[index]);
        heapify(arr, left, n);
    }

    if(right < n && arr[right] > arr[index]){
        swap(arr[right], arr[index]);
        heapify(arr, right, n);
    }

}

void heapSort(vector<int>& arr, int size){

    while(size > 1){
        
        swap(arr[0], arr[size-1]);

        size--;

        heapify(arr, 0, size);

    }
}


int main(){

    // Heap heap;


    // heap.insert(50);
    // heap.insert(60);
    // heap.insert(70);
    // heap.insert(10);
    // heap.insert(80);
    // heap.insert(40);

    // heap.print();

    // heap.deleteHeap();

    // heap.print();


    vector<int> arr = {20, 10, 70, 78, 60, 50, 100, 1, 2, 3, 4};

    int n = arr.size();

    for(int i=n/2-1;i>=0;i--){
        heapify(arr, i, n);
    }

    for(int &i:arr){
        cout<<i<<" ";
    }

    cout<<endl;

    heapSort(arr, n);

    for(auto &i:arr){
        cout<<i<<" ";
    }

    cout<<endl;

    return 0;
}