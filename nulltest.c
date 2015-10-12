#include "types.h"
#include "stat.h"
#include "user.h"
#define NULL ((void*)0)

int
main(int argc, char *argv[])
{
  int *intptr = NULL;
  printf(1, "this is what dereferencing a NULL pointer looks like: %p\n", *intptr);
  exit();
}
