#include <stdio.h>
#include <string.h>

int main() {
  printf("1. strlen section: \n");
  const char name[] = "Nongpal";
  size_t length = strlen(name);

  printf("Word \"%s\" has length %zu of char.\n\n", name, length);

  printf("2. strcmp section: \n");
  const char *word1 = "Helllo, World!";
  const char *word2 = "Helllo, World!";
  const char *word3 = "I am a world";

  if (!strcmp(word1, word2)){
    printf("Word 1 and Word 2 are equal.\n");
  }

  if (strcmp(word1, word3)) {
    printf("Word 1 and Word 3 are not equal.\n\n");
  }

  printf("3. strcat section: \n");
  char word4[10] = "Hello, ";
  char word5[10] = "World!";
  strcat(word4, word5);
  printf("%s\n\n", word4);

  printf("4. strcpy section: \n");
  char dest_str[40];
  char source_str[30] = "Hello, World!";
  strcpy(dest_str, source_str);
  printf("%s\n\n", dest_str);

  printf("5. strstr section: \n");
  char my_str[] = "Hello, World!";
  char my_sub[] = "World";

  if (strstr(my_str, my_sub)) {
    printf("Substring found.\n");
  } else {
    printf("Substring not found.\n");
  }
}
