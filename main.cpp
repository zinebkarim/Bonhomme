#include<graphics.h>  
#include<dos.h>  
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include "fenetre.h"
#include "figure.h"
#include "Bonhomme.h"
#include <iostream>
using namespace std;


int main(void){
	
	
	
 cout<<"Entrez la position initiale de votre bonhomme:";// L'utilisateur est ammené à saisir les coordonnées du point de départ
  int x,y;
  cin>>x;
  cin>>y;

  
	
   fenetre *f;
   
   
   
  figure  tete,corps,brasd,brasg,jg,jd;// déclaration des figures pour construire le bonhomme

  f->ouvrir_graphique();// Construction du graphe pour dessiner le bonhomme
  
  
// Création des éléments du tableau de figures
figure fig[6];
fig[0]=corps;
fig[1]=tete;
fig[2]=jg;
fig[3]=jd;
fig[4]=brasg;
fig[5]=brasd;
 
  

 

Bonhomme bn(fig,6,x,y);// Création du bonhomme à partir des figures du tableau

bn.dessiner(f);// Dessiner le bonhomme 

cout<<"Entrez la trajectoire voulue:"<<endl;// L'utilisateur est ammené à choisir une parmi les trajectoires proposées
cout<<"1.Horizontale"<<endl;
cout<<"2.Triangulaire"<<endl;
cout<<"3.Circulaire"<<endl;



int T;


cin>>T;






if(T==1){
	
bn.deplacerBonhomme(f,0,0,1);	//Le bonhomme se déplace horizontalement
	
}
if(T==2){

bn.deplacertriangle(f); // Le bonhomme se déplace suivant une trajectoire triangulaire

}

if(T==3){

int xCercle=400;
int yCercle=300;

bn.deplacerC(f,xCercle,yCercle); // Le bonhomme se déplace suivant une trajectoire circulaire

}



    getch();

   closegraph();
	   
  return 0;
  
}


