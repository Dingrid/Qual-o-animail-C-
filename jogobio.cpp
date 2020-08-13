#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>
#include<math.h>
#include<locale>

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	system("COLOR 17");
	
int mamifero,quadrupede,carnivoro,herbivoro,bipede,aereo,achou, R;

do {
	
puts("JOGO DE BIOLOGIA");
puts("Feito por: Ingrid e Matheus Lucca");
puts("");
puts("Pensem em um animal que está na lista abaixo:");
puts("1- Leão                8- Pinguim ");
puts("2- Cavalo              9- Pato      ");
puts("3- Homem               10- Águia     ");
puts("4- Macaco              11- Tartaruga  ");
puts("5- Morcego             12- Crocodilo ");
puts("6- Baleia              13- Cobra      ");
puts("7- Avestruz                       ");
puts("");
puts("");
puts("O animal em que você pensou é:");
puts("Mamífero?");
puts("1- Sim ");    
puts("2- Não");
scanf("%d", &mamifero);
puts("");
puts("Quadrúpede?");
puts("1- Sim ");    
puts("2- Não");
scanf("%d", &quadrupede);
puts("");
puts("Carnívoro?");
puts("1- Sim ");    
puts("2- Não");
scanf("%d", &carnivoro);
puts("");
puts("Herbívoro?");
puts("1- Sim ");    
puts("2- Não");
scanf("%d", &herbivoro);
puts("");
puts("Bípede?");
puts("1- Sim ");    
puts("2- Não");
scanf("%d", &bipede);
puts("");
puts("Aéreo?");
puts("1- Sim ");    
puts("2- Não");
scanf("%d", &aereo);

//LEÃO
if (mamifero==1 & quadrupede==1 & carnivoro==1 & herbivoro==2 & bipede==2 & aereo==2)
{
puts("O animal em que você pensou foi: LEÃO");
achou=1;
}

//CAVALO
if (mamifero==1 & quadrupede==1 & carnivoro==2 & herbivoro==1 & bipede==2 & aereo==2)
{
	achou=1;
puts("O animal em que você pensou foi: CAVALO");
}


//HOMEM
if (mamifero==1 & quadrupede==2 & carnivoro==1 & herbivoro==1 & bipede==1 & aereo==2)
{
	achou=1;
puts("O animal em que você pensou foi: HOMEM");
}


//MACACO
if (mamifero==1 & quadrupede==1 & carnivoro==1 & herbivoro==1 & bipede==2 & aereo==2)
{
	achou=1;
puts("O animal em que você pensou foi: MACACO");
}


//MORCEGO
if (mamifero==1 & quadrupede==2 & carnivoro==1 & herbivoro==1 & bipede==1 & aereo==1)
{
	achou=1;
puts("O animal em que você pensou foi: MORCEGO");
}


//BALEIA
if (mamifero==1 & quadrupede==2 & carnivoro==1 & herbivoro==2 & bipede==2 & aereo==2)
{
	achou=1;
puts("O animal em que você pensou foi: BALEIA");
}


//AVESTRUZ
if (mamifero==2 & quadrupede==2 & carnivoro==1 & herbivoro==1 & bipede==1 & aereo==2)
{
	achou=1;
puts("O animal em que você pensou foi: AVESTRUZ");
}


//PINGUIM
if (mamifero==2 & quadrupede==2 & carnivoro==1 & herbivoro==2 & bipede==1 & aereo==2)
{
	achou=1;
puts("O animal em que você pensou foi: PINGUIM");
}


//PATO
if (mamifero==2 & quadrupede==2 & carnivoro==1 & herbivoro==1 & bipede==1 & aereo==1)
{
	achou=1;
puts("O animal em que você pensou foi: PATO");
}


//ÁGUIA
if (mamifero==2 & quadrupede==2 & carnivoro==1 & herbivoro==2 & bipede==1 & aereo==1)
{
	achou=1;
puts("O animal em que você pensou foi: ÁGUIA");
}


//TARTARUGA
if (mamifero==2 & quadrupede==1 & carnivoro==2 & herbivoro==1 & bipede==2 & aereo==2)
{
	achou=1;
puts("O animal em que você pensou foi: TARTARUGA");
}


//CROCODILO
if (mamifero==2 & quadrupede==1 & carnivoro==1 & herbivoro==2 & bipede==2 & aereo==2)
{
	achou=1;
puts("O animal em que você pensou foi: CROCODILO");
}


//COBRA
if (mamifero==2 & quadrupede==2 & carnivoro==1 & herbivoro==2 & bipede==2 & aereo==2)
{
	achou=1;
puts("O animal em que você pensou foi: COBRA");
}

//NÃO ACHOU
if (achou!=1)
{
	puts("Desculpe, mas não conseguimos encontrar o seu animal, tente novamente.");
}

puts("Deseja jogar novamente?");
puts("1- Sim");
puts("2- Não");
scanf("%d", &R);

} while(R==1);


system("PAUSE");
return 0;

}
