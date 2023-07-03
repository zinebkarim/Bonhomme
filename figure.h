#include <windows.h>
#include <cmath>

class figure{
  int typ,x,y,a,b,coul;
 public :
 	
 	
 	
 	
 	
//Les méthodes de la classe figure--------------------------------------------------------------------------------------------------------------------------------

  void set_droite(int xc, int yc, int couleur, int l, int h);// tracer une droite
  void set_cercle(int xc, int yc, int couleur, int diam);// tracer un cercle
  void set_rectangle(int xc, int yc, int couleur, int l, int h);// tracer un rectangle
  void set_triangle(int xc, int yc, int couleur, int l, int h);// tracer un triangle
  int get_x_centre(void);//renvoie l'abscisse du centre de la figure
  int get_y_centre(void);//renvoie l'ordonné du centre de la figure
  int get_couleur(void);//determine la couleur de la figure
  int get_x_min(void);//renvoie l'abscisse min de la figure
  int get_y_min(void); //renvoie l'ordonné min de la figure
  int get_x_max(void);//renvoie l'abscisse max de la figure
  int get_y_max(void); //renvoie l'ordonné min de la figure
  void dessiner(fenetre *f);// Dessiner la figure sur la fenetre passée en parametre
  void deplacer(int dx,int dy,fenetre *f,int sens);// Deplacer le point dont les coordonnées sont passés en parametre


};



//Redéfinition des méthodes------------------------------------------------------------------------------------------------------------


void figure::set_droite(int xc, int yc, int couleur, int l, int h)
 {
  x=xc;y=yc;coul=couleur;a=l;b=h;
  if(h==0){
  	typ=1;// droite horizontale
  	
  }
  
  else if(l==0)
  typ=2;// droite verticale
  else 
  typ=3;// droite inclinée
 }
 
 
 
void figure::set_cercle(int xc, int yc, int couleur, int diam){
 x=xc;
 y=yc;
 coul=couleur;
 a=diam;
 b=diam;
 typ=4;
  }

 
 
 
 
void figure::set_rectangle(int xc, int yc, int couleur, int l, int h){ 
x=xc;y=yc;
coul=couleur;
a=l;b=h;
typ=6;

 }
void figure::set_triangle(int xc, int yc, int couleur, int l, int h){
 x=xc;y=yc;
 coul=couleur;
 a=l;b=h;
 typ=7;
  }








int figure::get_x_centre(void)   {return x;}
int figure::get_y_centre(void)   {return y;}
int figure::get_couleur(void)    {return coul;}
int figure::get_x_min(void)   { return (x-abs(a/2)); }
int figure::get_x_max(void)   { return (x+abs(a/2)); }
int figure::get_y_min(void)  
 { 
   if(typ==7)
   return (y-abs(b/3));
   else 
   return (y-abs(b/2)); 
 }
int figure::get_y_max(void)
 { 
   if(typ==7)
   return (y+abs(2*b)/3);
   else 
   return (y+abs(b/2)); 
 }







// Pour la droite verticale-----------------------------------------------------------------------------------------------------------------------------------------------------

void figure::dessiner(fenetre *f)
 {
  int i;

  if(typ==1)  
   {
    for(i=1;i<=a;i++) {
    	   
    		f->allume(x,y+i,coul);
	}
   }
   
   
   
 // Pour la droite inclinée gauche-------------------------------------------------------------------------------------------------------------------------------------------
    else if(typ==2) 
   {
    	for(i=x-40;i<=x;i++){
 		
 		int y1=-i+y+x;
 	
 		 f->allume(i,y1,coul);
 		
	 }
   }
   

 // Pour la droite inclinée droite-------------------------------------------------------------------------------------------------------------------------------------------  
   else if(typ==3){  
 	for(i=x;i<=x+40;i++){
 		
 		int y1=i+y-x;
 	
 		 f->allume(i,y1,coul);
 		
	 }   
 }
 
 // Pour le cercle-----------------------------------------------------------------------------------------------------------------------------------------------------------
   else if(typ==4){    
    int r=a/2;
     circle(x, y, r);
 }
 
 
  //  Pour le rectangle----------------------------------------------------------------------------------------------------------------------------------------------------
  else if(typ==6){  
    
   	for(i=x;i<=x+a;i++) {
   		   
   			f->allume(i,y,coul);
	   }
	   
	for(i=y;i<=y+b;i++) {
   		   
   			f->allume(x,i,coul);
	   }
	for(i=y;i<=y+b;i++) {
   		   
   			f->allume(x+a,i,coul);
	   }
	   
	for(i=x;i<=x+a;i++) {
   		   
   			f->allume(i,y+b,coul);
	   }
   }
}
 
 
 
 //-------------------------------------------------------------------------------------------------------------------------------------------------------------
void figure::deplacer(int dx,int dy,fenetre *f,int sens) {


if(sens==1){
  x=x+dx;
  y=y+dy;
	
}

else{
	 x=x-dx;
     y=y-dy;
}
 
   dessiner(f);
  
 }
 
 
 
 
 

