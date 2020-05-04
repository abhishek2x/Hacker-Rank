
// QHEAP1

#include <bits/stdc++.h>
using namespace std;

void minHeapify(long long int * heap, long long int index, long long int size){
    int minIndex = index;
    int left = 2*index + 1;
    int right = 2*index + 2;
    if(left < size && heap[index] > heap[left]) minIndex = left;
    if(right < size && heap[index] > heap[left]) minIndex = right;
    if(minIndex != index){
        swap(heap[index], heap[minIndex]);
        minHeapify(heap, minIndex, size);
    }
}

void shiftUp(long long int * heap, long long int index){
    if(index == 0) return;
    int parentIndex = (index - 1) / 2;
    if(heap[index] < heap[parentIndex]){
        swap(heap[index], heap[parentIndex]);
        shiftUp(heap, parentIndex);
    }
}

void insertValue(long long int * heap, long long int v, long long int size){
    if(size == 0){
        heap[0] = v;
    }
    else{
        heap[size] = v;
        shiftUp(heap, size);
    }
}

void deleteValue(long long int * heap, long long int v, long long int size){
    
    swap(*find(heap, heap + size, v), heap[size - 1]);
    --size;
    for(int i = size/2 - 1; i >= 0; --i){
        minHeapify(heap, i, size);
    }
}
// MIN_HEAP
int main() {
    long int Q;
	int choice; 
	long long int size = 0;
    long long int v;
    cin>>Q;
    long long int heap[Q];
    while(Q--){
        cin>>choice;
        switch(choice){
            case 1:
                cin>>v;
                insertValue(heap, v, size++);
                break;
            case 2:
                cin>>v;
                deleteValue(heap, v, size--);
                break;
            case 3:
                cout<<heap[0]<<endl;
                break;
        }
    }
    return 0;
}