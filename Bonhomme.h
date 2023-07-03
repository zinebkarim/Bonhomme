

class Bonhomme{
	
//Paramètres-----------------------------------------------------------------------------------------------------------
	figure fig[6];
	int n;
	int x,y,a,b;
	 public :
	 	
//Constructeur-----------------------------------------------------------------------------------------------------------	
	Bonhomme(figure fig1 []  ,int n1,int x1,int y1){
		x=x1;
		y=y1;
		n=n1;
		a=60;
        b=90;
   
		for(int i=0;i<6;i++){
				  fig[i]=fig1[i];
				 
  }       
    }
				  
//Déplacer le bonhomme horizontalement---------------------------------------------------------------------------------------------------------
void deplacerBonhomme(fenetre *f,int a1,int b1,int sens){
	
	int dx=0;
	int dy=0;
	for (int i=0;i<20;i++){
		cleardevice();
		for(int j=0;j<6;j++){
			
			fig[j].deplacer(dx,dy,f,sens);
		}
		
		dx=dx+1;
		dy=a1*dx+b1;
		x=x+dx;
		y=y+dy;
		delay(100);	// ajoute un délai au déplacement du bonhomme
	}
}
//Déplacer le bonhomme selon une tajectoire triangulaire-----------------------------------------------------------------------------------------------------------
   	void deplacertriangle(fenetre *f){ 	 
	   
	   	deplacerBonhomme(f,0,0,1);
		  deplacerBonhomme(f,1,0,0);
			deplacerBonhomme(f,-1,0,0);
		  
		
			 	 }
//Déplacer le bonhomme selon une tajectoire circulaire-----------------------------------------------------------------------------------------------------------
	void deplacerC(fenetre *f,int xCercle,int yCercle){
		
		float r=distance(xCercle,yCercle);
		
		
		
		float i=0;
		    while(i<6.28){
		    	cleardevice();
		    	
			    x=r*cos(i)+xCercle;
			    y=r*sin(i)+yCercle;
			    i=i+0.1;

			    dessiner(f);
			    delay(300);
			    
				}
				  
				  
			}
//Dessiner la figures composant le bonhomme-----------------------------------------------------------------------------------------------------------		  
void dessiner(fenetre * f){



    fig[0].set_rectangle(x,y,LIGHTGREEN,a,b);
    fig[1].set_cercle(x+30,y-30,LIGHTGREEN,60);
    fig[2].set_droite(x,y+b,LIGHTGREEN,60,0);
    fig[3].set_droite(x+a,y+b,LIGHTGREEN,60,0);
    fig[4].set_droite(x,y,LIGHTGREEN,0,100);
    fig[5].set_droite(x+a,y,LIGHTGREEN,50,100);
    
    	for(int j=0;j<6;j++){
		
		fig[j].dessiner(f);
	}
}


//Calculer la distance séparant le centre du bonhomme au centre du cercle-----------------------------------------------------------------------------------------------------------       
float distance(int xCercle,int yCercle){
	float d=sqrt(pow(x-xCercle,2)+pow(y-yCercle,2));
	return d;
}        
	
};





