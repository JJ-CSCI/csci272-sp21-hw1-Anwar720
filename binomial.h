#ifndef BINOMIAL_H
#define BINOMIAL_H


class Binomial{  
  float coeficient1;
  float coeficient2;
  int power1;
  int power2;
  
  public:
  Binomial(){};
  Binomial(float c1, int p1);
  explicit Binomial(float c1, int p1,float c2, int p2);

  float GetCoeficient(float a);
  
  int GetPower(int p);

  int SetPower(int p1,int p2){ 
    return p1;
  };

int add(float coeficient1,float coeficient2){

};
 float Multiply (float m1){
   return m1;
 };
 float Multiply( float m1, int p1){
   return m1*p1;
 };
};





#endif     

