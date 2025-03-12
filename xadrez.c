#include <stdio.h>

int main(){

    // Aplicação de variáveis para nomes das peças
    
    int torre;
    int bispo;
    int rainha;
    int cavalo;

    // Início do xadrex

        printf("Iniciando xadrez novato...\n");

        printf("\n=== Xadrez Novato ===\n");

            // Movimento da torre

                printf("\n- Movimento da torre -\n");

                    for ( torre = 0; torre <= 5; torre++)
                    {
                        printf("Direita\n");
                    }

            // Movimento do bispo

                printf("\n- Movimento do bispo -\n");

                    for (bispo = 0; bispo <= 5; bispo++)
                    {
                        printf("Cima, Direita\n");
                    }
            // Movimento da rainha

                printf("\n- Movimento da rainha -\n");

                    for (rainha = 0; rainha <= 8; rainha++)
                    {
                        printf("Esquerda\n");
                    }

            // Movimento do cavalo

                printf("\n- Movimento do cavalo -\n");

                    for (cavalo = 0; cavalo <= 1; cavalo++)
                    {
                    
                        do
                        {
                            printf("Baixo\n");

                        } while (cavalo > 1);
                    
                    }
                    
                    for (cavalo = 2; cavalo <= 2; cavalo++)
                    {

                        printf("Esquerda\n");

                    }
                    
        // Fim do xadrez
        
            printf("\n=== Fim do Xadrez ===\n");
            
    return 0;
}
//*Torre: Move-se em linha reta horizontalmente ou verticalmente. Seu programa deverá simular o movimento da Torre cinco casas para a direita. 
//*Bispo: Move-se na diagonal. Seu programa deverá simular o movimento do Bispo cinco casas na diagonal para cima e à direita. Para representar a diagonal, você imprimirá a combinação de duas direções a cada casa (ex: "Cima, Direita").
//*Rainha: Move-se em todas as direções. Seu programa deverá simular o movimento da Rainha oito casas para a esquerda.
