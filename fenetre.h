#include<graphics.h>




class fenetre {
	

public :
 fenetre (){ 
}

//Les m�thodes de la classe fenetre--------------------------------------------------------------------------------------------------------------------------------
void  clear(void);//qui efface 
void ouvrir_graphique (void); //La fonction initialise le syst�me graphique en ouvrant une fen�tre graphique de la taille sp�cifi�e.
void fermer_graphique (void) ;//La fonction ferme la fen�tre graphique                               
int get_couleur_fond (void); //La fonction d�finit la couleur du fond
int get_x_max (void); //Renvoie le X max droit de la fen�tre
int get_y_max (void); //Renvoie le Y du coin sup�rieur gauche
int get_couleur (int x,int y) ;  // La fonction d�finit la couleur du pixel de coordonn�es (x, y)
void allume (int x, int y, int c); // allume le  pixel de coordonn�es (x, y)de couleur C

};









//Cr�ation d'une fenetre graphique-------------------------------------------------------------------------------------------------------------------------------------
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
 
 // Allumer en vert le pixel de coordonn�es(x,y)---------------------------------------------------------------------------------------------------------------------
 void fenetre ::allume (int x, int y, int c)
 {
 	
 putpixel(x, y, LIGHTGREEN); 
}



//Supprimer la figure trac�e-----------------------------------------------------------------------------------------------------------------------------------------
 void fenetre ::clear(){
	cleardevice();
}



