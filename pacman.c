#include <stdio.h>
#include <stdlib.h>
#include "pacman.h"
#include "mapa.h"

MAPA m;

int acabou(){
    return 0;
}

void move(char comando){
    int x;
    int y;

    // acha a posição do pacman
    for (int i = 0; i < m.linhas; i++){
        for (int j = 0; j < m.colunas; j++){
            if(m.matriz[i][j]=='@'){
                x = i;
                y = j;
                break;
            }
        }
    }


    switch(comando){
    case 'a':
        m.matriz[x][y-1] = '@';
        break;
    case 'w':
        m.matriz[x-1][y] = '@';
        break;
    case 's':
        m.matriz[x+1][y] = '@';
        break;
    case 'd':
        m.matriz[x][y+1] = '@';
        break;
    }

    //preenche a posisão anterior para não ter dois pacmans
    m.matriz[x][y] = '.';
}

int main(){
    

    le_mapa(&m);

    do
    {

        imprime_mapa(&m);

        char comando;
        scanf(" %c", &comando);
        move(comando);
        
    } while (!acabou());
    

    libera_mapa(&m);
}
