#include <iostream>
#include <stdlib.h>
#include<ctime>
using namespace std;
void gialap(int ruachay, int thochay, int *rua, int *tho ){
    srand(time(0));
    while(ruachay<70 &&thochay<70){
        ruachay+=rua[rand()%10];
        thochay+=tho[rand()%10];
        if(ruachay<0) ruachay=0;
        if(thochay<0) thochay=0;
        cout<<"Rua: "<<ruachay<<"\tTho: "<<thochay<<endl;
    }

}
    int main(){
        int rua[10]={3,3,3,3,3,1,1,1,-6,-6};
        int tho[10]={0,0,9,9,-12,1,1,1,-2,-2};
        int ruachay=0,thochay=0;
        gialap(ruachay,thochay,rua,tho);
        if(ruachay>=70){
            cout<<"Game Over !\nRua thang !";
        }else{
            cout<<"Game Over !\nTho thang !";
            }
        return 0;}
