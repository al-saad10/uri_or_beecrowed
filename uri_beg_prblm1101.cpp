#include<iostream>
using namespace std;
//beginer prblm-1101
//solved :)

void seq_of_numAndSum();


int main(){

    seq_of_numAndSum();

   // main();

return 0;
}

void seq_of_numAndSum()
{
    int num1,num2,i;

    while (true)
    {
        cin >> num1 >> num2;
        if(num1 <= 0 || num2 <= 0 )
           break;
        else
        {
            int min_num = min(num1,num2);
            int max_num = max(num1,num2);
            int count= 0;

            for(i = min_num; i <= max_num; i++)
            {
                count+= i;
                cout << i << " " ;
            }
            cout << "Sum=" << count << endl;
        }
    }
      
}


   