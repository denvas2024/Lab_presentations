/* File: unicode.c */
#include <stdio.h>
int main() {
  printf("\033[1m hello world \033[0m !"); //Bold
  printf("\033[4m hello world \033[0m !"); //underline
  printf("\033[7m hello world \033[0m !"); //reverse color
  printf("\033[5m hello world \033[0m !"); //blinking
  printf("\033[9m hello world \033[0m !\n"); //strikethrough
  return 0;
}
