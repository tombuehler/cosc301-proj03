#include "types.h"
#include "stat.h"
#include "user.h"
#define NULL ((void*)0)

int
main(int argc, char *argv[])
{
  char *nullfile = NULL;
  int fd = open(nullfile, 0644);
  if (fd < 0) {
    printf(1, "open() failed as expected\n");
  } else {
    printf(1, "test with open() failed.  open() should have failed because of NULL file name\n");
  }

  if (mkdir(nullfile) < 0) {
    printf(1, "mkdir() failed as expected\n");
  } else {
    printf(1, "test with mkdir() failed.  mkdir() should have failed because of NULL directory name\n");
  }

  exit();
}
