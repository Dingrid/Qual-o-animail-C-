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
puts("Pensem em um animal que est� na lista abaixo:");
puts("1- Le�o                8- Pinguim ");
puts("2- Cavalo              9- Pato      ");
puts("3- Homem               10- �guia     ");
puts("4- Macaco              11- Tartaruga  ");
puts("5- Morcego             12- Crocodilo ");
puts("6- Baleia              13- Cobra      ");
puts("7- Avestruz                       ");
puts("");
puts("");
puts("O animal em que voc� pensou �:");
puts("Mam�fero?");
puts("1- Sim ");    
puts("2- N�o");
scanf("%d", &mamifero);
puts("");
puts("Quadr�pede?");
puts("1- Sim ");    
puts("2- N�o");
scanf("%d", &quadrupede);
puts("");
puts("Carn�voro?");
puts("1- Sim ");    
puts("2- N�o");
scanf("%d", &carnivoro);
puts("");
puts("Herb�voro?");
puts("1- Sim ");    
puts("2- N�o");
scanf("%d", &herbivoro);
puts("");
puts("B�pede?");
puts("1- Sim ");    
puts("2- N�o");
scanf("%d", &bipede);
puts("");
puts("A�reo?");
puts("1- Sim ");    
puts("2- N�o");
scanf("%d", &aereo);

//LE�O
if (mamifero==1 & quadrupede==1 & carnivoro==1 & herbivoro==2 & bipede==2 & aereo==2)
{
puts("O animal em que voc� pensou foi: LE�O");
achou=1;
}

//CAVALO
if (mamifero==1 & quadrupede==1 & carnivoro==2 & herbivoro==1 & bipede==2 & aereo==2)
{
	achou=1;
puts("O animal em que voc� pensou foi: CAVALO");
}


//HOMEM
if (mamifero==1 & quadrupede==2 & carnivoro==1 & herbivoro==1 & bipede==1 & aereo==2)
{
	achou=1;
puts("O animal em que voc� pensou foi: HOMEM");
}


//MACACO
if (mamifero==1 & quadrupede==1 & carnivoro==1 & herbivoro==1 & bipede==2 & aereo==2)
{
	achou=1;
puts("O animal em que voc� pensou foi: MACACO");
}


//MORCEGO
if (mamifero==1 & quadrupede==2 & carnivoro==1 & herbivoro==1 & bipede==1 & aereo==1)
{
	achou=1;
puts("O animal em que voc� pensou foi: MORCEGO");
}


//BALEIA
if (mamifero==1 & quadrupede==2 & carnivoro==1 & herbivoro==2 & bipede==2 & aereo==2)
{
	achou=1;
puts("O animal em que voc� pensou foi: BALEIA");
}


//AVESTRUZ
if (mamifero==2 & quadrupede==2 & carnivoro==1 & herbivoro==1 & bipede==1 & aereo==2)
{
	achou=1;
puts("O animal em que voc� pensou foi: AVESTRUZ");
}


//PINGUIM
if (mamifero==2 & quadrupede==2 & carnivoro==1 & herbivoro==2 & bipede==1 & aereo==2)
{
	achou=1;
puts("O animal em que voc� pensou foi: PINGUIM");
}


//PATO
if (mamifero==2 & quadrupede==2 & carnivoro==1 & herbivoro==1 & bipede==1 & aereo==1)
{
	achou=1;
puts("O animal em que voc� pensou foi: PATO");
}


//�GUIA
if (mamifero==2 & quadrupede==2 & carnivoro==1 & herbivoro==2 & bipede==1 & aereo==1)
{
	achou=1;
puts("O animal em que voc� pensou foi: �GUIA");
}


//TARTARUGA
if (mamifero==2 & quadrupede==1 & carnivoro==2 & herbivoro==1 & bipede==2 & aereo==2)
{
	achou=1;
puts("O animal em que voc� pensou foi: TARTARUGA");
}


//CROCODILO
if (mamifero==2 & quadrupede==1 & carnivoro==1 & herbivoro==2 & bipede==2 & aereo==2)
{
	achou=1;
puts("O animal em que voc� pensou foi: CROCODILO");
}


//COBRA
if (mamifero==2 & quadrupede==2 & carnivoro==1 & herbivoro==2 & bipede==2 & aereo==2)
{
	achou=1;
puts("O animal em que voc� pensou foi: COBRA");
}

//N�O ACHOU
if (achou!=1)
{
	puts("Desculpe, mas n�o conseguimos encontrar o seu animal, tente novamente.");
}

puts("Deseja jogar novamente?");
puts("1- Sim");
puts("2- N�o");
scanf("%d", &R);

} while(R==1);


system("PAUSE");
return 0;

}
