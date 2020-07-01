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

void print_statistics(int, int, int, int);
void print_array(unsigned char [], int);
int find_median(unsigned char [], int);
int find_mean(unsigned char [], int);
int find_maximum(unsigned char [], int);
int find_minimum(unsigned char [], int);
void sort_array(unsigned char [], int);

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

}

/* Add other Implementation File Code Here */
