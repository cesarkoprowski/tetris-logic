#include <stdio.h>

#define ALTURA_TABULEIRO 10
#define LARGURA_TABULEIRO 10

void atualiza_posicao(int *l, int *a, int *x, int desl, int rot) {
  int aux;
  // Rotaciona o bloco
  if (rot == 1) {
    aux = *l;
    *l = *a;
    *a = aux;
  }
  // Desloca o bloco
  *x += desl;
  if (desl > 0 && (*x + *l) > LARGURA_TABULEIRO - 1) {
    *x = LARGURA_TABULEIRO - *l;
  } else if (desl < 0 && *x < 0) {
    *x = 0;
  }
}

int encontra_y(int mat[ALTURA_TABULEIRO][LARGURA_TABULEIRO], int l, int x) {
  int y;                     // incializa a variavel y
  for (y = 9; y >= 0; y--) { // loop verifica da primeira linha até a última
    int liberado = 1;        // liberado inicializa verdadeiro
    for (int j = 0; j < l; j++) {
      if (mat[y][x + j] == 1) {
        liberado = 0; // caso na respectiva linha (com base na largura do bloco) contenha algo, liberado é falso
        break;
      }
    }
    if (!liberado) {
      return y + 1; // se liberado for falso, retorna a linha + 1
    }
  }
  return 0;
}

int posicao_final_valida(int a, int y) {
  // verifica se a posicao final é valida pela soma da altura do bloco (a) com a
  // altura do tabuleiro (b)
  if ((a + y) <= ALTURA_TABULEIRO) {
    return 1; // posicao final valida, retorna verdadeiro
  }
  return 0; // posicao final invalida, retorna falso
}

void posiciona_bloco(int mat[ALTURA_TABULEIRO][LARGURA_TABULEIRO], int l, int a,
                     int x, int y) {
  int i, j;
  // posiciona o bloco na matriz
  for (i = 0; i < a; i++) {
    for (j = 0; j < l; j++) {
      mat[y + i][x + j] = 1;
    }
  }
}

int atualiza_matriz(int mat[ALTURA_TABULEIRO][LARGURA_TABULEIRO]) {
  int p = 0;
  int i = 0;
  int j = 0;
  int count1 = 0;
  int count2 = 0;
  int isLine = 0;

  // verifica se tem linha completa
  for (i = 0; i < ALTURA_TABULEIRO; i++) {
    for (j = 0; j < LARGURA_TABULEIRO; j++) {
      if (1 == mat[i][j]) {
        isLine = 1;
      } else {
        isLine = 0;
        break;
      }
    }

    // caso a linha esteja totalmente completa, a linha é removida e os blocos acima são deslocados para abaixo
    if (LARGURA_TABULEIRO == j && isLine) {
      for (count1 = i; count1 < ALTURA_TABULEIRO - 1; count1++) {
        for (count2 = 0; count2 < LARGURA_TABULEIRO; count2++) {
          mat[count1][count2] = mat[count1 + 1][count2];
          mat[count1 + 1][count2] = 0;
        }
      }
      i--;
      p++;
    }
  }
  return p;
}
