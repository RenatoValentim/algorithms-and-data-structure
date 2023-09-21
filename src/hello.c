#include "hello.h"
#include <stdio.h>
#include <string.h>

char *hello(char *name) {
  char greetings[100] = "Hello ";
  strcat(greetings, name);
  return strdup(greetings);
}
