#include <iostream>
#include <stdio.h>

using namespace std;
//beginer prblm-1094
//solved :)

int main(){
    int n;
    int q;
    char t;
    int total = 0;
    int coelho = 0;
    int sapo = 0;
    int rato = 0;
    
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
            cin >> q;
            cin >> t;
            
            total += q;
            
            if(t == 'C') coelho += q;
            if(t == 'S') sapo += q;
            if(t == 'R') rato += q;
    }
    
    cout << "Total: " << total << " cobaias\n";
    cout << "Total de coelhos: " << coelho << "\n";
    cout << "Total de ratos: " << rato << "\n";
    cout << "Total de sapos: " << sapo << "\n";
    printf("Percentual de coelhos: %.2f %\n", ((float)coelho/(float)total)*100.00);
    printf("Percentual de ratos: %.2f %\n", ((float)rato/(float)total)*100.00);
    printf("Percentual de sapos: %.2f %\n", ((float)sapo/(float)total)*100.00);
    return 0;
    
}


/*
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;


void num_and_prcnt();
float roundS(float var);


int main(){

    num_and_prcnt();

   // main();

return 0;
}

void num_and_prcnt()
{
    int tc,rab=0,rat=0,frog=0,i,total=0,num_of_animal;
    char type;
    float per_rab = 0.00F,per_rat = 0.00F,per_frog = 0.00F;

    cin >> tc;

    for(i=0;i<tc;i++)
    {
        cin >> num_of_animal >> type;
        if(type == 'C')
        {
            rab += num_of_animal;
        }
        else if(type == 'R')
        {
            rat += num_of_animal;
        }
        else if(type == 'S')
        {
            frog += num_of_animal;
        }   
        else
            break;
        
    }
     total = rab + rat + frog;
        per_rab = (rab*100)/total;
        per_rat = (rat*100)/total;
        per_frog = (frog*100)/total; 

        cout <<"Total: "<<total<<" cobaias"<<endl;
        cout <<"Total de coelhos: "<<rab<<endl;
        cout <<"Total de ratos: "<<rat<<endl;
        cout <<"Total de sapos: "<<frog<<endl;
        cout << fixed << setprecision(2) << "Percentual de coelhos: " << roundS(per_rab) << " %" << endl;
        cout << fixed << setprecision(2) << "Percentual de ratos: " << roundS(per_rat) << " %" << endl;
        cout << fixed << setprecision(2) << "Percentual de sapos: " << roundS(per_frog) << " %" << endl;




        
        //cout <<"Percentual de coelhos: "<<roundS(per_rab)<<" %"<<endl;
        //cout <<"Percentual de ratos: "<<roundS(per_rat)<<" %"<<endl;
        //cout <<"Percentual de sapos: "<<roundS(per_frog)<<" %"<<endl;
      
}

float roundS(float var)
{
    // 37.66666 * 100 =3766.66
    // 3766.66 + .5 =3767.16    for rounding off value
    // then type cast to int so value is 3767
    // then divided by 100 so the value converted into 37.67
    //float value = (int)(var * 100 + .5);
    //return (float)value / 100;
    // Multiply by 100, round to nearest integer, then divide by 100
    return floorf(var * 100 + 0.5) / 100.0;
}
*/