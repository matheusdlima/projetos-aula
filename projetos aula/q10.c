//
//  q10.c
//  projetos aula
//
//  Created by Matheus Lima on 15/07/22.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float x, y;
    
    scanf("%f %f", &x, &y);
    
    if (x == 0 && y == 0) {
        printf("Origem\n");
    } else if (x == 0 && y != 0){
        printf("Eixo X\n");
    } else if (x != 0 && y == 0){
        printf("Eixo Y\n");
    } else if (x > 0){
        if (y > 0) {
            printf("Quadrante 1\n");
        } else {
            printf("Quadrante 4\n");
        }
    } else if (x < 0){
        if (y > 0) {
            printf("Quadrante 2\n");
        } else {
            printf("Quadrante 3\n");
        }
    }
    
    return 0;
}
