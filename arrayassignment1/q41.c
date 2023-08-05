//take  a sorted array fromt he user as input and find a number unsing binary serch the array.
#include <stdio.h>

int main() {
    int arr[6] = {17, 20, 30, 40, 48, 50};
    int key, mid;
    int p = 6 - 1;
    int j = 0;

    printf("Enter the number to search: ");
    scanf("%d", &key);

    while (j <= p) {
        mid = (j + p) / 2;

        if (key == arr[mid]) {
            printf("Found at index %d\n", mid);
            break;
        } else if (key > arr[mid]) {
            j = mid + 1; 
        } else {
            p = mid - 1; 
        }
    }

    if (j > p) {
        printf("Number not found in the array.\n");
    }

    return 0;
}
		
				
