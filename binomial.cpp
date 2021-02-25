#include "binomial.h"

  Binomial::Binomial(float c1, int p1){
    if (p1 < 1){
      p1 = 1;
    }else{
      power1 = p1;
      coeficient1 = c1;
    };
  };

 Binomial::Binomial(float c1, int p1,float c2, int p2){
    if (p1 < 1){
      p1 = 1;
    }else{
      power1 = p1;
      coeficient1 = c1;
    };
    if(p2 < 1){
      p2 = 1;
    }else{
      power2 = p2;
      coeficient2 = c2;
    } 
  }

float Binomial::GetCoeficient(float a){
if(a == 1 || a == 2){
return a= 1.0;
}else {
  return a = -1.0;
}
};

int Binomial::GetPower(int b){
if(b < 0){
  b=1;
}
if( b == 1 || b ==2){
  return 0;
}
else {return -1;};
}


  