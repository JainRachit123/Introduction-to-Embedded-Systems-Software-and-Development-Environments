/**
 * @file data.h 
 * @brief Header file for declaration of function of data.c file.
 *
 * @author Rachit Jain
 * @date 04/07/2020 
 *
 */

/**
 * @brief Converts integer to ASCII string
 *
 * The function takes a 32 bit integer data, a pointer to the data array and
 * converts the data into ASCII string with a particular base provided.
 *
 * @param data Integer data
 * @param ptr Pointer to data array
 * @param base Base provided from 2 to 16	
 *
 * @return length of the String with null character
 */

uint8_t my_itoa(int32_t data, uint8_t * ptr, uint32_t base);

/**
 * @brief Converts ASCII string to integer
 *
 * The function takes pointer to the char data, length of the string and
 * converts the ASCII string into integer depending on base provided.
 *
 * @param ptr Pointer to ASCII string
 * @param digits Length of the string
 * @param base Base provided from 2 to 16	
 *
 * @return integer data
 */

int32_t my_atoi(uint8_t * ptr, uint8_t digits, uint32_t base)