/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {

  int n, sum, i;

  printf("Enter the number (n) the sum of numbers from 1 to n : ");
  scanf("%d", &n);

  for(i = 1; i <= n; i++){
    sum += i;
  }

  printf("the sum of numbers 1 to %d : %d", n, sum);
  return 0;
}

