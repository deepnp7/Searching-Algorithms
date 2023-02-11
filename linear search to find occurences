#include <stdio.h>

void linear_search(int arr[], int n, int x) {
  int i, flag = 0;
  for (i = 0; i < n; i++) {
    if (arr[i] == x) {
      printf("%d is present at index %d\n", x, i);
      flag = 1;
    }
  }
  if (!flag)
    printf("%d is not present in the array\n", x);
}

int main() {
  int n, x, i;
  
  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);
  
  int arr[n];
  
  printf("Enter %d integers: \n", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  
  printf("Enter the value to be searched: ");
  scanf("%d", &x);
  
  linear_search(arr, n, x);
  
  return 0;
}
