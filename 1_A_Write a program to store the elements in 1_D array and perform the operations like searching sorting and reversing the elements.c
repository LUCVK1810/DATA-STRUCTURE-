#include <stdio.h>
#include <conio.h>

void display(int arr[], int size) {
    int i;
    printf("Array elements: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void sort(int arr[], int size) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Array sorted.\n");
}

void reverse(int arr[], int size) {
    int i, temp;
    for (i = 0; i < size / 2; i++) {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
    printf("Array reversed.\n");
}

void search(int arr[], int size, int val) {
    int i, found = 0;
    for (i = 0; i < size; i++) {
        if (arr[i] == val) {
            printf("Element %d found at position %d.\n", val, i + 1);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Element %d not found.\n", val);
    }
}

int main() {
    int arr[100], size, choice, val;
    int i;

    clrscr();
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    do {
        printf("\nMenu:\n");
        printf("1. Display\n");
        printf("2. Sort\n");
        printf("3. Reverse\n");
        printf("4. Search\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                display(arr, size);
                break;
            case 2:
                sort(arr, size);
                break;
            case 3:
                reverse(arr, size);
                break;
            case 4:
                printf("Enter the element to search: ");
                scanf("%d", &val);
                search(arr, size, val);
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 5);

    getch();
    return 0;
}
