#include <stdio.h>

int main() {
 char c;
 while(((c = getchar()) != EOF)) {
  printf("%c\n", c);
 }
 //printf("%d - at EOF\n", c);
}
