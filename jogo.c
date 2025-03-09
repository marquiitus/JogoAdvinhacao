//importando bibliotecas
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//protótipos das funções
void bemvindo();
void exibirMensagemErro();
void exibirMensagemAcerto(int tentativas, float pontos);


int main() {

  bemvindo();

  //declaração de variáveis
  int segundos = time(0);
  srand(segundos);

  int numeroGrande = rand();

  int chute, tentativas = 1, numeroTentativas = 5; 
  int numeroSecreto = numeroGrande%100, acertou = 0, nivel;
  double pontosPerdidos, pontos = 1000;

  //escolhendo a dificuldade
  printf("Qual o nivel de dificuldade?\n");
  printf("(1)Facil (2)Medio (3)Dificil\n\n");
  printf("Escolha: ");
  scanf("%d", &nivel);

  //alterando 'numeroTentativas' a partir da dificuldade
  switch (nivel) {

    case 1:
      numeroTentativas = 20;
      break;
    case 2:
      numeroTentativas = 15;
      break;
      default :
      numeroTentativas = 6;
      break;
  }

  //parte principal do jogo
  for (int i = 1; i <= numeroTentativas; i++) {

    printf("Tentativa %d\n\n", tentativas);
    printf("Qual e o seu chute?\n");
    scanf("%d", &chute);
    
    printf("Seu chute foi %d\n", chute);

    if (chute < 0) {

      printf("Voce nao pode chutar numeros negativos!\n");
      continue;
    }

    int maior = chute > numeroSecreto;
    acertou = (chute == numeroSecreto);

    if (acertou) {

      break;
    } else if (maior) {

      printf("Seu chute foi maior que o numero secreto\n");
    } else {

      printf("Seu chute foi menor que o numero secreto\n");
    }
    tentativas++;

    pontosPerdidos = abs(chute - numeroSecreto) / (double)2; // 2.0;

    pontos -= pontosPerdidos;
  }

  printf("Fim de jogo!\n");

  if (acertou) {

    exibirMensagemAcerto(tentativas, pontos);
  } else {

    exibirMensagemErro();
  }
  
  return 0;
}

//Funções
void bemvindo() {
      
  printf("\n\n");
  printf("      P  /_\\  P                              \n");
  printf("     /_\\_|_|_/_\\                            \n");
  printf(" n_n | ||. .|| | n_n         Bem vindo ao     \n");
  printf(" |_|_|nnnn nnnn|_|_|     Jogo de Adivinhacao! \n");
  printf("|" "  |  |_|  |"  " |                         \n");
  printf("|_____| ' _ ' |_____|                         \n");
  printf("      \\__|_|__/                              \n");
  printf("\n\n");
}

void exibirMensagemAcerto(int tentativas, float pontos) {

  printf("\n\n");
  printf("                  OOOOOOOOOOO                 \n");
  printf("              OOOOOOOOOOOOOOOOOOO             \n");
  printf("            OOOOOO  OOOOOOOOO  OOOOOO         \n");
  printf("          OOOOOO      OOOOO      OOOOOO       \n"); 
  printf("        OOOOOOOO  #   OOOOO  #   OOOOOOOO     \n"); 
  printf("      OOOOOOOOOO    OOOOOOO    OOOOOOOOOO     \n");
  printf("      OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO   \n");
  printf("      OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO   \n");
  printf("      OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
  printf("      OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO     \n");
  printf("        OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO     \n");
  printf("          OOOOO   OOOOOOOOOOOOOOO   OOOO      \n");
  printf("            OOOOOO   OOOOOOOOO   OOOOOO       \n");
  printf("              OOOOOO         OOOOOO           \n");
  printf("                  OOOOOOOOOOOO                \n");
  printf("\n\n");

  printf("Voce ganhou!\n");
  printf("Voce acertou em %d tentativas!\n", tentativas);
  printf("Total de pontos: %.2f\n", pontos);
}
      
void exibirMensagemErro() {
      
  printf("\n\n");
  printf("   \\|/ ____ \\|/  \n");     
  printf("    @~/ ,. \\~@    \n");      
  printf("   /_( \\__/ )_\\  \n");   
  printf("      \\__U_/      \n");
  printf("\n\n");
      
  printf("Voce perdeu! Tente de novo!\n");
}