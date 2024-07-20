#include <stdio.h>

float fahrenheit_to_celsius(float f) {
  return (f-32)*(5/9.0);
}

float celsius_to_fahrenheit(float c) {
  return c * (9/5.0) + 32;
}


int main() {
  // Exercise 1-3. Modify the temperature conversion program to print a heading above the table.
  printf("  Fahrenheit     Celsius\n");
	for (int i=0;i<=15;i++) {
    printf("%12d%12.1f\n", i * 20, fahrenheit_to_celsius(i*20));
  }
  printf("\n\n");

  // Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table.
  printf("     Celsius  Fahrenheit\n");
  for (int i=0;i<=15;i++) {
    printf("%12d%12.1f\n", i * 20, celsius_to_fahrenheit(i*20));
  }
}
