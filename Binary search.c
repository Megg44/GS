#include <stdio.h>

int binarysearch(int n, int arr[n], int no){
  int begin = 0, end = n;
  int mid = (begin + end) / 2;
  int i;
  while(begin < end){
    if(arr[mid] == no)
      return mid;
    else if (arr[mid] > no)
      end = mid;
    else if (arr[mid] < no)
      begin = mid + 1;
    mid = (begin + end) / 2;
  }

  return -1;
}

int main(){
  int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  int no = 95;

  int i = binarysearch(10, arr, no);
  (i == -1) ? printf("Not found.") : printf("%dth place", i+1);
}
