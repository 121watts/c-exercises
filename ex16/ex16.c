// imports the standard input output headers
#include <stdio.h>
// imports the assertion header
#include <assert.h>
// probably imports malloc
#include <stdlib.h>
// imports the strdup function from the string header
#include <string.h>

// Create a struct of type Person with four fields
struct Person {
  char *name;
  int age;
  int height;
  int weight;
};

// create a function which returns a pointer to type struct Person
struct Person *Person_create(char *name, int age, int height,
    int weight) {

  // intializae a variable who which is a pointer to struct Person
  struct Person *who = malloc(sizeof(struct Person));
  // assert that who is not NULL
  assert(who != NULL);

  // assing name to the name field at who
  who->name = strdup(name);
  who->age = age;
  who->height = height;
  who->weight = weight;

  return who;
};

// create a function Person destroy which returns nothing
// and takes a pointer to a struct Person
void Person_destroy(struct Person *who) {
  // assert that the pointer is not NULL
  assert(who != NULL);
  // free the memory from the strdup
  // free(who->name);
  // free the rest of memory from who
  free(who);
}

void Person_print(struct Person *who) {
  printf("Name: %s\n", who->name);
  printf("\tAge: %d\n", who->age);
  printf("\tHeight: %d\n", who->height);
  printf("\tWeight: %d\n", who->weight);
}

int main(int argc, char *argv[]) {
  // make two people structures
  struct Person *joe = Person_create("Joe Alex", 32, 64, 140);
  struct Person *frank = Person_create("Frank Blank", 20, 72, 180);

  // print them out and where they are in memory
  printf("Joe is at memory location: %p\n", joe);
  Person_print(joe);

  printf("Frank is at memory location: %p\n", frank);
  Person_print(frank);

  joe->age += 20;
  joe->height -= 2;
  joe->weight += 40;
  Person_print(NULL);

  frank->age += 20;
  frank->weight += 20;
  Person_print(frank);

  // destroy them both to clean up memory
  Person_destroy(joe);
  Person_destroy(frank);

  return 0;
}
