// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Constantes
#define MAX_CLIENTES 100
#define MAX_QUARTOS 50
#define MAX_RESERVAS 200

// Estruturas
typedef struct {
    int codigo;
    char nome[50];
    char cpf[15];
    char telefone[15];
    char email[50];
} Cliente;

typedef struct {
    int numero;
    int capacidade;
    float diaria;
    int disponivel;
} Quarto;

typedef struct {
    int codigo;
    Cliente *cliente;
    Quarto *quarto;
    int dias;
    float valor;
    int pago;
} Reserva;

Cliente *clientes[MAX_CLIENTES];
Quarto *quartos[MAX_QUARTOS];
Reserva *reservas[MAX_RESERVAS];

int num_clientes = 0;
int num_quartos = 0;
int num_reservas = 0;

void cadastrar_cliente();
void cadastrar_quarto();
void cadastrar_reserva();
void listar_clientes();
void listar_quartos();
void listar_reservas();
void buscar_cliente();
void buscar_quarto();
void buscar_reserva();
void editar_cliente();
void editar_quarto();
void editar_reserva();
void excluir_cliente();
void excluir_quarto();
void excluir_reserva();
void pagar_reserva();
void salvar_dados();
void carregar_dados();
void menu();

int main() {
    carregar_dados(); 
    menu(); 
    return 0;
}
