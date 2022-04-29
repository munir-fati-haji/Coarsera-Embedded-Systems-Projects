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
 * @file <stats.c> 
 * @brief A program that performs statistical analytics on a dataset.
 *
 * The program includes of functions that can analyze an array of unsigned char 
 * data items and report analytics on the maximum, minimum, mean, and median of 
 * the data set. In addition, will reorder this data set from large to small. 
 *
 * @author <Munir Fati Haji>
 * @date <17/4/2022>
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

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  print_statistics(test, SIZE);

}

/* Add other Implementation File Code Here */

unsigned char  find_maximum(unsigned char arr[], unsigned int size) {
  unsigned char max;
  unsigned int i;

  max = arr[0];
  i = 0;
  while (i < size) {
    if (max < arr[i])
      max = arr[i];
    i++;
  }
  return (max);
}

unsigned char  find_minimum(unsigned char arr[], unsigned int size) {
  unsigned char min;
  unsigned int i;

  min = arr[0];
  i = 0;
  while (i < size) {
    if (min > arr[i])
      min = arr[i];
    i++;
  }
  return (min);
}

void  sort_array(unsigned char arr[], unsigned int size) {
  unsigned int	i;
	unsigned int	count;
  unsigned char	c;

	count = 0;
	while (count < size)
	{
    i = 0;
		while (i < size - 1)
		{
			if (arr[i] < arr[i + 1])
			{
        c = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = c;
			}
			i++;
		}
		count++;
	}
}

unsigned char  find_median(unsigned char arr[], unsigned int size) {
  unsigned char d[size];
  unsigned char median;
  unsigned char half;
  unsigned int i;

  i = 0;
  while (i < size) {
    d[i] = arr[i];
    i++;
  }
  sort_array(d, size);
  half = size / 2;
  if (size % 2 == 0)
    median = (d[half-1] + d[half]) / 2;
  else 
    median = d[half];
  return (median);
}

unsigned char  find_mean(unsigned char arr[], unsigned int size) {
  unsigned int sum;
  unsigned int i;

  i = 0;
  sum = 0;
  while (i < size) {
    sum = sum + (unsigned int)arr[i];
    i++;
  }
  return(sum / size);
}

void  print_array(unsigned char arr[], unsigned int size) {
  unsigned int i;

  i = 0;
  while (i < size) {
    printf("%d", arr[i]);
    if (i != size-1)
      printf(", ");
    i++;
  }
  printf("\n");
}

void print_statistics(unsigned char arr[], int size) {
  printf("The minimum is: %d\n", find_minimum(arr, size));
  printf("The maximum is: %d\n", find_maximum(arr, size));
  printf("The mean is: %d\n", find_mean(arr, size));
  printf("The median is: %d\n", find_median(arr, size));
  printf("Given array is : \n");
  print_array(arr, size);
  sort_array(arr, size);
  printf("The sorted array is : \n");
  print_array(arr, size);
}
