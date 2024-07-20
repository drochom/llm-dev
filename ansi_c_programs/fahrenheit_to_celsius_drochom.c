#include <stdio.h>

float celsius_to_fahrenheit(float f) {
  return (f-32)*(5/9.0);
}

int main() {
  // Exercise 1-3. Modify the temperature conversion program to print a heading above the table.
  printf("     Celsius  Fahrenheit\n");
	for (int i=0;i<=15;i++) {
    printf("%12d%12.1f\n", i * 20, celsius_to_fahrenheit(i*20));
  }
}
