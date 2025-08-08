// <!-- Module 1: Data Structures Basics
// 1.	Write a program to calculate the time taken to sum integers from 1 to N using a simple loop. Repeat for increasing N and observe how execution time grows. (Empirical observation of linear time).
// 2.	Write a program that demonstrates an O(1) time complexity operation (e.g., accessing an element in an array by index). Explain why it's O(1) in comments.
// 3.	Write a program that demonstrates an O(N) time complexity operation (e.g., finding the maximum element in an array). Explain why it's O(N) in comments.
// 4.	Write a program that demonstrates an O(N^2) time complexity operation (e.g., finding all pairs in an array). Explain why it's O(N^2) in comments.
// 5.	Write a program to demonstrate an O(log N) time complexity operation (e.g., repeatedly dividing a number by 2 until it reaches 1). Explain why it's O(log N) in comments.
// 6.	Write a program to calculate the Nth Fibonacci number using a recursive approach. Analyze and comment on its exponential time complexity (O(2^N)).
// 7.	Write a program to find the largest prime factor of a given number N. Analyze its time complexity.
// 8.	Write a program to check if a given number is an Armstrong number. Analyze its time complexity based on the number of digits.
// 9.	Consider a sorting algorithm that compares every element with every other element. Describe its asymptotic time complexity (no implementation needed, just conceptual understanding).
// 10.	If an algorithm takes T(N) = 5N^3 + 2N^2 + 100 operations for an input size N, what is its asymptotic Big O notation? Explain. (Conceptual, in comments).
// 11.	Compare and contrast Big O, Big Omega, and Big Theta notations in the context of an algorithm's running time. (Conceptual, in comments).
// 12.	Write a program to implement a naive primality test for a given number. Analyze and comment on its time complexity.
// 13.	Write a program to calculate X raised to the power N using repeated multiplication. Analyze its time complexity. -->



// #include <stdio.h>
// #include <time.h>

// int main() {
//     int N =6787876;  // You can change N to test other values
//     long long sum = 0;

//     clock_t start = clock();  // Start time

//     for (int i = 1; i <= N; i++) {
//         sum += i;
//     }

//     clock_t end = clock();  // End time

//     double timeTaken = (double)(end - start) / CLOCKS_PER_SEC * 1000; // ms

//     printf("Sum from 1 to %d = %lld\n", N, sum);
//     printf("Time taken = %.3f ms\n", timeTaken);

//     return 0;
// }
//                                 // insert the data 
// #include <stdio.h>
// int main() {
//     int arr[100]; 
//     int n;
//     printf("Enter your array size: ");
//     scanf("%d", &n);
//     printf("Enter %d elements: ", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     printf("ur array is: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }

//     int newnumber;
//     int pos;
//     printf("\nenter ur value to be inserted: ");
//     scanf("%d",&newnumber);
//     printf("enter whhich position u want to store the data: ",n);
//     scanf("%d",&pos);
//     for (int  i = 0; i>pos; i++)
//     {
//         arr[i] = arr[i-1];
//     }
//        arr[pos] = newnumber;
//        n++;
//        printf("ur arr is: ");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d\t",arr[i]);
//     }
    
//     return 0;
//                                                   sum calculate and calculate average
    
// #include <stdio.h>
// int main() {
//     int arr[100]; 
//     int n;
//     printf("Enter your array size: ");
//     scanf("%d", &n);
//     printf("Enter %d elements: ", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     printf("ur array is: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }

// int sum = 0;
// for (int  i = 0; i <n; i++)
// {
//     sum = sum+arr[i];
// }
// printf("\n ur sum is %d ",sum);
// int avg = sum/n;
// printf("\n ur avg is: %d",avg);
// return 0;

// }
                                    // arraay searching with position.
                              
// #include <stdio.h>
// int main() {
//     int arr[100]; 
//     int n;
//     int i;
//     printf("Enter your array size: ");
//     scanf("%d", &n);
//     printf("Enter %d elements: ", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     printf("ur array is: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
// int search;
// printf("enter ur number to search:");
// scanf("%d",&search);
// for (int  i = 0; i <n; i++)
// {
//  if (search==arr[i] )
//     {
//    printf("ur searching found at indes: %d",i+1);
//    return 0;
//     }
// }
// printf("ur searching element is not foound");
//  return  0;
// }
                                // sorting that array in asscending order

//     #include <stdio.h>
// int main() {
//     int arr[100]; 
//     int n;
//     int i;
//     printf("Enter your array size: ");
//     scanf("%d", &n);
//     printf("Enter %d elements: ", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     printf("ur array is: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }

//     // buble sort
//     for (int  i = 0; i <n-1; i++)
//     {
//         for (int  j = 0; j <n-i-1; j++)
//         {     if (arr[j]>arr[j+1]){
//              int temp = arr[j];
//              arr[j] = arr[j+1];
//              arr[j+1] = temp;
//         }   
//         }   
//     }
//   printf("ur sorted array is : ");
//     for (int  i = 0; i <n; i++)
//     {
//         printf("%d\t",arr[i]);
//     }
//  return  0;
// }                                
//                     //  delete
// #include <stdio.h>
// int main() {
//     int arr[100]; 
//     int n;
//     printf("Enter your array size: ");
//     scanf("%d", &n);
//     printf("Enter %d elements: \n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     printf("ur array is: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     int element;
//     int pos;
//     printf("\nenter ur value to be deleted: ");
//     scanf("%d",&element);
//     printf("enter which position u want to delete the data: ",n);
//     scanf("%d",&pos);
//     if (pos<1||pos>n)
//     {
//         printf("invalid element pls check");
//     }
//     else{
//         for (int  i = pos-1 ;i < n-1; i++)
//         {
//           arr[i] = arr[i+1];
//         }
//         n--;
//         printf("sussecfully ur element is deleted\n");
//         printf("\nur final array is: ");
//     }
//        for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }
#include <stdio.h>

// Function prototypes (return updated size for insert/delete)
int insertElement(int arr[], int n);
void sumAndAverage(int arr[], int n);
void searchElement(int arr[], int n);
void sortArray(int arr[], int n);
int deleteElement(int arr[], int n);
void traverseArray(int arr[], int n);

int main() {
    int arr[100];
    int n, choice;

    printf("Enter initial array size: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    do {
        printf("\n--- MENU ---\n");
        printf("1. Insert element\n");
        printf("2. Calculate sum and average\n");
        printf("3. Search element\n");
        printf("4. Sort array (ascending)\n");
        printf("5. Delete element\n");
        printf("6. Display array\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                n = insertElement(arr, n);
                break;
            case 2:
                sumAndAverage(arr, n);
                break;
            case 3:
                searchElement(arr, n);
                break;
            case 4:
                sortArray(arr, n);
                printf("Array sorted successfully.\n");
                break;
            case 5:
                n = deleteElement(arr, n);
                break;
            case 6:
                traverseArray(arr, n);
                break;
            case 0:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 0);

    return 0;
}
// Insert element and return new size
int insertElement(int arr[], int n) {
    int pos, val;

    printf("Enter value to insert: ");
    scanf("%d", &val);
    printf("Enter position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
        return n;
    }

    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = val;
    printf("Element inserted successfully.\n");
    return n + 1;
}
// Calculate sum and average
void sumAndAverage(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];
    double avg = (n > 0) ? (double)sum / n : 0;
    printf("Sum = %d\n", sum);
    printf("Average = %.2lf\n", avg);
}
// Search element
void searchElement(int arr[], int n) {
    int val;
    printf("Enter element to search: ");
    scanf("%d", &val);

    for (int i = 0; i < n; i++) {
        if (arr[i] == val) {
            printf("Element found at position %d\n", i + 1);
            return;
        }
    }
    printf("Element not found.\n");
}
// Bubble sort
void sortArray(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1 - i; j++)
            if (arr[j] > arr[j + 1]) {
                temp = arr[j]; arr[j] = arr[j + 1]; arr[j + 1] = temp;
            }
}
// Delete element and return new size
int deleteElement(int arr[], int n) {
    int pos;
    printf("Enter position of element to delete (1 to %d): ", n);
    scanf("%d", &pos);

    if (pos < 1 || pos > n) {
        printf("Invalid position!\n");
        return n;
    }

    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    printf("Element deleted successfully.\n");
    return n - 1;
}

// Traverse array
void traverseArray(int arr[], int n) {
    if (n == 0) {
        printf("Array is empty.\n");
        return;
    }
    printf("Array elements: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}
