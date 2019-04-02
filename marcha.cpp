#include <iostream>
#include <stdlib.h>
#include <cmath>

int main(){
  int i;
  float x;
  float y;   
  float r;
  double pi;
  
  pi=2*asin(1);  
  x=0;
  y=0;    
  srand48(23);

  for (i=0;i<1000;i++){  
    r = 2*pi*drand48();
    x+=cos(r);
    y+=sin(r);
    std::cout << x << " " << y << std::endl;    
  }
  
  return 0;
}
