/* Laboratorio 2 - Tetris
 * Nome:
 * RA:
 * Nome:
 * RA:
 */

#include <stdio.h>

#define ALTURA_TABULEIRO 10
#define LARGURA_TABULEIRO 10

/* Funcao: atualiza_posicao
 *
 * Parametros:
 *     *l: apontador para a largura do bloco que ira cair
 *     *a: apontador para a altura do bloco que ira cair
 *     *x: apontador para a posicao horizontal inicial do bloco que ira cair
 *   desl: deslocamento horizontal a ser aplicado ao bloco (positivo para direita, negativo para a esquerda)
 *    rot: 1 se deve rotacionar o bloco, 0 caso contrario
 *
 * Retorno:
 *   NULL
 */
void atualiza_posicao(int *l, int *a, int *x, int desl, int rot) {
    /* Implementar a funcao */
}

/* Funcao: encontra_y
 *
 * Parametros:
 *    mat: matriz representando o tabuleiro
 *      l: largura do bloco que ira cair
 *      x: posicao horizontal do bloco que ira cair
 *
 * Retorno:
 *   altura final y do canto inferior esquerdo do bloco apos
 *   este descer o maximo possivel
 */
int encontra_y(int mat[ALTURA_TABULEIRO][LARGURA_TABULEIRO], int l, int x) {
    /* Implementar a funcao e trocar o valor de retorno */
    return 0;
}

/* Funcoes: posicao_final_valida
 *
 * Parametros:
 *      a: altura do bloco que caiu
 *      y: altura final do bloco que caiu
 *
 * Retorno:
 *   1 se o bloco naquela posicao estiver contido dentro do tabuleiro, ou 0 caso contrario.
 */
int posicao_final_valida(int a,  int y) {
    /* Implementar a funcao e trocar o valor de retorno */
    return 0;
}

/* Funcoes: posiciona_bloco
 *
 * Parametros:
 *    mat: matriz do tabuleiro
 *      l: largura do novo bloco
 *      a: altura do novo bloco
 *      x: posicao horizontal do novo bloco
 *      y: altura final do novo bloco
 *
 *      Deve preencher com 1s as novas posições ocupadas pelo bloco que caiu
 * Retorno:
 *   NULL
 */
void posiciona_bloco(int mat[ALTURA_TABULEIRO][LARGURA_TABULEIRO], int l, int a, int x, int y) {
    /* Implementar a funcao */
}

/* Funcoes: atualiza_matriz
 *
 * Parametros:
 *    mat: matriz do tabuleiro
 *
 *         Deve remover as linhas totalmente preenchidas do tabuleiro copiando
 *         linhas posicionadas acima.
 * Retorno:
 *   retorna o numero de linhas totalmente preenchidas que foram removidas apos
 *   a atualizacao do tabuleiro.
 */
int atualiza_matriz(int mat[ALTURA_TABULEIRO][LARGURA_TABULEIRO]) {
    /* Implementar a funcao e trocar o valor de retorno */
    return 0;
}
