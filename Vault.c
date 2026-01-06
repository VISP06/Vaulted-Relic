#include<stdio.h>
#include<stdlib.h>
#include "Vault.h"
#include<math.h>

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
    if (size <= 0) {
        return -1; 
    }
    int max = arr[0];
    for(int i = 1; i < size; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}

int find_min(int arr[], int size){
    if (size <= 0) {
        return -1; 
    }
    int min = arr[0];
    for(int i = 1; i < size; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    return min; 
}

void stack_init(Stack* s){
    s->top=-1;
}

int stackIsFull(Stack* s){
    if(s->top==MAX_STACK_SIZE-1){
        return 1;
    }else{
        return 0;
    }
}

int stackIsEmpty(Stack* s){
    if(s->top==-1){
        return 1;
    }else{
        return 0;
    }
}

void stack_push(Stack* s, int value){
    if(stackIsFull){
        printf("Stack Overflow!\n");
        return;
    }
    s->top++;
    s->items[s->top]=value;
}

int stack_pop(Stack* s){
    if(stackIsEmpty){
        printf("Stack Underflow!\n");
        return -1;
    }
    return s->items[s->top--];
}

void checkPalindrome(Stack* s){
    int curr_item=0, num=0, revnum=0, k=0;
    while(s->top!=-1){
        curr_item=stack_pop(s);
        num=num*10+curr_item;
        revnum=curr_item*pow(10, k)+revnum;
        k++;
    }
    if(num==revnum){
        printf("\nThe number is a Palindrome");
    }else{
        printf("\nThe number is not a Palindrome");
    }
}

int peek(Stack* s){
    if(stackIsEmpty){
        printf("Stack Underflow!\n");
        return -1;
    }
    return s->items[s->top];
}

void stack_display(Stack* s) {
    if (stackIsEmpty(s)) {
        printf("Stack is empty\n");
        return;
    }
    
    printf("Stack contents: \n");
    // We print from top down to bottom so it looks like a stack
    for (int i = s->top; i >= 0; i--) {
        printf("| %d |\n", s->items[i]);
    }
    printf(" -----\n");
}