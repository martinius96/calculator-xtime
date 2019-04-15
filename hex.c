/*|----------------------------------------------------------|*/
/*|Author of implementation: Martin Chlebovec                |*/
/*|Technical University in Košice                            |*/
/*|----------------------------------------------------------|*/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
static unsigned long xtime(unsigned long x){
	return ((x<<1) ^ (((x>>7) & 1) * 0x1b));
}
static uint8_t Multiply(uint8_t x, uint8_t y){
  	return ((y & 1) * x) ^
       ((y>>1 & 1) * xtime(x)) ^
       ((y>>2 & 1) * xtime(xtime(x))) ^
       ((y>>3 & 1) * xtime(xtime(xtime(x)))) ^
       ((y>>4 & 1) * xtime(xtime(xtime(xtime(x)))))^
       ((y>>5 & 1) * xtime(xtime(xtime(xtime(xtime(x)))))) ^
       ((y>>6 & 1) * xtime(xtime(xtime(xtime(xtime(xtime(x)))))))^
       ((y>>7 & 1) * xtime(xtime(xtime(xtime(xtime(xtime(xtime(x))))))));
}

int main(){
	unsigned int operand1, operand2;
	uint8_t x,y;
      	char buffer[100];
  	int success = 0;
  	printf("Enter numbers from range 00-FF: \n");
  	while(success != 1) {
		printf("Enter number 1: \n");
    		printf("0x");
		scanf("%s", buffer);
    		success = sscanf(buffer, "%02x", &operand1);
    		if(operand1 >= 00 && operand1 < 256) {
      			success = 1;
    		}else{
    			success = 0;
    		}
  	}
	success = 0;
	while(success != 1) {
         	printf("Enter number 2: \n");
    		printf("0x");
		scanf("%s", buffer);
    		success = sscanf(buffer, "%02x", &operand2);
    		if(operand2 >= 00 && operand2 < 256) {
      			success = 1;
    		}else{
    			success = 0;
    		}
  	}
	x = operand1;
	y = operand2;
 	uint8_t result;
	result = Multiply( x, y );
        printf("Xtime result: 0x%02x\n", result);
	return 0;
}

