//
//  main.c
//  projetos aula
//
//  Created by Matheus Lima on 14/07/22.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float n1, n2, n3, n4, n5;
    float maior = 0, menor = 11;
    float soma = 0, media = 0;
    
    printf("Digite as notas: ");
    scanf("%f %f %f %f %f", &n1, &n2, &n3, &n4, &n5);
    
    printf("%.1f %.1f %.1f %.1f %.1f\n", n1, n2, n3, n4, n5);
    
    // teste do maior
    if (n1 > maior){
        maior = n1;
    }
    if (n2 > maior){
        maior = n2;
    }
    if (n3 > maior){
        maior = n3;
    }
    if (n4 > maior){
        maior = n4;
    }
    if (n5 > maior){
        maior = n5;
    }
    
    // teste do menor
    if (n1 < menor){
        menor = n1;
    }
    if (n2 < menor){
        menor = n2;
    }
    if (n3 < menor){
        menor = n3;
    }
    if (n4 < menor){
        menor = n4;
    }
    if (n5 < menor){
        menor = n5;
    }
    
    // remover o maior e o menor e fazer a média
    soma = n1 + n2 + n3 + n4 + n5 - menor - maior;
    
    media = soma / 3;
    
    printf("%f %f\n", maior, menor);
    
    printf("%.1f\n", media);
    
    return 0;
}
