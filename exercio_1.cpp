#include <stdio.h>
#include <string.h>

int main(){

char plr1[20] = "0";
char plr2[20] = "teste";
fflush(stdin);

printf("Digite uma palavra: ");
gets(plr1);


if (strcmp (plr1, plr2) == 0){
	printf("\nPalavra:OK");
}
else{
	printf("\nPalavra:KO");
}
return 0;
}

