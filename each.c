#include <stdio.h>
#include <limits.h>

#define MAX INT_MAX

int seq(int f, int t);
void each(int *arr, int length);
void sum(int *arr, int length);

main() {
    int f, t;
    scanf("%d %d", &f, &t);
///   each(seq(f, t), t - f);
    sum(seq(f, t), t - f);
    return main();
}

int seq(int f, int t) {
    int q = t - f;
    static int arr[MAX];

    int j = 0;
    for (int i = f; i <= t; i++) {
        arr[j] = i;
        j++;
    }

    int *so = &arr[0];
    return so;
}

void each(int *arr, int length) {
    if (length <= 10) {
    for (int i = 0; i <= length; i++) {
        printf("%d\n", arr[i]);
    }
    } else {
        for (int i = 0; i <= length; i++) {
            if ((i % 10) == 0) {
                printf("\n");
            }
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

void sum(int *arr, int length) {
    int s = 0;

    for (int i = 0; i <= length; i++) {
        s = s + arr[i];
    }

    printf("%d\n", s);
}
