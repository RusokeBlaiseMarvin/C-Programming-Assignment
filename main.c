#include <stdio.h>
#include <stdlib.h>

int main(){

float initialfahr=0;
float celcius;
float finalfahr=300;

float range=10;


for(initialfahr=0;initialfahr<=finalfahr;initialfahr=initialfahr+range)
{
    celcius=5*(initialfahr-32)/9;
    printf("%f\t%f\n",initialfahr,celcius);


}

}
