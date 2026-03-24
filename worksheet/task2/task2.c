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
	int number;



	for ( int i = 0; i<len; i++){

		if (hex[i] >= '0' && hex[i] <= '9'){   //note: values stored in ASCII
			number = hex[i] - 48;
			// check correct order printf("%d\n",number );
		}
		//check case by case basis for a-f and A-F
		else if((hex[i] >= 'A' && hex[i] <= 'F') ||(hex[i] >= 'a' && hex[i] <= 'f')) {
					switch (hex[i]) {
						case 'A': case 'a': number = 10; break;
						case 'B': case 'b': number = 11; break;
						case 'C': case 'c': number = 12; break;
						case 'D': case 'd': number = 13; break;
						case 'E': case 'e': number = 14; break;
						case 'F': case 'f': number = 15; break;

					
					
				
					}

		}else{
			printf("Error: Invalid Hexadecimal\n");
			return 0;
		}

        //sum up values 
		decimal = decimal * 16 + number ;

	}

	printf("decimal:%ld\n", decimal);


	return 0;
	
	}
