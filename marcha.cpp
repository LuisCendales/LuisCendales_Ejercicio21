#include <iostream>
#include <random>
#include <stdlib.h>

int main(){
  int i;
  float x;
  float y;
  
  srand48(0);

  for (i=0;i<100;i++){  
    x = x + (drand48()*2)-1;
    y = y + (drand48()*2)-1;
    std::cout << x << " " << y << std::endl;
    
  }
  
  return 0;
}

