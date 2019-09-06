#include <stdio.h>
#include <stdlib.h>

int main(){
    bool alarme, sensor, sirene;

    if(alarme == false && sensor == false){
        sirene = false
    } else if(alarme == false && sensor == true){
        sirene = false;
    }  else if(alarme == true && sensor == false){
        sirene = false;
    } else if(alarme == true && sensor == true){
        sirene = true;
    }
    return false;
}
