#include <stdio.h>
#include <math.h>
#include "statistics.h"

int calculateSum(int array[], int size) {

        int sum = 0;

        for(int i = 0 ; i < size; i++)
                sum = sum + array[i];

        return sum;
        }

double calculateAvg(int array[], int size) {

        int sum = calculateSum(array, size);

        return (double)sum / size;
        }

double calculateSTDdev(int array[], int size) {

        double average = calculateAvg(array, size);

        double sumSquaredDifferences = 0;

        for(int i = 0 ; i < size; i++) {
                double difference = array[i] - average;
                sumSquaredDifferences = sumSquaredDifferences + (difference * difference);
                }

        return sqrt(sumSquaredDifferences / size);
        }

int domath (int array[], int size) {
	int sum = calculateSum(array, size);
	double average = calculateAvg(array, size);
	double standardDeviation = calculateSTDdev(array, size);

	printf("\nAverage: %.2f\n", average);
	printf("\nStandard deviation: %.2f\n", standardDeviation);
	printf("\nThe sum of this array is %d\n", sum);
	return 0;
}

