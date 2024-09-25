#include <stdio.h>
#include <string.h>

// void printarray(int arr[], int start, int end)
// {
//     // int sum = 0;
//     for (int i = start; i < end; i++)
//     {
//         printf("%d \n", arr[i]);
//         // sum += arr[i];
//     }
//     // printf("\nSum of subarray: %d\n", sum);
// }
// void subarrays(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j <= n; j++)
//         {
//             printarray(arr, i, j);
//         }
//     }
// }
// void subsets(int arr[], int n)
// {
//     int totalSubsets = 1 << n; // 2^n
//     for (int i = 0; i < totalSubsets; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (i & (1 << j))
//             {
//                 printf("%d ", arr[j]);
//             }
//         }
//         printf("\n");
//     }
// }
// int main(int argc, char const *argv[])
// {
//     int arr[] = {1, 2, 3};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     printf("Subarrays:\n");
//     subarrays(arr, n);
//     printf("\nSubsets:\n");
//     subsets(arr, n);
//     return 0;
// }

// int isSubset(int arr[], int arrSize, int subset[], int subsetSize)
// {
//     for (int i = 0; i < subsetSize; i++)
//     {
//         int j;
//         for (j = 0; j < arrSize; j++)
//         {
//             if (subset[i] == arr[j])
//             {
//                 break;
//             }
//         }
//         if (j == arrSize)
//         {
//             return 0;
//         }
//     }
//     return 1;
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
//     int subset[] = {5, 7, 9, 10};
//     int arrSize = sizeof(arr) / sizeof(arr[0]);
//     int subsetSize = sizeof(subset) / sizeof(subset[0]);
//     if (isSubset(arr, arrSize, subset, subsetSize))
//     {
//         printf("The subset is a valid subset of the array.\n");
//     }
//     else
//     {
//         printf("The subset is not a valid subset of the array.\n");
//     }
//     return 0;
// }

// Code to get only unique elements of an array by using another temp array and copy temp array to original one
// int array(int arr[], int size)
// {
//     int temp[size];
//     int tempSize = 0;
//     for (int i = 0; i < size; i++)
//     {
//         int j;
//         for (j = 0; j < tempSize; j++)
//         {
//             if (arr[i] == temp[j])
//             {
//                 break;
//             }
//         }
//         if (j == tempSize)
//         {
//             temp[tempSize] = arr[i];
//             tempSize++;
//         }
//     }
//     for (int i = 0; i < tempSize; i++)
//     {
//         arr[i] = temp[i];
//     }
//     return tempSize;
// }
// int main()
// {
//     int arr[] = {1, 2, 2, 3, 4, 5, 5, 6};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     printf("Original array: ");
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     size = array(arr, size);
//     printf("Array with unique elements: ");
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     return 0;
// }

// void majority(int arr[], int size)
// {
//     int max = 0;
//     int majorityelement = -1;
//     for (int i = 0; i < size; i++)
//     {
//         int count = 0;
//         for (int j = 0; j < size; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 count++;
//             }
//         }
//         if (count > max)
//         {
//             max = count;
//             majorityelement = arr[i];
//         }
//     }
//     printf("The highest occurring element is %d and frequency is %d.\n", majorityelement, max);
//     if (max > size / 2)
//     {
//         printf("The element %d is a majority element.\n", majorityelement);
//     }
//     else
//     {
//         printf("The element %d is not a majority element.\n", majorityelement);
//     }
// }
// int main()
// {
//     int arr[] = {1, 2, 2, 3, 4, 4, 2, 2, 9};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     majority(arr, size);
//     return 0;
// }

// void differences(int arr[], int size)
// {
//     for (int i = 0; i < size - 1; i++)
//     {
//         int difference = arr[i] - arr[i + 1];
//         printf("Difference between %d and %d is: %d\n", arr[i], arr[i + 1], difference);
//     }
// }
// int main()
// {
//     int arr[] = {9, 5, 4, 2, 1};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     differences(arr, size);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int arr[] = {9, 5, 4, 2, 1};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     for (int i = 0; i < size - 1; i++)
//         printf("Difference between %d and %d is: %d\n", arr[i], arr[i + 1], arr[i] - arr[i + 1]);
//     return 0;
// }

// int main()
// {
//     int arr[7] = {3, 4, 9, 5, 6};
//     int size = 5;
//     arr[size++] = 15;
//     int index = 1;
//     for (int i = size; i > index; i--)
//     {
//         arr[i] = arr[i - 1];
//     }
//     arr[index] = 7;
//     size++;
//     printf("Updated array: ");
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

// Adding 15 at last

// int main()
// {
//     int arr[6] = {3, 4, 9, 5, 6};
//     arr[5] = 15;
//     for (int i = 0; i < 6; i++)
//         printf("%d ", arr[i]);
//     return 0;
// }

// Insert element at index 1

// int main()
// {
//     int arr[6] = {3, 4, 9, 5, 6};
//     for (int i = 5; i > 1; i--)
//     {
//         arr[i] = arr[i - 1];
//     }
//     arr[1] = 7;
//     for (int i = 0; i < 6; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     printf("Reversed array: [ ");
//     for (int i = n - 1; i >= 0; i--)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("]");
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7}, n = 7, temp, i;
//     for (i = 0; i < n / 2; i++)
//     {
//         temp = arr[i];
//         arr[i] = arr[n - i - 1];
//         arr[n - i - 1] = temp;
//     }
//     printf("Reversed array: [ ");
//     for (i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("]");
//     return 0;
// }

// int main()
// {
//     char str1[50] = "Sharda";
//     char str2[] = "University";
//     strcat(str1, str2);
//     printf("Concatenated String: %s\n", str1);
//     char extracted[50] = "";
//     strncat(extracted, str1, 6);
//     printf("Extracted String: %s\n", extracted);
//     int length = strlen(extracted);
//     printf("Length is: %d\n", length);
//     char newstr[50];
//     strcpy(newstr, extracted);
//     printf("New String is: %s\n", newstr);
//     return 0;
// }

// #define CHAR_COUNT 256
// int main()
// {
//     char str1[] = "anagram";
//     char str2[] = "nagaram";
//     int count[CHAR_COUNT] = {0};
//     int i;
//     if (strlen(str1) != strlen(str2))
//     {
//         printf("False\n");
//         return 0;
//     }
//     for (i = 0; str1[i]; i++)
//     {
//         count[(int)str1[i]]++;
//         count[(int)str2[i]]--;
//     }
//     for (i = 0; i < CHAR_COUNT; i++)
//     {
//         if (count[i] != 0)
//         {
//             printf("False\n");
//             return 0;
//         }
//     }
//     printf("True\n");
//     return 0;
// }

// void main()
// {
//     int n;
//     printf("Enter the length of the string: ");
//     scanf("%d", &n);
//     char input[n + 1];
//     printf("Enter the string: ");
//     scanf("%s", input);
//     char result[2 * n + 1];
//     int i = 0, j = 0, count = 0;
//     while (input[i] != '\0')
//     {
//         result[j++] = input[i];
//         count = (input[i++] == '1') ? count + 1 : 0;
//         if (count == 5)
//         {
//             result[j++] = '0';
//             count = 0;
//         }
//     }
//     result[j] = '\0';
//     printf("Modified string: %s\n", result);
// }

// int main()
// {
//     char text[] = "Sharda University";
//     char pattern[] = "University";
//     int i, j;
//     for (i = 0; text[i] != '\0'; i++)
//     {
//         for (j = 0; pattern[j] != '\0'; j++)
//         {
//             if (text[i + j] != pattern[j])
//             {
//                 break;
//             }
//         }
//         if (pattern[j] == '\0')
//         {
//             printf("Yes, Pattern found at index %d.", i);
//             return 0;
//         }
//     }
//     printf("No, Pattern not found.");
//     return 0;
// }

// int main()
// {
//     char str[] = "helloworld";
//     int new[256] = {0};
//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         new[(int)str[i]]++;
//     }
//     printf("Frequencies are:\n");
//     for (int i = 0; i < 256; i++)
//     {
//         if (new[i] > 0)
//         {
//             printf("'%c' = %d\n", i, new[i]);
//         }
//     }
//     return 0;
// }

// Program to create a linked list

#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *ROOT = NULL;
int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    head->data = 5;
    head->next = NULL;
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("Linked list is %d ->", temp->data);
        temp = temp->next;
    }
    return 0;
}
