#include <stdio.h>

    // Aplicação da recursividade para torre

        void torre_mov(int torre){
            if (torre > 0)
            {
                printf("Direita\n");
                torre_mov(torre - 1);
            }
        
        }

    // Aplicação da recursividade para bispo
        
        void bispo_mov(int bispo){
            if (bispo > 0)
            {
                printf("Cima, Direita\n");
                bispo_mov(bispo - 1);
            }
            
        }
        
    // Aplicação da recursividade para rainha

        void rainha_mov(int rainha){
            if (rainha > 0)
            {
                printf("Esquerda\n");
                rainha_mov(rainha - 1);
            }
            
        }

    // Aplicação da recursividade para cavalo

        void cavalo_mov(int cavalo){
            if (cavalo > 0)
            {
                printf("Cima\n");
                cavalo_mov(cavalo - 1);
                
            }
            
            if (cavalo == 0)
                {
                    printf("Direita\n");
                    cavalo_mov(cavalo - 1);
                }
        }
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

                    torre_mov(5);

            // Movimento do bispo

                printf("\n- Movimento do bispo -\n");

                    bispo_mov(5);    

            // Movimento da rainha

                printf("\n- Movimento da rainha -\n");

                    rainha_mov(8);

            // Movimento do cavalo

                printf("\n- Movimento do cavalo -\n");

                    cavalo_mov(2);
                    
        // Fim do xadrez
        
            printf("\n=== Fim do Xadrez ===\n");
            
    return 0;
}
//*Torre: Move-se em linha reta horizontalmente ou verticalmente. Seu programa deverá simular o movimento da Torre cinco casas para a direita. 
//*Bispo: Move-se na diagonal. Seu programa deverá simular o movimento do Bispo cinco casas na diagonal para cima e à direita. Para representar a diagonal, você imprimirá a combinação de duas direções a cada casa (ex: "Cima, Direita").
//*Rainha: Move-se em todas as direções. Seu programa deverá simular o movimento da Rainha oito casas para a esquerda.
