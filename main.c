// Author: Ji Woong Park jjp6315@psu.edu
// Collaborator: Joshua Watt jhw5304@psu.edu
// Collaborator: Claudio Tapia-Manon cbt5311@psu.edu
// Collaborator: Dongsheng Zhang dkz5086@psu.edu
// Section: 005R
// Breakout: 9

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int sum_n(int n){
  if (n == 0){
    return n;
  }
  else{
    return n + (sum_n(n-1));
  }
}

void print_n(const char * s, int n){
  if (n == 0){
    return;
  }
  else{ 
    printf("%s\n", s);
    print_n(s, n-1);
  }
}

int main(void) {
  char * number = readline ("Enter an int: ");
  int num = atoi(number);
  int sum = sum_n(num);
  printf("sum is %d.\n", sum);
  char * str = readline("Enter a string: ");
  print_n(str, num);
}