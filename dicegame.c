#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  srand((unsigned int)time(NULL));
  int dice1 = 0, dice2 = 0;
  char name[10];

  dice1 = rand() % 6 + 1;
  dice2 = rand() % 6 + 1;

  printf("What is your name?\n>");
  scanf("%s",&name);
  printf("Hello, %s!\n",name);

  
  printf("Rolling the dice...\n");
  printf("Die 1: %d\n",dice1);
  printf("Die 2: %d\n",dice2);
  printf("Total value: %d\n",dice1 + dice2);

  return 0;
}
