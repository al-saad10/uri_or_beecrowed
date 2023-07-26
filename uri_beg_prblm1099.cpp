#include<iostream>
using namespace std;
//beginer prblm-1099
//solved

void sumOfOddNums();


int main(){

    sumOfOddNums();

   // main();

return 0;
}

void sumOfOddNums()
{
    int tc,num1,num2,i,j,count=0;

    cin >> tc ;

        for(j=0;j<tc;j++)
        {
            cin>>num1>>num2;
            count = 0;

            int min_num = min(num1,num2);
            int max_num = max(num1,num2);

            for(i=min_num+1;i<max_num;i++)
            {
                if(i%2!=0)
                {
                    count+=i;
                }
            }
            cout << "sum of odds : " << count <<endl;

            
        }
   
}
