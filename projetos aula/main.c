//
//  main.c
//  projetos aula
//
//  Created by Matheus Lima on 14/07/22.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int r;
    int r_0, r_1, r_2;
    int voto = 0;
    
    printf("Digite um numero inteiro de 0 a 7: ");
    scanf("%d", &r);
    
    r_0 = r % 2;
    r = r/2;
    r_1 = r % 2;
    r = r/2;
    r_2 = r % 2;

    printf("%d %d %d\n", r_2, r_1, r_0);
    
    switch (r_0) {
        case 0: voto--;
            break;
        case 1: voto++;
            break;
    }
        
    switch (r_1) {
        case 0: voto--;
            break;
        case 1: voto++;
            break;
    }
    
    switch (r_2) {
        case 0: voto--;
            break;
        case 1: voto++;
            break;
    }
    
    if (voto > 0) {
        printf("1\n");
    } else {
        printf("0\n");
    }
    
    return 0;
}
