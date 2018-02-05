#include <stdio.h>

/// index on pointers using indexing (the preferred way)
void print_using_indexing(int count, char *names[], int ages[]) {
  for (int i = 0; i < count; i++) {
    printf("%s has %d years alive.\n", names[i], ages[i]);
  }

  printf("----\n");
}

void print_using_pointer_arithmatic(int count, char **cur_name, int *cur_age) {
  // second way to use pointers
  for (int i = 0; i < count; i++) {
    printf("%s is %d years old.\n", *(cur_name + i), *(cur_age + i));
  }

  printf("----\n");
}

void print_using_pointer_indexing(int count, char **cur_name, int *cur_age) {
  // third way, pointers are just arrays
  for (int i = 0; i < count; i++) {
    printf("%s is %d again.\n", cur_name[i], cur_age[i]);
  }

  printf("----\n");
}

void print_addresses(int count, char **cur_name, int *cur_age) {
  // print out the addresses of the pointers
  for (int i = 0; i < count; i++) {
    printf("%p is the address of %s \n", cur_name[i], cur_name[i]);
    printf("%p is the address of age %d \n", cur_age[i], cur_age[i]);
  }

  printf("----\n");
}

int main(int argc, char *argv[]) {
  // create two arrays we care about
  int ages[] = { 23, 43, 12, 89, 2 };
  char *names[] = {
    "Alan", "Frank",
    "Mary", "John", "Lisa"
  };

  // safely get the size of ages
  int count = sizeof(ages) / sizeof(int);

  print_using_indexing(count, names, ages);

  // setup pointers to the start of the arrays
  // you have to specify the type so the compiler can do the
  // right math on the pointer when incrementing or decrimenting
  int *cur_age = ages;
  char **cur_name = names;

  print_using_pointer_arithmatic(count, cur_name, cur_age);
  print_using_pointer_indexing(count, cur_name, cur_age);
  print_addresses(count, cur_name, cur_age);

  // fourth way, with pointers in a stupid and complex way i.e. dont do this
  for (cur_name = names, cur_age = ages;
        (cur_age - ages) < count; cur_name++, cur_age++) {
    printf("%s lived %d years so far.\n", *cur_name, *cur_age);
  }

  return 0;
}
