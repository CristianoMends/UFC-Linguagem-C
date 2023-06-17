#include <stdio.h>

/*
    Descobrir enesimo termo da fibonacci
    
    
A sequência de Fibonacci é uma série de números 
onde cada número é a soma dos dois números 
antecessor. Ela começa com 0 e 1, e os números 
subsequentes são obtidos somando os dois números 
antecessor. Então, a sequência fica assim: 
0, 1, 1, 2, 3, 5, 8, 13, 21, 34 e assim por diante.
*/
//funcao recursiva para encontrar o enesimo termo da fibonacci
int enesimo(int n){
    if(n <= 0){
        return 0;
    }else if(n == 1 || n == 2){
        return 1;
        
    }else{
        return enesimo(n - 1) + enesimo(n - 2);
        
    }
    
    /*funcao comum
    int antecessor[2] = {1, 1};
    int sucessor = 0;
    for(int i=1; i <= n;i++){
        if(n <= 0){
            sucessor = 0;
        }else if(i > 2){
            sucessor = antecessor[0] + antecessor[1];
            antecessor[0] = antecessor[1];
            antecessor[1] = sucessor;
        }else{
            sucessor = 1;
        }
    }
    return sucessor;
    */
}

int main(){
    int n;
    scanf("%d", &n);
    
    printf("%d", enesimo(n));
    
    return 0;
}