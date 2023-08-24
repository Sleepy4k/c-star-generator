#include <stdio.h>
#include <stdlib.h>

/*
* Generates a rectangle with the given height, width and character
* @param height The height of the rectangle
* @param width The width of the rectangle
* @param character The character to be used
* @return void
*/
void generate_rectangle(int height, int width, char character) {
  int i, j;

  for (i = 0; i < height; i++) {
    for (j = 0; j < width; j++) {
      printf("%c", character);
    }

    printf("\n");
  }
}

/*
* Initializes the rectangle generator
* @return void
*/
void init_rectangle() {
  printf("Enter the height of the rectangle: ");

  char* height;
  scanf(" %c", height);

  printf("Enter the width of the rectangle: ");

  char* width;
  scanf(" %c", width);

  printf("Enter the character to be used: ");

  char character;
  scanf(" %c", &character);

  int converted_height = atoi(height);
  int converted_width = atoi(width);
  generate_rectangle(converted_height, converted_width, character);
}