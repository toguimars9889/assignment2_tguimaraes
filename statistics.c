#include <stdio.h>
#include <math.h>
#include "statistics.h"

int domath (int array[], int size) {
	int placeholder = 0;

	float average = 0;
	for ( int i = 0; i < size; i++) {
	placeholder = placeholder + array[i];
	average = (float)placeholder / size; }

	printf("\nAverage: %.2f \n\n", average);


	float deviation[size];

	for ( int i = 0 ; i < size; i++) {
		deviation[i] = array[i] - average;
		if(deviation[i] < 0)
		deviation[i] = deviation[i] * (-1);
		printf("Standard Deviation for number %i is : %.2f \n", i + 1, deviation[i]);
	}

	printf("\nThe sum of this array is %d \n" , placeholder); 

	int min = array[0]; 

	for(int i = 0 ; i < size; i++) 
		if(array[i] < min) min = array[i];
		printf("\nThe lowest number (minimum) in this array is %d\n", min);

	int max = array[0];

        for(int i = 0 ; i < size; i++)
                if(array[i] > max) max = array[i];
                printf("\nThe highest number (maximum) in this array is %d\n", max);
	
	printf("\nThe difference between these two numbers is");
	int absolutediff = 0; 
	absolutediff = max - min; 
	if(absolutediff < 0) absolutediff = absolutediff * (-1); 

	printf("%d", absolutediff);
	return 0;
}
