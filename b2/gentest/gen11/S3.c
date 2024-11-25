#include <stdio.h>
#include <stdbool.h>
//Q1:
void findTriplets(int nums[], int length) {
    bool found = false;

    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            if (i != j) {
                int a = nums[i];
                int b = nums[j];

                for (int k = 0; k < length; k++) {
                    if (k != i && k != j) {
                        int c = nums[k];

                        if (a == b * c) {
                            found = true;
                            printf("(%d, %d, %d)\n", a, b, c);
                        }
                    }
                }
            }
        }
    }

    if (!found) {
        printf("No triplets found.\n");
    }
}

/*function findTriplets(num[], lenght)
    found = false
    for i equals 0 to lenght do
        if i != j then
            a = num[i]
            b = num[j]
            for k equals 0 to lenght do
                if k != i and k != j then
                    c = num[k]
                    if a == b * c then
                        found = true
                        printf(a, b, c)
                    end if
                end if
            end for
        end if
    end for
    if not found then
        printf("No triplets found.")
    end if
end function*/
int main() {
    int nums[] = {4, 15, 45, 9, 40, 27, 3, 5, 10};
    int length = sizeof(nums) / sizeof(nums[0]);

    findTriplets(nums, length);

    return 0;
}

/*
1. Best Scenario Complexity:
In the best-case scenario, the program would find a triplet early on in the loops and terminate.
This would occur when the first triplet encountered satisfies the condition a = b * c. 
In this case, the time complexity would be O(1) because the program would only perform a constant number of operations.

2. Worst Scenario:
In the worst-case scenario, the program would iterate through all possible combinations of a, b, and c without finding any triplets that satisfy the condition a = b * c.
In this case, the time complexity would be O(n^3), where n is the length of the input array nums. 
The program has three nested loops, each iterating over the range of length, resulting in a cubic time complexity.

3. Average Scenario:
In the average-case scenario, the time complexity would depend on the distribution of the input data. 
If the input data contains a large number of valid triplets, the program may find one relatively quickly. 
On the other hand, if the input data contains few or no valid triplets, the program would need to exhaustively search through all combinations, resulting in a higher time complexity. 
Therefore, the average-case time complexity can be considered as O(n^3), similar to the worst-case scenario.
*/

/*Q2: using recursion
#include <stdio.h>
#include <stdbool.h>

void findTriplets(int nums[], int length, int i, int j, int k) {
    if (k >= length) {
        return;  // Base case: reached the end of the array
    }

    int a = nums[i];
    int b = nums[j];
    int c = nums[k];

    if (a == b * c) {
        printf("(%d, %d, %d)\n", a, b, c);
    }

    // Recursively call the function by incrementing the indices
    if (j < length - 1) {
        findTriplets(nums, length, i, j + 1, k);
    } else if (i < length - 2) {
        findTriplets(nums, length, i + 1, i + 2, k);
    } else {
        findTriplets(nums, length, 0, 1, k + 1);
    }
}

int main() {
    int nums[] = {4, 15, 45, 9, 40, 27, 3, 5, 10};
    int length = sizeof(nums) / sizeof(nums[0]);

    findTriplets(nums, length, 0, 1, 2);

    return 0;
}*/