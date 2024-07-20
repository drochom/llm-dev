#include <stdio.h>

int main() {
  while (1) {
    int v = getchar();
    printf("%d -> EOF?=%d\n", v, v != EOF);
    if (v == EOF) return 0;
  }
}
