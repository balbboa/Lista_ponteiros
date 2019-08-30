#include "gc.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compare(const void * a, const void * b) {
    return ( *(int*)a - *(int*)b );
}

void SMalloc() {
    int n = 1000;
    int *ptr;
    ptr = (int*)malloc(n * sizeof(int));
    
    srand(time(NULL));
    for(int j = 0; j < n; j++) {
        *(ptr + j) = rand() % 100;        
    }
    
    qsort(ptr, n, sizeof(int), compare);
    
    free(ptr);
    
}

void GcMalloc() {
    int n = 1000;
    int *ptr;
    ptr = (int*)GC_malloc(n * sizeof(int));
    
    srand(time(NULL));
    for(int j = 0; j < n; j++) {
        *(ptr + j) = rand() % 100;        
    }
    
    qsort(arr, n, sizeof(int), compare);
    
}

int main() {
    
    clock_t start_t, end_t;
    
    int times = 100000;
    start_t = clock();
    for(int i = 0; i < times; i++) {
        SMalloc();
    }
    end_t = clock();
    
    printf("%d malloc: %fs\n", times, (double)(end_t - start_t) / CLOCKS_PER_SEC);
    
    start_t = clock();
    for(int i = 0; i < times; i++) {
        GcMalloc();
    }
    end_t = clock();
    
    printf("%d GC_malloc: %fs\n", times, (double)(end_t - start_t) / CLOCKS_PER_SEC);
    
    return 0;
}