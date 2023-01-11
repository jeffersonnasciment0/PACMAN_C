struct mapa{
    char** matriz;
    int linhas;
    int colunas;
};

typedef struct mapa MAPA;

void libera_mapa(MAPA* m);
void le_mapa(MAPA* m);
void imprime_mapa(MAPA* m);
void aloca_mapa(MAPA* m);

