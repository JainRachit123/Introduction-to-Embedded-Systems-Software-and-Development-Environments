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

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations */
  int max, min, mean, median;
  
  /* Statistics and Printing Functions */
  printf("Given Array: \n");
  print_array(test, SIZE);
  sort_array(test, SIZE);
  max = find_maximum(test, SIZE);
  min = find_minimum(test, SIZE);
  mean = find_mean(test, SIZE);
  median = find_median(test, SIZE);
  print_statistics(max, min, mean, median);
  printf("Sorted Array: \n");
  print_array(test, SIZE);

}

/* Implementation File Code */
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
  printf("\nMaximum: %d\n", max);
  printf("Minimum: %d\n", min);
  printf("Mean: %d\n", mean);
  printf("Median: %d\n", median);
}

void print_array(unsigned char array[], int len) {

/* Printing the array */    
  int i;
  for(i = 0; i < len; i++) {
    printf("%d ", array[i]);
  }
}
