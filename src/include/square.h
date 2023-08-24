#include <stdio.h>
#include <stdlib.h>

/*
* Generates a square with the given size and character
* @param size The size of the square
* @param character The character to be used
* @return void
*/
void generate_square(int size, char character) {
  int i, j;

  printf("\n");

  for (i = 0; i < size; i++) {
    for (j = 0; j < size; j++) {
      printf("%c", character);
    }

    printf("\n");
  }

  printf("\n");
}

/*
* Initializes the square generator
* @return void
*/
void init_square() {
  printf("Enter the size of the square (1-9): ");

  char* size;
  scanf(" %c", size);

  printf("Enter the character to be used: ");

  char character;
  scanf(" %c", &character);

  int converted_size = atoi(size);
  generate_square(converted_size, character);
}