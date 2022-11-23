#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand (time(NULL));
  int menu, pedra, papel, tesoura, cpu;
  char S, N;
  
  do{
    
   printf("Escolha o que voce quer\n");
   printf( " 0 - encerrar\n 1 - pedra \n  2 - papel\n 3 - tesoura\n 4 - lagarto\n 5 - spock\n ");
   scanf("%d", &menu);

    switch(menu){

    case(1): //usuario escolheu pedra
    cpu = rand()%6+1;
    if(cpu == 1) {
      printf("Computador escolheu pedra, empate!\n");
    }
    else if(cpu == 2) {
      printf("Computador escolheu papel, perdeu\n");
    }
     else if(cpu == 3) {
      printf("Computador escolheu tesoura, você Ganhou\n");
    }
      else if(cpu == 4) {
        printf("Computador escolheu lagarto, você ganhou\n"); 
      }
      else if(cpu == 5) {
        printf("Computador escolheu spock, você foi vaporizado, perdeu :( \n");
      }
    break;
      
    case(2): // usuario escolheu papel
      cpu = rand()%6+1;
        if(cpu == 1 ){
         printf("Computador escolheu pedra, você perdeu\n");
        }
        else if(cpu == 2) {
          printf("Computador escolheu papel, empatou\n");
        }
        else if(cpu == 3) {
          printf("Computador escolheu tesoura, você ganhou!\n");
          }
        else if(cpu == 4) {
          printf("Computador escolheu lagarto, você perdeu\n");
          }
        else if(cpu == 5){
          printf("Computador escolheu spock, você perdeu\n");
        }
    
      break;

      case(3): // usuario escolheu tesoura
      cpu = rand()%6+1;
      if(cpu == 1) {
        printf("Computador escolheu pedra, você perdeu!\n");
      }
      else if(cpu == 2) {
        printf("Computador escolheu papel, você ganhou\n");
      }
      else if(cpu == 3) {
        printf("Computador escolheu tesoura, empate\n");
      }
      else if(cpu == 4) {
        printf("Computador escolheu lagarto, você ganhou!\n");
      }
      else if(cpu == 5) {
        printf("Computador escolheu spock, você perdeu!\n");
      }
      }

    printf("Deseja jogar novamente?\n");
    printf("S\n");
    scanf("%c", &S);

    printf("N\n");
    scanf("%c", &N);

    if(N=='S' || N=='s'){  
    printf("Escolha o que voce quer\n");
    printf( " 0 - encerrar\n 1 - pedra \n  2 - papel\n 3 - tesoura\n 4 - lagarto\n 5 - spock\n ");
   scanf("%d", &menu);
    }
    else{
      printf("Tchau\n");
      menu = 0;
    }

  }while(menu!=0);

  }  
 
