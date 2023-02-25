

#include <stdio.h>

int first_occurrence(int arr[], int n, int x) {
  int l = 0, r = n - 1;
  int result = -1;
  
  while (l <= r) {
    int mid = l + (r - l) / 2;
    
    if (arr[mid] == x) {
      result = mid;
      r = mid - 1;
    }
    else if (arr[mid] < x) 
      l = mid + 1;
    else
      r = mid - 1;
  }
  
  return result;
}
int main() {
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
  
  result = first_occurrence(arr, n, x);
  
  if (result == -1)
    printf("Element is not present in the array\n");
  else
    printf("First occurrence of the element is at index %d\n", result);
  
  return 0;
}
