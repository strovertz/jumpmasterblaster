// Necessidades do processo: 
// 1. ID
// 2. Tamanho (Qtd de Tempo que precisa rodar, definido por qntdtempo_emsegundo/tam_timeslice)
// 3. Time stamp pra cada uma das filas, inicialmente guarda o horario qe entrou na fila, quando sair, guarda a diferença de inicio e fim, assim vai ter o tempo total na fila
// 4.  Faz IO? Rand 1/0

typedef struct lista{
	int id;
    int tam;
    int queuetime;
    bool IO;
	struct lista* prox;
}Process;

typedef struct arrive{
	Process* ini;
	Process* fim;
}Arrive;

typedef struct ready{
    Process* ini;
    Process* fim;
}Ready;


Arrive* arrive_cria(void);
Ready* ready_cria(void);
void arrive_insere(void* f, int valor);
int arrive_retira(void* f);
void arrive_imprime(void* f);
int arrive_vazia(void* f);
void arrive_libera(void* f);