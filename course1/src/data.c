/**
 * @file data.c
 * @brief Perform basic data manipulation.
 *
 *
 * @author Rachit Jain
 * @date 04/07/2020
 *
 */

#include "data.h"

uint8_t my_itoa(int32_t data, uint8_t * ptr, uint32_t base) {

  int32_t t;
  int length = 0, sign, i = 0;
  if(data == 0) {
    *ptr = '\0'
    return length;
  }

  if(data < 0) {
    sign = 1;
    data = -data;
  }

  while (data != 0) {
    * (ptr + i) = data % base;
    i++;
    data /= base;
  }

  if(sign == 1) {
    *(ptr + i++) = 45;
  }

  length = i;

  for(i = 0; i < (length)/2; i++) {
    t = *(ptr + i );
    *(ptr + i ) = *( ptr + length - i - 1);
    *( ptr + length - i - 1) = t;
  }

  return length;

}

int32_t my_atoi(uint8_t * ptr, uint8_t digits, uint32_t base) {

  int32_t data;
  int i = digits - 2;
  uint8_t t = (uint8_t)base;
  base = 1;

  if(!ptr) {
    return -1

  while(i > 0) {
    data += *(ptr + i) * (base);
    i -= 1
    base *= t;
  }

  if(t == 10)
    data = -data;
  else
    data += *(ptr + i) * base;

  return data;

}