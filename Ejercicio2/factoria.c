#include <stdio.h>
#include <stdlib.h>

int factorial_iterativo(int n){
    int res = 1;
    for(int i = 1; i<=n; i++){
        res *= i;
    }
    return res;
}

int factorial_recursivo(int n){
    if(n==0){
        return 1;
    }else{
        return factorial_recursivo(n-1)*n;
    }
}



int main(){
    printf("%i \n",factorial_iterativo(16));
    printf("%i \n",factorial_recursivo(16));
    
}
