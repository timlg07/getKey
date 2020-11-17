#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[]) {
  char c;
  if (argc > 1) {
    c = atoi(argv[1]);
    if (!c && argv[1][0] != '0') {
      c = argv[1][0];
    }
  } else {
    c = getch();
  }

  putchar(c);
  return c;
}

