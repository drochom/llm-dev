#include <stdio.h>

float celsius_to_fahrenheit(float f) {
  return (f-32)*(5/9.0);
}

int main() {
	for (int i=0;i<=15;i++) {
    printf("%d\t%d\n", i * 20, (int)celsius_to_fahrenheit(i*20));
  }
}
