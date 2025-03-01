#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 // The runningSum function computes the running sum of the input array.
 // It allocates and returns a new array that contains the running totals.
 // The returned array must later be freed by the caller.
int* runningSum(int* nums, int numsSize, int* returnSize) {
    // Allocate memory for the result array, which will have the same size as the input
    int* result = (int*)malloc(numsSize * sizeof(int));
    if (result == NULL) {
        // If malloc fails, return NULL. In a complete program, you might handle this more robustly
        return NULL;
    }
        // The first element of the running sum is the first element of the input.
        result[0] = nums[0];

        // Loop from the second element (index 1) to the end of the array.
        for (int i = 1; i < numsSize; i++) {
            //Each element is computed by adding the current number (nums[i])
            // to the running sum upt to the previous index (result[i -1]).
            result[i] = result[i - 1] + nums[i];
        }
        // Set the return size to the size of the result array.
        *returnSize = numsSize;
        return result;
}

int main(int argc, char *argv[]) {
    // Create and initalize the input array.
    int nums[] = {1, 1, 1, 1, 1};
    // Calculate the size of the array.
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int returnSize;
    // Call runningSum to compute the running totals.
    int* result = runningSum(nums, numsSize, &returnSize);

    // Print the resulting running sum array.
    for (int i = 0; i < returnSize; i++)
    {
        printf("%d ", result[i]);
    }
    printf("\n");

    // Free the allocated memory for the result array.
    free(result);
    return 0;
}