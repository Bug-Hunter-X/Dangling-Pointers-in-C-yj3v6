#include <stdio.h>

int main() {
  int *ptr = NULL; // Initialize to NULL

  int x = 10;
  ptr = &x; // Assign a valid address
  *ptr = 20;

  printf("Value of x: %d\n", x);

  ptr = NULL; // Set to NULL after use to prevent dangling pointer issues

  return 0;
} 