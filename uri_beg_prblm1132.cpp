#include<iostream>
using namespace std;
//beginer prblm-1132
//solved

void multliple();


int main(){

    multliple();

return 0;
}

void multliple(){
    int num1,num2,i,count=0;

    cin>>num1>>num2;

    if(num2>num1){
        for(i=num1;i<=num2;i++){
            if(i%13!=0){
                count=count+i;
            }

        }

    }

     else if(num1>num2){
        for(i=num2;i<=num1;i++){
            if(i%13!=0){
                count=count+i;
            }

        }

    }
    cout << count <<endl ;

}
