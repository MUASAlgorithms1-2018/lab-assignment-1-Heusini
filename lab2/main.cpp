#include <iostream>

int cubic_mss(const int* arr, int size){
    int maxSum = 0;
    for(int i = 0; i < size; i++){
        for(int j = i; j < size; j++){
            int thisSum = 0;
            for(int k = i; k <= j; k++){
                thisSum = thisSum + arr[k];
            }
            if(thisSum > maxSum)
                maxSum = thisSum;
        }
    }
    return maxSum;
}

int main () {
    static const int arr1[] = {1, 2, -30, 4, 5};
    int size = sizeof(arr1)/ sizeof(int);
    int mss1 = cubic_mss(arr1,size);
    std::cout << mss1 << std::endl;
    //more test cases here
    return 0;
}