#include <Servo.h> 
Servo rightfoot;
Servo rightthigh;
Servo leftfoot;
Servo leftthigh;
int pos = 0;
int pos1 = 0; 
void setup() 
{ 
//rightfoot.attach(9);
rightthigh.attach(5);
//leftfoot.attach(3);
leftthigh.attach(11);
//leftfoot.write(3);
leftthigh.write(90);
rightthigh.write(10);
//rightfoot.write(100);
} 
 
 
void loop() 
{
 for(pos = 85; pos < 130; pos += 1)
 { 
 rightthigh.write(pos);  
          
 delay(15);  
        
 }
 for(pos = 130; pos>=85; pos-=1)  
 {       
rightthigh.write(pos);  
        
 delay(15);    
        
 }
 
  for(pos1 = 130; pos1 < 180; pos1 += 1)
 {        
 leftthigh.write(pos1);   
        
 delay(15);     
         
 }
 for(pos1 = 180; pos1>=130; pos1-=1) 
 {       
leftthigh.write(pos1);   
         
 delay(15);      
         
 }
}
