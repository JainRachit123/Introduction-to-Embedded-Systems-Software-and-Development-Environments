/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c 
 * @brief Prints the statistics and the sorted array of unsigned char data items
 *
 * This c program performs analytics on an array containing unsigned char data items.
 * The analysis include finding the median, mean, maximum and minimum from the array and
 * then printing the statistics and sorted array from largest to smallest on the console.
 *
 * @author Rachit Jain
 * @date 29/06/2020
 *
 */



#include <stdio.h>
#include "stats.h"
#include "platform.h"

/* Size of the Data Set */
#define SIZE (40)

void sort_array(unsigned char array[], int len) {
    
  int a, i, j, t = 0;
/* Sorting the array */
  for(i = 0; i < len; i++) {
    for(j = i + 1; j < len; j++) {
        if (array[i] < array[j]) {
            a = array[i];
            array[i] = array[j];
            array[j] = a;
            t++;
        }
    if (t == 0) {
        break;
    }
    }
  }
}

int find_maximum(unsigned char array[], int len) {
    
  return array[0];	// Returning the maximum value
}

int find_minimum(unsigned char array[], int len) {
    
  return array[len - 1];	// Returning minimum value
}

int find_mean(unsigned char array[], int len) {
    
  int sum = 0, i;
  for(i = 0; i < len; i++) {
    sum += array[i];
  }
  return sum / len;	// Returning the mean
}

int find_median(unsigned char array[], int len) {

  if(len % 2 == 0) {	// Finding median if length of array is even
      return (array[len / 2] + array[(len / 2) + 1]) / 2;
  }
  else {	// Finding the median if length of array is odd
      return array[(len / 2) + 1];
  }
}

void print_statistics(int max, int min, int mean, int median) {

/* Printing the statistics */
  PRINTF("\nMaximum: %d\n", max);
  PRINTF("Minimum: %d\n", min);
  PRINTF("Mean: %d\n", mean);
  PRINTF("Median: %d\n", median);
}

void print_array(unsigned char array[], int len) {

/* Printing the array */
  #ifdef VERBOSE    
  int i;
  for(i = 0; i < len; i++) {
    PRINTF("%d ", array[i]);
  }
  #endif
}
