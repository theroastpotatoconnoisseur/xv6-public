/*
#include <stddef.h>

int
main()
{
  int * pointer = NULL;
  int value = *pointer;
  pointer = &value;
}
*/


#include <stddef.h>

void
derefNullPointer()
{
  int *x = NULL;
  int y = 1;
  *x = y;
}


/*
#include <stddef.h>

int
main()
{
  int first = 10;
  int second = 1;
  int third = 1;
  int *integerPointer;

  first = 10;
  integerPointer = &first;
  second = *integerPointer;
  integerPointer = NULL;
  third = *integerPointer;
}
*/
