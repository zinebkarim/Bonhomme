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
	
	
	
 cout<<"Entrez la position initiale de votre bonhomme:";// L'utilisateur est ammen� � saisir les coordonn�es du point de d�part
  int x,y;
  cin>>x;
  cin>>y;

  
	
   fenetre *f;
   
   
   
  figure  tete,corps,brasd,brasg,jg,jd;// d�claration des figures pour construire le bonhomme

  f->ouvrir_graphique();// Construction du graphe pour dessiner le bonhomme
  
  
// Cr�ation des �l�ments du tableau de figures
figure fig[6];
fig[0]=corps;
fig[1]=tete;
fig[2]=jg;
fig[3]=jd;
fig[4]=brasg;
fig[5]=brasd;
 
  

 

Bonhomme bn(fig,6,x,y);// Cr�ation du bonhomme � partir des figures du tableau

bn.dessiner(f);// Dessiner le bonhomme 

cout<<"Entrez la trajectoire voulue:"<<endl;// L'utilisateur est ammen� � choisir une parmi les trajectoires propos�es
cout<<"1.Horizontale"<<endl;
cout<<"2.Triangulaire"<<endl;
cout<<"3.Circulaire"<<endl;



int T;


cin>>T;






if(T==1){
	
bn.deplacerBonhomme(f,0,0,1);	//Le bonhomme se d�place horizontalement
	
}
if(T==2){

bn.deplacertriangle(f); // Le bonhomme se d�place suivant une trajectoire triangulaire

}

if(T==3){

int xCercle=400;
int yCercle=300;

bn.deplacerC(f,xCercle,yCercle); // Le bonhomme se d�place suivant une trajectoire circulaire

}



    getch();

   closegraph();
	   
  return 0;
  
}


