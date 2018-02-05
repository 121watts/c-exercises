#include <stdio.h>

int main(int argc, char *argv[]) {

  char name[] = "Zed";
  int areas[] = {name[1], 10, 12, 13, 14, 15};
  char full_name[] = {
    'Z', 'e', 'd',
    ' ', 'A', ' ',
    'S', 'h', 'a', 'w', '\0'
  };

  // WARNING: on some systems you may have to change the
  // %ld in this code to a %u since it will use unsigned ints

  printf("The size of an int: %ld\n", sizeof(long));
  printf("The size of areas: (int[]): %ld\n", sizeof(areas));
  printf("The number of ints in areas: %ld\n", sizeof(areas) / sizeof(float));
  printf("This first area is %d, the second is %d", areas[0], areas[1]);

  printf("The size of char: %ld\n", sizeof(char));
  printf("The size of name (char[]): %ld\n", sizeof(name));
  printf("The number of chars in name: %ld", sizeof(name) / sizeof(char));

  printf("name=\"%s\", fullname=\"%s\" \n", name, full_name);
  printf("areas[0]: %c, %d\n", areas[0], areas[0]);
  char e = 'e';
  int isE101 = 'e' == 101;
  printf("lower case e: %c, %d\n", e, e);
  printf("is e == 101: %d \n", isE101);

  return 0;
}
