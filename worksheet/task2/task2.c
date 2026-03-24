/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name:natasha
 * ID: 201553125
 */

#include <stdio.h>
#include <string.h>

int main(void){
	long decimal=0;
	char hex[9];
	
	printf("Enter a hexadecimal: ");
	scanf("%s", hex);

	int len = strlen(hex);
	int power = 0;
	int number;



	for ( int i = len - 1; i>=0; i--){

		if (hex[i] >= '0' && hex[i] <= '9'){
			number = hex[i] - 48;
			// check correct order printf("%d\n",number );
		}
		
	
	}
	// if input contains invalid hex digit
	// printf("Error: Invalid Hexadecimal\n");
	
	// print the decimal result
	printf("decimal:%ld\n", decimal);
	
	return 0;
	
}