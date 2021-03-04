#include <iostream>


int binarySearch(int arr[], int target, int n){
    int l = 0;
    int r = n - 1;
    int m = 0;
    while (l <= r){
        m = (l + r) / 2;
        if (arr[m] == target) {
            return m;
        }
        else if (arr[m] > target){
            r = m - 1;
        }
        else{
            l = m + 1;
        }
    }
    return -1;

}

int main(){

    int arr [5] = {1,2,3,4,5};
    std::cout << binarySearch(arr, 3, 5) << std::endl;
    return 0;
}