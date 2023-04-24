#include <stdio.h>
#include <math.h>

int main() {
	double renda;
	
	scanf("%lf",&renda);
	
	if(renda <= 324){
		printf("Extremamente pobre");
	}else if(renda > 324 && renda <= 648){
		printf("Pobre");
	
	}else if(renda > 648 && renda <= 1164){
		printf("Vulneravel");
	
	}else if(renda > 1164 && renda <= 1764){
		printf("Baixa classe media");
	
	}else if(renda > 1764 && renda <= 2564){
		printf("Media classe media");
	
	}else if(renda > 2564 && renda <= 4076){
		printf("Alta classe media");
	
	}else if(renda > 4076 && renda <= 9920){
		printf("Baixa classe alta");
	
	}else if(renda > 9920){
		printf("Alta classe alta");
	}
		
    return 0;
}