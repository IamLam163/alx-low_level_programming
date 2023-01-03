#include <stdio.h>
#include <stdlib.h>
/*
 * line 6 prototype
 * check if array is NULL & return -1 if true
 * line 13, iterate through the array using i
 * print i at every iteration
 * if array[i] == value, return i
 * else return -1
 * */


int linear_search(int *array, size_t size, int value)
{
  if (array == NULL) {
    return -1;
  }

  for (size_t i = 0; i < size; i++ ) {
    printf("%d\n", array[i]);
    if (array[i] == value) {
      return i;
    }
  }
  return -1;
}
/*
int linear_search(int *array, size_t size, int value) {
  if (array == NULL) {
    return -1;
  }

  for (size_t i = 0; i < size; i++) {
    printf("%d\n", array[i]);
    if (array[i] == value) {
      return i;
    }
  }

  return -1;
}*/
