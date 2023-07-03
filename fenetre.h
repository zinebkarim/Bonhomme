#include<graphics.h>




class fenetre {
	

public :
 fenetre (){ 
}

//Les méthodes de la classe fenetre--------------------------------------------------------------------------------------------------------------------------------
void  clear(void);//qui efface 
void ouvrir_graphique (void); //La fonction initialise le système graphique en ouvrant une fenêtre graphique de la taille spécifiée.
void fermer_graphique (void) ;//La fonction ferme la fenêtre graphique                               
int get_couleur_fond (void); //La fonction définit la couleur du fond
int get_x_max (void); //Renvoie le X max droit de la fenêtre
int get_y_max (void); //Renvoie le Y du coin supérieur gauche
int get_couleur (int x,int y) ;  // La fonction définit la couleur du pixel de coordonnées (x, y)
void allume (int x, int y, int c); // allume le  pixel de coordonnées (x, y)de couleur C

};









//Création d'une fenetre graphique-------------------------------------------------------------------------------------------------------------------------------------
void fenetre::ouvrir_graphique()
 {
 	int gd = DETECT, gm;

   
     initwindow(1000, 800);
 }
 
 
 //--------------------------------------------------------------------------------------------------------------------------------------------------------------------
void  fenetre:: fermer_graphique()
 {
 		closegraph(); 
 }
 
 
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------
int fenetre::get_couleur_fond()
 {
 return 0;
 }
 
 
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
int fenetre::get_x_max()
 {
 return getmaxx();
 }
 
 
 int  fenetre::get_y_max()
 {
 return getmaxy();
 }
 
 //-----------------------------------------------------------------------------------------------------------------------------------------------------------------
int  fenetre::get_couleur(int x,int y)
 {
 return 0;
 }
 
 // Allumer en vert le pixel de coordonnées(x,y)---------------------------------------------------------------------------------------------------------------------
 void fenetre ::allume (int x, int y, int c)
 {
 	
 putpixel(x, y, LIGHTGREEN); 
}



//Supprimer la figure tracée-----------------------------------------------------------------------------------------------------------------------------------------
 void fenetre ::clear(){
	cleardevice();
}



