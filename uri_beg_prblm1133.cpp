#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
//beg prblm 1133
//solved :)

void rest_of_division();

int main(){

   rest_of_division();

    //main();

return 0;
}

void rest_of_division()
{
    int num1,num2,i;
   
    cin>>num1;
    cin>>num2;

    if(num2>num1)
    {
        for(i=num1+1;i<num2;i++)
    {
        if(i%5==2 || i%5==3) cout<<i<<endl;
    }
    }

    else
        for(i=num2+1;i<num1;i++)
    {
        if(i%5==2 || i%5==3) cout<<i<<endl;
    }
      
}
