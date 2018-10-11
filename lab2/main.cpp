#include <iostream>

int cubic_mss(const int arr[], int size){
    int max_sum = 0;
    for(int i = 0; i < size; i++){
        for(int j = i; j < size; j++){
            int thisSum = 0;
            for(int k = i; k <= j; k++){
                thisSum = thisSum + arr[k];
            }
            if(thisSum > max_sum)
                max_sum = thisSum;
        }
    }
    return max_sum;
}

int quadratic_mss(const int arr[], int size){
    int max_sum =0;
    for (int i = 0; i < size; ++i) {
        int this_sum = 0;
        for (int j = i; j < size; ++j) {
            this_sum = this_sum+arr[j];
            if(max_sum < this_sum)
                max_sum = this_sum;
        }
    }
    return max_sum;
}

int linear_mss(const int arr[], int size){
    int max_sum = 0;
    int this_sum = 0;


    for (int i = 0; i < size; ++i) {
        this_sum = this_sum + arr[i];
        if(this_sum > max_sum)
            max_sum = this_sum;
        else if(this_sum < 0)
            this_sum=0;

    }
    return max_sum;
}


int main () {
    static const int arr1[] = {1, 2, -30, 4, 5};

    int size = sizeof(arr1)/sizeof(int);
    int mss1 = cubic_mss(arr1,size);
    std::cout << mss1 << std::endl;
    int mss2 = quadratic_mss(arr1, size);
    std::cout << mss2 << std::endl;
    int mss3 = linear_mss(arr1, size);
    std::cout << mss3 << std::endl;
    //more test cases here
    return 0;
}