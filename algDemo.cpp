#include <stdio.h>
#include <time.h>

int algoritmoDemorado(int);

int main(){
    clock_t t1, soma = 0;
    int x = 10;
    int y = 100; 
    for(int i = 0; i<10; i++){
        t1 = clock();
        algoritmoDemorado(y);
        t1 = clock() - t1;
        soma += t1;
    }

    printf("o tempo foi %f\n", (((float)soma)/x)/CLOCKS_PER_SEC); 

}

int algoritmoDemorado (int n){
    int soma = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                for(int l = 0; l < n; l++){ 
                }
            }
        
        }
    }
   
    return soma;
}

