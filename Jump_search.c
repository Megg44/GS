#include <stdio.h>
#include <math.h>

int linearsearch (int n, int arr[n], int value, int start, int end){
    int i;
    
    for (i = start; i < end; i++){
        if (arr[i] == value)
            return i;
    }   
}

int jumpsearch (int n, int arr[n], int value){
    int m = sqrt(n);
    int i;
    for (i = 0; i < m; i ++){
        if (arr[i*m] <= value && arr[(i+1)*m] > value)
            return linearsearch(n, arr, value, i*m, (i+1)*m);
    }
    
    return -1;
}

int main ()
{		
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int n = 10;
    int v = 50;
    
    int index = jumpsearch(n, arr, v);
    
    index == -1 ? printf("Non-existent") : printf("%d th place.", index+1);
}
