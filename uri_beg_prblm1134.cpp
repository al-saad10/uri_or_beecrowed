#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
//solved :)

void type_of_fule();

int main(){

   type_of_fule();

    //main();

return 0;
}

void type_of_fule()
{
    int n,alco=0,gas=0,disel=0;

    do{
        cin>>n;
        if(n==1) alco+=1;
        if(n==2) gas+=1;
        if(n==3) disel+=1;

        //else cin>>n;

    }while (n!=4);

    cout <<"MUITO OBRIGADO"<<endl;
    cout <<"Alcool: "<<alco<<endl;
    cout <<"Gasolina: "<<gas<<endl;
    cout <<"Diesel: "<<disel<<endl;
      
}
