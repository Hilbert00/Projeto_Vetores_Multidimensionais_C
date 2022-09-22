#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MODELOS 4
#define MEDIDAS 3

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;
    int j;
    int flagRun = 1;
    int flagMedidas = 1;
    int modelo;

    float maiorMedida;
    float menorMedida;

    char option;
    char optionMedida;

    float catalogo[MODELOS][MEDIDAS];
    for(i=0; i<MODELOS; i++){
        for(j=0; j<MEDIDAS; j++)
            catalogo[i][j] = 0.0;
    }


    while(flagRun){
        system("cls");
        printf("*=================================================*\n");
        printf("*                      OPÇÕES                     *\n");
        printf("* [A]: Adicionar medidas para todos os modelos    *\n");
        printf("* [B]: Modificar medidas de um modelo             *\n");
        printf("* [C]: Consultar uma medida para todos os modelos *\n");
        printf("* [D]: Consultar um modelo                        *\n");
        printf("* [E]: Mostrar tudo                               *\n");
        printf("* [F]: Sair                                       *\n");
        printf("*=================================================*\n");

        printf("\nDigite a opção desejada: ");
        fflush(stdin);
        scanf("%c", &option);

        switch(option){
            case 'a':
            case 'A':   printf("\n\n");
                        for(i=0; i<MODELOS; i++){
                            for(j=0; j<MEDIDAS; j++){
                                if(i==0)
                                    printf("Para o primeiro modelo, digite ");
                                else if(i==1)
                                    printf("Para o segundo modelo, digite ");
                                else if(i==2)
                                    printf("Para o terceiro modelo, digite ");
                                else
                                    printf("Para o quarto modelo, digite ");

                                if(j==0)
                                    printf("a altura (em cm): ");
                                else if(j==1)
                                    printf("a largura (em cm): ");
                                else
                                    printf("o comprimento (em cm): ");

                                fflush(stdin);
                                scanf("%f", &catalogo[i][j]);
                            }
                        }
                        break;
            case 'b':
            case 'B':   printf("\n\n");
                        do {
                            printf("Digite o modelo que deseja alterar: ");
                            fflush(stdin);
                            scanf("%d", &modelo);
                            system("cls");
                        } while(modelo<0||modelo>=MODELOS);


                        for(i=0; i<MEDIDAS; i++){
                            printf("Para este modelo, digite ");

                            if(i==0)
                                printf("a altura (em cm): ");
                            else if(i==1)
                                printf("a largura (em cm): ");
                            else
                                printf("o comprimento (em cm): ");

                            fflush(stdin);
                            scanf("%f", &catalogo[modelo][i]);
                            system("cls");
                        }
                        break;
            case 'c':
            case 'C':   printf("\n\n");
                        flagMedidas = 1;
                        do {
                            printf("*=============================*\n");
                            printf("* QUAL MEDIDA QUER CONSULTAR? *\n");
                            printf("* [A]: Altura                 *\n");
                            printf("* [L]: Largura                *\n");
                            printf("* [C]: Comprimento            *\n");
                            printf("*=============================*\n");

                            printf("\nDigite sua opção: ");
                            fflush(stdin);
                            scanf("%c", &optionMedida);
                            system("cls");

                            switch(optionMedida){
                                case 'a':
                                case 'A':   for(i=0; i<MODELOS; i++){
                                                printf("MODELO %d: %.2f cm\n", i, catalogo[i][0]);
                                                if(i==0){
                                                    maiorMedida = catalogo[i][0];
                                                    menorMedida = catalogo[i][0];
                                                }

                                                else {
                                                    if (catalogo[i][0] > maiorMedida)
                                                        maiorMedida = catalogo[i][0];
                                                    else if (catalogo[i][0] < menorMedida)
                                                        menorMedida = catalogo[i][0];
                                                }
                                            }
                                            printf("\n\nMAIOR MEDIDA: %.2f cm\n", maiorMedida);
                                            printf("MENOR MEDIDA: %.2f cm\n\n", menorMedida);
                                            flagMedidas = 0;
                                            system("PAUSE");
                                            break;
                                case 'l':
                                case 'L':   for(i=0; i<MODELOS; i++){
                                                printf("MODELO %d: %.2f cm\n", i, catalogo[i][1]);
                                                if(i==0){
                                                    maiorMedida = catalogo[i][1];
                                                    menorMedida = catalogo[i][1];
                                                }

                                                else {
                                                    if (catalogo[i][1] > maiorMedida)
                                                        maiorMedida = catalogo[i][1];
                                                    else if (catalogo[i][1] < menorMedida)
                                                        menorMedida = catalogo[i][1];
                                                }
                                            }
                                            printf("\n\nMAIOR MEDIDA: %.2f cm\n", maiorMedida);
                                            printf("MENOR MEDIDA: %.2f cm\n\n", menorMedida);
                                            flagMedidas = 0;
                                            system("PAUSE");
                                            break;
                                case 'c':
                                case 'C':   for(i=0; i<MODELOS; i++){
                                                printf("MODELO %d: %.2f cm\n", i, catalogo[i][2]);
                                                if(i==0){
                                                    maiorMedida = catalogo[i][2];
                                                    menorMedida = catalogo[i][2];
                                                }

                                                else {
                                                    if (catalogo[i][2] > maiorMedida)
                                                        maiorMedida = catalogo[i][2];
                                                    else if (catalogo[i][2] < menorMedida)
                                                        menorMedida = catalogo[i][2];
                                                }
                                            }
                                            printf("\n\nMAIOR MEDIDA: %.2f cm\n", maiorMedida);
                                            printf("MENOR MEDIDA: %.2f cm\n\n", menorMedida);
                                            flagMedidas = 0;
                                            system("PAUSE");
                                            break;
                                default:    printf("\n\n");
                                            printf("INFORME UMA OPÇÃO VÁLIDA!\n");
                                            system("PAUSE");
                                            break;
                            }
                        } while(flagMedidas);
                        break;
            case 'd':
            case 'D':   printf("\n\n");
                        do {
                            printf("Digite o modelo que deseja consultar: ");
                            fflush(stdin);
                            scanf("%d", &modelo);
                            system("cls");
                        } while(modelo<0||modelo>=MODELOS);

                        printf("MODELO\tALTURA\tLARGURA\tCOMPRIMENTO\n");
                        printf("%d\t", modelo);
                        for(i=0; i<MEDIDAS; i++)
                            printf("%.2f cm\t", catalogo[modelo][i]);
                        printf("\n\n");
                        system("PAUSE");
                        break;
            case 'e':
            case 'E':   printf("\n\n");
                        printf("MODELO\tALTURA\t\tLARGURA\t\tCOMPRIMENTO\n");
                        for(i=0; i<MODELOS; i++){
                            printf("%d\t", i);
                            for(j=0; j<MEDIDAS; j++)
                                printf("%.2f cm\t\t", catalogo[i][j]);
                            printf("\n");
                        }
                        printf("\n");
                        system("PAUSE");
                        break;
            case 'f':
            case 'F':   printf("\n\n");
                        printf("Volte sempre!\n");
                        flagRun = 0;
                        break;
            default:    printf("\n\n");
                        printf("INFORME UMA OPÇÃO VÁLIDA!\n");
                        system("PAUSE");
                        break;
        }
    }

    return 0;
}
