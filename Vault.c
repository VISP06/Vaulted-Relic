#include<stdio.h>
#include "Vault.h"


void print_array(int arr[], int size){
    printf("[");
    for(int i=0;i<size;i++){
        printf("%d", arr[i]);
        if(i<size-1){
            printf(", ");
        }
    }
    printf("]\n");
}

void selection_sort(int arr[], int size){
    for(int i=0;i<size;i++){
        int min=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

void bubble_sort(int arr[], int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int binary_search(int arr[], int size, int target){
    int l=0;
    int r=size-1;
    while(l<=r){
        int mid = l+(r-l)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            r=mid-1;;
        }
        else{
            l=mid+1;
        }
    }
    return -1;
}

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverse_array(int nums[], int size){
    int left=0;
    int right=size-1;
    while(left<right){
        int temp = nums[left];
        nums[left]=nums[right];
        nums[right]=temp;
        
        left++;
        right--;
    }
}

int find_max(int arr[], int size){
    int max=arr[0];
    for(int i=1;i<size;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}
#include<stdio.h>
#include "Vault.h"


void print_array(int arr[], int size){
    printf("[");
    for(int i=0;i<size;i++){
        printf("%d", arr[i]);
        if(i<size-1){
            printf(", ");
        }
    }
    printf("]\n");
}

void selection_sort(int arr[], int size){
    for(int i=0;i<size;i++){
        int min=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

void bubble_sort(int arr[], int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int binary_search(int arr[], int size, int target){
    int l=0;
    int r=size-1;
    while(l<=r){
        int mid = l+(r-l)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            r=mid-1;;
        }
        else{
            l=mid+1;
        }
    }
    return -1;
}

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverse_array(int nums[], int size){
    int left=0;
    int right=size-1;
    while(left<right){
        int temp = nums[left];
        nums[left]=nums[right];
        nums[right]=temp;
        
        left++;
        right--;
    }
}

int find_max(int arr[], int size){
    if (size <= 0) return -1;
    int max=arr[0];
    for(int i=1;i<size;i++){
        if(max<arr[i]){
            max=arr[0];
        }
    }
    return max;
}

int find_min(int arr[], int size){
    int min = arr[0];
    for(int i=1;i<size;i++){
        if(min>arr[i]){
            min=arr[i];
        }
        return min;
    }
}