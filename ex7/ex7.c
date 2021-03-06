#include <stdio.h>

int main(int argc, char *argv[]) {
  int distance = 100;
  float power = 2.345f;
  double super_power = 56789.4532;
  char initial = 'A';
  char first_name[] = "Zed";
  char last_name[] = "Shaw";

  printf("You are %d miles away.\n", distance);
  printf("You have %f levels of power.\n", power);
  printf("You have %f awesome super powers.\n", super_power);
  printf("You have an initial %c.\n", initial);
  printf("You have a first name %s.\n", first_name);
  printf("You have a last name %s.\n", last_name);
  printf("Your whole name is %s %c. %s.\n", first_name, initial, last_name);


  int bugs = 100;
  double bug_rate = 1.2;

  printf("You have %d bugs at the imaginary rate of %f.\n", bugs, bug_rate);

  long universe_of_defects = 1L * 1024L * 1024L * 1024L;
  printf("The universe has %ld bugs.\n", universe_of_defects);

  double expected_bugs = bugs * bug_rate;
  printf("You are expected to have %f bugs.\n", expected_bugs);

  double part_of_the_universe = expected_bugs / universe_of_defects;
  printf("That is only a %e portion of the univers.\n", part_of_the_universe);

  // this makes no sense, just a demo of something weird in C
  char null_byte = '\0';
  int care_percentage = bugs * null_byte;
  printf("Which means you care %d%%.\n", care_percentage);

  return 0;
}
