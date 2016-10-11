/* ----- Tipos */
// Usuario
typedef struct user {
    int ID;
    char nome[15];
    //lista de amigos
} tUser;

typedef struct celulaUser *pUser;
typedef struct celulaUser {
    tUser usuario;
    pUser prox;
} celUser;

typedef struct userLista {
    pUser primeiro, ultimo;
} lUser;

// Mensagem
typedef struct message {
    int ID, time, likes;
    char content[140];
} tMessage;

typedef struct celulaMessage *pMessage;
typedef struct celulaMessage {
    tMessage mensagem;
    pMessage prox;
} celMessage;

typedef struct messageLista {
    pMessage primeiro, ultimo;
} lMessage;

/* ----- Cabecalhos de Funcoes */
void iniciarAmizade();
void cancelarAmizade();
void postarMensagem();
void curtirMensagem();
void exibirTimeline();
void verAmigos();
