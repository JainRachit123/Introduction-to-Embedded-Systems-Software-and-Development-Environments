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
 * @file stats.h 
 * @brief Header file for description and declaration of functions from stats.c
 *
 * This file contains the function declaration and function description of the 
 * functions used in stats.c file
 *
 * @author Rachit Jain
 * @date 29/06/2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Print the statistics of an array
 *
 * This function prints the statistics of an array which include minimum,
 * maximum, mean and median of an array. This will take all the stats of integer type and
 * print the information on the console without returning anything
 *
 * @param max The maximum value of an array
 * @param min The minimum value of an array
 * @param mean Mean of the numbers of an array
 * @param median Median of the numbers of an array
 *
 */
void print_statistics(int max, int min, int mean, int median);

/**
 * @brief Print the array
 *
 * This function takes an array of unsigned char items and the length of the array
 * and prints the array. This will print the information on the console without 
 * returning anything
 *
 * @param array An unsigned char array
 * @param len The length of the array
 *
 */
void print_array(unsigned char array[], int len);

/**
 * @brief Find the median of an given array
 *
 * This function takes an array of unsigned char items and the length of the array
 * and finds the median from the array. This will return a median of integer type.
 *
 * @param array An unsigned char array
 * @param len The length of the array
 *
 * @return The median of the array
 */
int find_median(unsigned char array[], int len);

/**
 * @brief Find the mean of an given array
 *
 * This function takes an array of unsigned char items and the length of the array
 * and finds the mean from the array. This will return a mean of integer type.
 *
 * @param array An unsigned char array
 * @param len The length of the array
 *
 * @return The mean of the array
 */
int find_mean(unsigned char array[], int len);

/**
 * @brief Find the maximum number from an given array
 *
 * This function takes an array of unsigned char items and the length of the array
 * and finds the maximum value from the array. This will return a maximum result of integer type.
 *
 * @param array An unsigned char array
 * @param len The length of the array
 *
 * @return The maximum of the array
 */
int find_maximum(unsigned char array[], int len);

/**
 * @brief Find the minimum number from an given array
 *
 * This function takes an array of unsigned char items and the length of the array
 * and finds the minimum value from the array. This will return a minimum result of integer type.
 *
 * @param array An unsigned char array
 * @param len The length of the array
 *
 * @return The minimum of the array
 */
int find_minimum(unsigned char array[], int len);

/**
 * @brief Sort the array in descending order
 *
 * This function takes an unsigned char array and sort the array from largest to smallest.
 *
 * @param array An unsigned char array
 * @param len The length of the array
 *
 */
void sort_array(unsigned char array[], int len);


#endif /* __STATS_H__ */
