#include<LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);
int i,j,p,q;
void read(int);
void setup(){
  for(i=7;i>=4;i--)
    pinMode(i,INPUT);
  for(i=3;i>=0;i--)
    pinMode(i,OUTPUT);
}
void loop(){
  for(i=3;i>=0;i--)
  {
     for(q=3;q>=0;q--)
    digitalWrite(q,LOW);
    digitalWrite(i,HIGH);
    if(digitalRead(7)==HIGH && i==3){
      j=1;
      lcd.print(1);
      read(j);
      delay(200);
     }
  
   if(digitalRead(6)==HIGH && i==3){
      j=4;
      lcd.print(4);
     read(j);
    delay(200);
  }
 if(digitalRead(5)==HIGH && i==3){
      j=7;
      lcd.print(7);
   read(j);
    delay(200);
  }
 if(digitalRead(4)==HIGH && i==3){
      
      lcd.clear();
    delay(200);
  }
     if(digitalRead(7)==HIGH && i==2){
      j=2;
      lcd.print(2);
       read(j);
    delay(200);
  }
     if(digitalRead(6)==HIGH && i==2){
      j=5;
       lcd.print(5);
       read(j);
        delay(200);
    
  }
     if(digitalRead(5)==HIGH && i==2){
      j=8;
      lcd.print(8);
       read(j);
    delay(200);
  }
   if(digitalRead(4)==HIGH && i==2){
      j=0;
      lcd.print(0);
     read(j);
    delay(200);
  }
    if(digitalRead(7)==HIGH && i==1){
      j=3;
      lcd.print(3);
      read(j);
    delay(200);
  }
     if(digitalRead(6)==HIGH && i==1){
      j=6;
      lcd.print(6);
       read(j);
    delay(200);
  }
     if(digitalRead(5)==HIGH && i==1){
      j=9;
      lcd.print(9);
       read(j);
    delay(200);
  }
     if(digitalRead(4)==HIGH && i==1){
      j=11;
      lcd.print('=');
       read(j);
       delay(200);
  }
     if(digitalRead(7)==HIGH && i==0){
      j=10;
      lcd.print('/');
       p=1;
       read(j);
    delay(200);
  }
    if(digitalRead(6)==HIGH && i==0){
      j=10;
      lcd.print('*');
      p=2;
      read(j);
    delay(200);
  }
    if(digitalRead(5)==HIGH && i==0){
      j=10;
      lcd.print('+');
      p=3;
      read(j);
    delay(200);
  }
    if(digitalRead(4)==HIGH && i==0){
      j=10;
      lcd.print('-');
      p=4;
      read(j);
    delay(200);
  }
}}
void read(int j){
  static long int k=0,l=0;
  double ans;
  switch(j){
case 0:
case 1:
case 2:
case 3:
case 4:
case 5:
case 6:
case 7:
case 8:
  case 9:{
    k=(k*10)+j;
  }break;
case 10:
  {
   l=k;
   k=0;
    }break;
    case 11:{
      if(p==1){
        ans=float(l)/float(k);
        lcd.print(ans);}
       if(p==2){
      ans=(l*k);
      lcd.print(ans);}
      if(p==3){
      ans=(l+k);
      lcd.print(ans);}
       if(p==4){
      ans=(l-k);
      lcd.print(ans);}
    k=0;}break;}}

