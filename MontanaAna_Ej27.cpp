#include<iostream>
#include<fstream>


using namespace std; 



int main(){

    double u_old[101][101];
    double u_new[101][101]; 
    
    double dx= 1/100;
    double dy= 1/100; 
    double error = 0;
    double error2 = 0;
    double contador;
  
    
    for(int i=0; i<100; i++){
    
               
        for(int j=0; j<100; j++){
    
            u_old[i][j]=0;
           
            
        }
        
    }
    
    
    
    for(int i=0; i<100; i++){
    
               
        for(int j=0; j<100; j++){
    
          
            if(i==40 && 20<j<80){
            
                u_old[i][j]=100; 
            }
            
            if(i==60 && 20<j<80){
            
                u_old[i][j]=-100; 
            }
    
    
        }
    
    
    }

    //iteraciones para encontrar u_new

    while(error> 10**-2){
        
        
        for(int i=1; i<100; i++){
        
            for(int j=1; j<100; j++){
            
            
                
                u_new[i][j]= 1/4(u_old[i+1][j]+u_old[i-1][j]+u_old[i][j+1]+u_old[i][j-1]);
                
                error2 = error2 +  ( u_old[i][j] - u_new[i][j]); 
                
                if(i!==40 && 20<j<80){
            
                u_old[i][j]= u_new[i][j]; 
                }
            
                if(i!==60 && 20<j<80){
            
                u_old[i][j]=u_new[i][j]; 
                }
    
                
              
            }
        
        
        }
       
        
        error = error2/1000; 
        
        
        for(int i=0; i<100 ; i++){
        
             for(int j=0; j<100 ; j++){
        
                cout << u_new << std; 
        
            }
        
        }
        
    
    }
    
    return 0; 

}