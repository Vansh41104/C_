#include<stdio.h>

int main() {
  // declaration of the array and other variables
  int arr[20], size, key, i, e;
  printf("Number of elements in the list: ");
  scanf("%d", &size);

  printf("Enter elements of the list: ");    
  // loop for the input of elements from 0 to number of elements-1
     for (i = 0; i < size; i++)
     scanf("%d", &arr[i]);
     printf("Enter the element to search ie. key element: ");
     scanf("%d", &key);

  // loop for traversing the array from to the number of elements-1
      for (e = 0; e < size; e++)
      if (arr[e] == key) // comparing each element with the key element
      break; // cursor out of the loop when a key element found

  if (e < size) // condition to check whether previous loop partially traversed or not
  printf("Key element found at E = %d", e+1); // printing the e if key found
  else
    printf("Key element not found");
  return 0;
}
