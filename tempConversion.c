#include <stdio.h>

float celsiusToFahrenheit(float celsius) {
  return (celsius * 9/5) + 32;
}

float fahrenheitToCelsius(float fahrenheit) {
  return (fahrenheit - 32) * 5/9;
}

int main() {
  float temperature;
  char unit;

  printf("Enter temperature and unit (C or F): ");
  scanf("%f %c", &temperature, &unit);

  switch (unit) {
    case 'C':
      printf("%.2f°C is equal to %.2f°F\n", temperature, celsiusToFahrenheit(temperature));
      break;
    case 'F':
      printf("%.2f°F is equal to %.2f°C\n", temperature, fahrenheitToCelsius(temperature));
      break;
    default:
      printf("Invalid unit\n");
  }

  return 0;
}