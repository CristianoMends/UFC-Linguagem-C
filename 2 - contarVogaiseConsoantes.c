
#include <stdio.h>
/*
    Contar quantas vogais e consoantes existem na frase
*/
//------------------------------------------------------------------------------

//funcao para saber se um char é uma vogal, se for retorna 1 se nao 0
int isVowel(char l){
        if(l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u' ||
           l == 'A' || l == 'E' || l == 'I' || l == 'O' || l == 'U'){
            return 1;
        }else{
            return 0;        
        }
}

//------------------------------------------------------------------------------
//funcao para contar quantas vogais existem numa frase
int vowels(char frase[]){
    int quant =0;
    for(int i=0; frase[i] != '\0'; i++){
        if(isVowel(frase[i])){  //usando a funcao isVowel, se a letra da frase for vogal, quant++
            quant++;
        }
    }
    
    return quant;   //retorna quant
}

//------------------------------------------------------------------------------

//funcao para contar quantas consoantes existem em um frase
int consonants(char frase[]){
    int quant =0;
    for(int i=0; frase[i] != '\0'; i++){
        if(!isVowel(frase[i]) && (  //se a letra da iteracao for diferente de vogal e...
            (frase[i] >= 65 && frase[i] <= 90) || (frase[i] >= 97 && frase[i] <= 122) )){//se for uma letra maiuscula ou minuscula de acordo com a tabela ascII, quant++
            quant++;
        }
    }
    return quant;//retorna quant
}

//------------------------------------------------------------------------------

int main(){
    
    int tamanho = 100;
    char frase[tamanho];
    printf("Digite a frase:\n");
    fgets(frase, tamanho, stdin);
    
    printf("A frase possui: %d vogais e %d consoantes", vowels(frase), consonants(frase));
    return 0;
}

//------------------------------------------------------------------------------
