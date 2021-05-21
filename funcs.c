#include <stdio.h>

int index(int *array, int len, int some);

main() {
    int arr[100];
    int len = sizeof arr / sizeof arr[0];  
  
    for (int i = 0; i < len; i++) {
        arr[i] = 0; 
    }
  
    arr[0] = "abc";
    arr[20] = "123";
  
    printf("%d\n", index(arr, len, "abc"));
    printf("%d\n", index(arr, len, "123"));
    printf("%d\n", index(arr, len, "321"));
  
}

int index(int *array, int len, int some) {
    int find = -1;
    for (int i = 0; i < len; i++) {
        if (array[i] == some) {
            find = i;
//            printf("%s\t", array[i]);
            break;
        }
    }

    return find;
}

