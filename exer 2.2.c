#include <stdio.h>


 int main(){

    float  vet[5], media;
    int i, cod;


    for ( i = 0; i < 5; i ++){

        scanf("%f", &vet[i]);

    }

    for ( i = 0; i < 5; i ++){
        media = (media + vet[i]) / 5;
    }
    while( cod != 0 ){

        printf("Informe um codigo\n 1º para mostrar o vetor na ordem direta \n 2º p/ mostrar o vetor na ordem inversa \n 3º p/ apresentar a media de todos os valores \n 0º para quebrar o looping. ");
        printf("\n");
        scanf("%d", &cod);
        if( cod >= 4 )
        {
            printf("Codigo invalido.");
            cod = 0;
        }
        else if( cod <= -1){
            printf("Codigo invalido.");
            cod = 0;
        }
        switch (cod)
        {
        case 1:
                for ( i = 0; i < 5; i ++){
                    printf("%.0f", vet[i]);
                }
        break;

        case 2:
            for ( i = 4; i >= 0; i --){
                    printf("%.0f", vet[i]);
                }
            break;
        case 3:
            printf("media: %.0f", media);


        }
        printf("\n");
    }



    return 0;

 }
