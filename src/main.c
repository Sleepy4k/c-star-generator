#include <stdio.h>

#include "include/menu.h"
#include "include/square.h"
#include "include/triangle.h"
#include "include/rectangle.h"

int main() {
  while (1) {
    menu();

    char choice;
    scanf(" %c", &choice);

    switch (choice) {
      case '1':
        init_triangle();
        break;
      case '2':
        init_square();
        break;
      case '3':
        init_rectangle();
        break;
      case '4':
        printf("Bye\n");
        return 0;
      default:
        printf("Invalid choice\n");
        break;
    }
  }

  return 0;
}