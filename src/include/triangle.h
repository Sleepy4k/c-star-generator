#include <stdio.h>
#include <stdlib.h>

/*
* Generates a triangle with the given height and character
* @param height The height of the triangle
* @param character The character to be used
* @return void
*/
void generate_triangle(int height, char character) {
  int i, j, k;

  for (i = 0; i < height; i++) {
    for (j = 0; j < height - i; j++) {
      printf(" ");
    }

    for (k = 0; k < i; k++) {
      printf("%c ", character);
    }

    printf("\n");
  }

  printf("\n");
}

/*
* Initializes the triangle generator
* @return void
*/
void init_triangle() {
  printf("Enter the height of the triangle (1-9): ");

  char* height;
  scanf(" %c", height);

  printf("Enter the character to be used: ");

  char character;
  scanf(" %c", &character);

  int converted_height = atoi(height);
  generate_triangle(converted_height, character);
}