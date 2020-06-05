#include<stdio.h>
void main(){	
	int i;
for (i=0; i<100;i++){
	
	/*if((i+1)%3==0 || (i+1)%5==0){
		printf("%d \n",i+1);
	}*/
	 if((i+1)%3==0 && (i+1)%5==0){
		
		printf("%d = Hola Mundo \n", i+1);
			
	}else if((i+1)%3==0){
		printf("%d = Hola \n", i+1);
	}else if((i+1)%5==0){
		printf("%d = Mundo \n",i+1);
	}
	
	
}
}
