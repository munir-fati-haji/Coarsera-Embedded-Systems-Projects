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
 * @file <stats.h> 
 * @brief this is the header file for the stats.c program.
 *
 * The file includes the description and calling of the functions
 *
 * @author <Munir Fati Haji>
 * @date <17/4/2022>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Finds the maximum of a given unsigned char array
 *
 * This function takes an array of unsigned character and its size.
 * From an array of unsigned character find the maximum and 
 * return the character
 *
 * @param arr[] The array from which to find maximum
 * @param size size of the array
 *
 * @return The maximum unsigned char value
 */

unsigned char  find_maximum(unsigned char arr[], unsigned int size);

/**
 * @brief Finds the minimum of a given unsigned char array
 *
 * This function takes an array of unsigned character and its size.
 * From an array of unsigned character find the minimum and 
 * return the character
 *
 * @param arr[] The array from which to find minimum
 * @param size size of the array
 *
 * @return The minimum unsigned char value
 */

unsigned char  find_minimum(unsigned char arr[], unsigned int size);

/**
 * @brief Sorts a given array
 *
 * This function takes an array of unsigned character and its size.
 * And sorts the characteres inside it
 *
 * @param arr[] The array to sort
 * @param size size of the array
 *
 * @return void
 */

void  sort_array(unsigned char arr[], unsigned int size);

/**
 * @brief Finds the median of a given unsigned char array
 *
 * This function takes an array of unsigned character and its size.
 * From an array of unsigned character copy the array, sort the array
 * then find the median and return the character
 *
 * @param arr[] The array from which to find median
 * @param size size of the array
 *
 * @return The median of the unsigned char array
 */

unsigned char  find_median(unsigned char arr[], unsigned int size);

/**
 * @brief Finds the mean of a given unsigned char array
 *
 * This function takes an array of unsigned character and its size.
 * From an array of unsigned character calculate the mean and 
 * return the character
 *
 * @param arr[] The array from which to find mean
 * @param size size of the array
 *
 * @return The mean of the unsigned char array
 */

unsigned char  find_mean(unsigned char arr[], unsigned int size);

/**
 * @brief Prints the ascii number of the characters given in an array
 *
 * This function takes an array of unsigned character and its size and 
 * prints the array.
 *
 * @param arr[] The array to print
 * @param size size of the array
 *
 * @return void
 */

void  print_array(unsigned char arr[], unsigned int size);

/**
 * @brief Prints all the statistics
 *
 * This function takes an array of unsigned character and its size and 
 * prints the statistics. Which includes maximum, minimum, mean, median
 * original array and sorted array.
 *
 * @param arr[] The array for which to print statistics
 * @param size size of the array
 *
 * @return void
 */

void print_statistics(unsigned char arr[], int size);

#endif /* __STATS_H__ */
