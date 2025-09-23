#ifndef Vault
#define Vault

// Purpose: Displays the contents of an integer array in a readable format.
// How it works: Loops through the array and prints each element, formatted with brackets and commas.
// Time Complexity: O(n)
void print_array(int arr[], int size);

/**
 * @brief Sorts an integer array using the Bubble Sort algorithm. Inefficient for large lists.
 * @param arr The array to be sorted.
 * @param size The number of elements in the array.
 * @how-it-works Repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. Larger values "bubble" to the end.
 * @time-complexity O(n^2)
 */
void bubble_sort(int arr[], int size);

// Purpose: Sorts an array by repeatedly finding the minimum element and moving it to the sorted part of the array.
// How it works: In each pass, it finds the smallest element in the unsorted portion and swaps it with the first element of that portion.
// Time Complexity: O(n^2)
void selection_sort(int arr[], int size);

/**
 * @brief Searches for a value in a *sorted* integer array using Binary Search. Extremely efficient.
 * @param arr The sorted array to search in. The array MUST be sorted for this to work correctly.
 * @param size The number of elements in the array.
 * @param target The value to search for.
 * @return The index of the target if found, otherwise -1.
 * @how-it-works A "divide and conquer" algorithm that repeatedly divides the search interval in half.
 * @time-complexity O(log n)
 */
int binary_search(int arr[], int size, int target);

// Purpose: Exchanges the values of two integer variables.
// How it works: Uses pointers to directly access the variables' memory locations and a temporary variable to perform the swap.
// Time Complexity: O(1)
void swap(int* a, int* b);

// Purpose: Reverses the order of elements in an array.
// How it works: Uses two pointers (one at the start, one at the end) and swaps the elements they point to, moving inwards until they meet.
// Time Complexity: O(n)
void reverse_array(int nums[], int size);

// Purpose: Finds the largest value in an array.
// How it works: Assumes the first element is the max, then iterates through the array, updating the max if a larger element is found.
// Returns: The maximum value in the array.
// Time Complexity: O(n)
int find_max(int arr[], int size);

// Purpose: Finds the smallest value in an array.
// How it works: Assumes the first element is the min, then iterates through the array, updating the min if a smaller element is found.
// Returns: The minimum value in the array.
// Time Complexity: O(n)
int find_min(int arr[], int size);

#endif // Vault.h