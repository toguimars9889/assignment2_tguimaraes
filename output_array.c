#include <stdio.h> 
#include "output_array.h"

int printarray (int array[], int size) {

	for(int i = 0 ; i < size; i++) 
		printf("  %d  ", array[i]);

	return 0; 
	}
