#include <iostream> 
#include <stdio.h> 
using namespace  std;


int main(void){

int a[100];

for (int i=0;i<20;i++){

    a[i]= 1+ rand()%20;

}

for (int i=0;i<20;i++){
    cout <<"o valores de a: "<< a[i]<< endl;

}
    return 0;
}