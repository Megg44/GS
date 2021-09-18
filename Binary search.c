#include <stdio.h>

int binarysearch(int n, int arr[n], int no){
  int begin = 0, end = n;
  int mid = (begin + end) / 2;
  int i;
  while(arr[mid] != no){
    if (arr[mid] > no)
      end = mid;
    else
      begin = mid;
    mid = (begin + end) / 2;
  }

  return mid;
}

int main(){
  int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  int no = 80;

  int i = binarysearch(10, arr, no);
  printf("%dth place", i+1);
}
