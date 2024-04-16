#include "bin_search.h"
int bin_search(int arr[],int left,int right,int key)
{
    int mind = 0;
    //假设找不到
    int flag = 0;
    while (left <= right) {
        mind = left + (right - left) / 2;
        if (arr[mind] > key) {
            right--;
        } else if (arr[mind] < key) {
            left++;
        } else {
            flag = 1;
            break;
        }
    }
    if (left > right) {
        flag = 0;
    }
    if (flag) {
        return 1;
    } else {
        return -1;
    }
}