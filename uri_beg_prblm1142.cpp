#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
//beg prblm 1142
//solved :)

void print_pum();

int main(){

   print_pum();

    //main();

return 0;
}

void print_pum()
{
    int n,i,j,k=0;

    cin>>n;
    //cout<<1<<" "<<2<<" "<<3<<" PUM"<<endl;

    for(i=0;i<n;i++)
    {
        j=(2*k)+1;
        cout<<j<<" "<<j+1<<" "<<j+2<<" PUM"<<endl;
        k=k+2;
       
    }
      
}
