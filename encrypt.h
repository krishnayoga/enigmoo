// Ida Bagus Krishna Yoga Utama (1506716983)
// Nurian Satya Wardana (1506717071)

#include <stdio.h>

void encrypt(int maxSize, char msg[]){
	int i = 0, length = 0;
	int encrypted[length];

	printf("\n Data yang telah terenkripsi adalah: \n ");
	for(i = 0; i < length; i++){
		encrypted[i] = msg[i] - (100-(key+i)); 
		printf("%c", encrypted[i]);
	}
	
}
