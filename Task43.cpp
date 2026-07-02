#include <iostream>
using namespace std;
int maxint(int arr[], int size){
    int index = 0;
    for (int i = 1; i < size; i++){
        if(arr[i] > arr[index]) index = i;

    }
    return index; 
}