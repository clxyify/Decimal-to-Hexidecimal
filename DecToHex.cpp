#include <iostream>
using namespace std;

void ConvertToHex(int nbm) //Function can be used for any numbers
{
    char hexaDeciNum[100];
     int i = 0;
    while (n != 0) {
        int temp = 0;
         temp = n % 16;
 
        if (temp < 10) {
            hexaDeciNum[i] = temp + 48;
            i++;
        }
        else {
            hexaDeciNum[i] = temp + 55;
            i++;
        }
 
        n = n / 16;
    }
 
    for (int j = i - 1; j >= 0; j--)
        cout << hexaDeciNum[j]; //Write on console the hexidecimal converted number
}
 
int main()
{
    int n = 500; //500 would be converted into 1F4
    if (n == NULL) { cout << "cant make 0 to hex dumb ass that would be 0x0";}
    decToHexa(n);
    Sleep(10000000); //Prevent closing the console
    return 0;
}
