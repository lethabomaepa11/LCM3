#include <iostream>
#include <string>

using namespace std;

int LCM(int num1, int num2, int num3)
{
    int lcm = 0;
    int count1 = 1;
    int count2 = 1;
    int count3 = 1;
    int n1 = num1;
    int n2 = num2;
    int n3 = num3;
    while(lcm == 0)
    {
        if(n1 != n2 || n2 != n3 || n3 != n1)
        {
            if((n1 < n2 && n1 < n3) || (n1 == n2 || n1 == n3))
            {
                count1++;
                n1 = num1 * count1;
                cout<<"n1 : "<<n1<<endl;
            }
            else if((n2 < n3 && n2 < n1) || (n2 == n1 || n2 == n3))
            {
                count2++;
                n2 = num2 * count2;
                cout<<"n2 : "<<n2<<endl;
            }
            else if(n3 < n2 && n3 < n1)
            {
                count3++;
                n3 = num3 * count3;
                cout<<"n3 : "<<n3<<endl;
            }
        }
        else
        {
            lcm = n2;

        }
        //lcm++;
    }

    return lcm;
}


int main()
{
    int lcm = LCM(198,47,23);
    cout << lcm << endl;
    return 0;
}
