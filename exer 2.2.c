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

        printf("Informe um codigo\n 1� para mostrar o vetor na ordem direta \n 2� p/ mostrar o vetor na ordem inversa \n 3� p/ apresentar a media de todos os valores \n 0� para quebrar o looping. ");
        printf("\n");
        scanf("%d", &cod);
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
