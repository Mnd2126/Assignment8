/* Matthew Danielson
*  7/11/16
*  sort.c
*  Sorts random numbers by ascending and descending order
*/

#include <math.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
	srand(time(NULL));
	printf("How long will your set of numbers be?");
	int length;
	scanf("%d", &length);
	int *array = (int*) malloc(length*sizeof(int));
	int *ascending = (int*) malloc(length*sizeof(int));
	int *descending = (int*) malloc(length*sizeof(int));
	for(int x = 0; x<length; x++){
		array[x] =(int) (100*(((float)rand())/RAND_MAX));
		ascending[x] = array[x];
		descending[x] = array[x];
	}
	for(int x = 0; x< length; x++){
		for(int y = 0; y < length-1; y++){
			if(ascending[y] > ascending[y+1]){
				int temp = ascending[y+1];
				ascending[y+1] = ascending[y];
				ascending[y] = temp;
				
			}
		
		}

	}
	for(int x = 0; x<=length; x++){
		descending[x] = ascending[length-x-1];

	}
	for(int x = 0; x<length; x++){
		printf("%5d, %5d, %5d\n", array[x], ascending[x], descending[x]);

	}		
	free(array);
	free(ascending);
	free(descending);
}
