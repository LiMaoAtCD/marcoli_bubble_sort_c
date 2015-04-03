//
//  main.c
//  C_
//
//  Created by AlienLi on 15/3/29.
//  Copyright (c) 2015年 MCL. All rights reserved.
//

#include <stdio.h>

void bubble_sort(int *arr, int len);
void swap(int *, int *);

int main(int argc, const char * argv[]) {
    // insert code here...

    int a[] = {9,4,4,3,1};
    
    bubble_sort(a,5);
    for (int i =0; i< 5; i++) {
        printf("%d",a[i]);

    }
    
    return 0;
}


void bubble_sort(int *arr, int len) {
    
    for (int i = 0 ; i < len - 1; i++) {
        
        for (int j = 0 ; j < len - 1 - i; j++) {
            
            if (*(arr+j) > *(arr+j+1)) {
                swap((arr+j), ((arr+1+j)));
            }
            
        }
        
    }
}

void swap(int *a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    
    
}
