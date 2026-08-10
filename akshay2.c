#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int last_repeated = -1;
    int found = 0;
    for (int i = n - 1; i > 0; i--) {
        for (int j = i - 1; j >= 0; j--) {
            if (arr[i] == arr[j]) {
                last_repeated = arr[i];
                found = 1;
                break; 
            }
        }
        if (found) {
            break; 
        }
    }
    if (found) {
        printf("The last repeated element is: %d\n", last_repeated);
    } else {
        printf("No repeated elements found in the array.\n");
    }
    
    return 0;
}
