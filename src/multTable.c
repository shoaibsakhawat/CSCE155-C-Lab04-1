/**
 * Author: shoaib sakhawat
 * Date: 22-10-2023
 *
 * This program generates a multiplication table
 * of the size given as a command line argument.
 */
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv) {

  if(argc != 2) {
    printf("Error: provide an integer\n");
    exit(1);
  }

  int n = atoi(argv[1]);
  if(n <= 0) {
    printf("empty table!\n");
    exit(0);
  }

  //TODO: place your code here
   for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= n; j++){
     if (i == 0){
      if (j == 0){
        printf (" --- ");
  } else {
    printf ("%4d",j);
  }
     }else if (j == 0) {
      printf ("%4d",i);
     } else {
      printf("%4d", i * j);
     } 
     }
     printf ("\n");
    }

  return 0;
}