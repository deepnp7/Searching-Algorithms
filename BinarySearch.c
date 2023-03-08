// Recursive approach

#include <stdio.h>

int binary_search(int arr[], int l, int r, int x) {
  if (r >= l) {
    int mid = l + (r - l) / 2;
    
    if (arr[mid] == x) 
      return mid;
    
    if (arr[mid] > x) 
      return binary_search(arr, l, mid - 1, x);
    
    return binary_search(arr, mid + 1, r, x);
  }
  
  return -1;
}

int main() 
{
  int n, x, result;
  
  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);
  
  int arr[n];
  
  printf("Enter %d integers in ascending order: \n", n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  
  printf("Enter the value to be searched: ");
  scanf("%d", &x);
  
  result = binary_search(arr, 0, n - 1, x);
  
  if (result == -1)
    printf("Element is not present in the array\n");
  else
    printf("Element is present at index %d\n", result);
  
  return 0;
}
