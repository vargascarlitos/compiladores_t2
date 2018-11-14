
//librerias
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

//constantes
#define TAMBUFF 5
#define TAMCMLEX 50
#define TAMLEX 50
#define TAMHASH 101

//tipos de datos estructurados

typedef struct entrada{
    char compLex[TAMCMLEX];    //definir los campos de 1 entrada de la tabla de simbolos
    char lexema[TAMLEX];	
    struct entrada *tipoDato;  // null puede representar variable no declarada	
} entrada;

typedef struct {
    char compLex[50];
    entrada *pe;
} token;

//prototipo de funciones
void insertar(entrada e);
entrada* buscar(const char *clave);
void initTabla();
void initTablaSimbolos();
void sigLex();
int linea();
