#include <stdio.h>
#include "statistics.h"
#include "output_array.h"

int main () {

	printf("How many numbers would you like in the first array? (1/3)\n");

		int firstsize = 0;

		for(int i = 0; i < 1; i++) {
			scanf("%d", &firstsize);
			if( firstsize > 10) i--;
			printf("\nPlease enter an array size lower than the number 10\n");
}
		
		printf("\n Please enter %d numbers.\n", firstsize);

		int firstarray[firstsize];

		for( int i = 0; i < firstsize; i++) { 
			printf("Number %i: ", i+1);
			scanf("%d" , &firstarray[i]); }

	printf("How many numbers would you like in the second array? (2/3)\n");
		int secondsize = 0;

                for(int i = 0; i < 1; i++) {
                        scanf("%d", &secondsize);
                        if( secondsize > 10){ i--;
                        printf("\nPlease enter an array size lower than the number 10\n");
}}

                printf("\n Please enter %d numbers.\n", secondsize);

                int secondarray[secondsize];

                for( int i = 0; i < secondsize; i++) {
                        printf("Number %i: ", i+1);
                        scanf("%d" , &secondarray[i]); }

	printf("How many numbers would you like in the third array? (3/3)\n");
		int thirdsize = 0;

                for(int i = 0; i < 1; i++) {
                        scanf("%d", &thirdsize);
                        if( thirdsize > 10) i--;
                        printf("\nPlease enter an array size lower than the number 10\n");
}

                printf("\n Please enter %d numbers.\n", thirdsize);

                int thirdarray[thirdsize];

                for( int i = 0; i < thirdsize; i++) {
                        printf("Number %i: ", i+1);
                        scanf("%d" , &thirdarray[i]); }

 		printf("\nFirst Array Numbers: ");
		printarray(firstarray, firstsize);

		printf("\nStatistics for first array.\n");
		domath(firstarray, firstsize);
	
		printf("\nSecond Array Numbers: ");
                printarray(secondarray, secondsize);
		printf("\nStatistics for second array.\n");
                domath(secondarray, secondsize);
	
		 printf("\nThird Array Numbers: ");
                printarray(thirdarray, thirdsize);
		printf("\nStatistics for third array.\n");
                domath(thirdarray, thirdsize);

return 0; 
} 
