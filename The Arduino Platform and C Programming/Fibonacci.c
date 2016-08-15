/* Write a program in C that computes and prints out the first six digits
in the Fibonacci sequence. You will need to look up the definition of
the Fibonacci sequence if you don't know it.
The first two numbers in the sequence are 0 and 1,
but your program should compute the next four digits.
Your C program must compile in order for it to be tested. */

#include <stdio.h>
int main() {
  /*variable for how many numbers in the sequence should be printed*/
  int seq = 6;

  /*create secquence array*/
  int fib[seq];

  /*the first two outputs are 0 and 1*/
  fib[0] = 0;
  fib[1] = 1;
  printf("Digit #1 of the Fibonacci sequence is %d \n"
         "Digit #2 of the Fibonacci sequence is %d \n", fib[0], fib[1]);

  /*run a loop to collect the remaining seq - 2 numbers in the sequence*/
  for (int i = 2; i < seq; i++) {
    fib[i] = fib[i - 1] + fib[i - 2];
    printf("Digit #%d of the Fibonacci sequence is %d\n", i + 1, fib[i]);
  }

  return 0;
}
