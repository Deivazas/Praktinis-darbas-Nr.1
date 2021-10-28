#include <iostream>

using namespace std;

int main() {
    int a=0, b=0, h=0;
    int num1[a] = {0};
    int num2[b] = {0};
    int sum[] = {0};
    cout << "Iveskite pirmo masyvo dydi :" << endl;
    cin >> a;
    cout << "Iveskite pirmo masyvo elementus :" <<endl;
    for(int g=0;g<a;g++)
    {
        cin >> num1[g];
    }
    cout << "Iveskite antro mastvo dydi :" << endl;
    cin >> b;
    cout << "Iveskite antro masyvo elementus :" <<endl;
    for(int n=0;n<b;n++)
    {
        cin >> num2[n];
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            if(num1[i] == num2[j])
            {
                h++;
                for(int c=0;c<h;c++)
                {
                    sum[c]=(num1[i]+num2[j])/2;
                    cout << sum[c] << " ";
                    c++;
                }
                i++;
            }
        }
    }
    return 0;
}
