#include <stdbool.h>

void mx_sort(int *arr, int size, bool (*f)(int, int)) {
    for (int i = 0; i < size; i++) {
        for (int j = i +1; j < size; i++) {
            if (f(arr[i], arr[j])) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
