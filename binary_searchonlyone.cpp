#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <cstring>
//exercise #1: binary search engine part 1
using namespace std;

void refresh();
void refresh() {
     system("cls");
     }                 
int main(int argc, char *argv[])
{
    char binary[100],num[100][100];
    int len,power=0, limit=0;
    double output;
    cout<<"Base of 2 to Base of 10 morph. One Input Only"<<endl;
    cout<<"Enter the binary:";
    gets(binary);
    len=strlen(binary);
    for (int i=0; i<=len;i++) {
        if(binary[i]=='.' || binary[i]=='\0') {
                          num[power][limit]='\0';
                          power++;
                          limit=-1;
                          }
        num[power][limit]=binary[i];
        limit++;
        }
        
        int range, base=1, sum=0;
     range=strlen(num[0])-1;
     for (int x=range;x>=0;x--) {
         if( num[0][x]== '1') {
             sum=(base*1)+sum;
             base*=2;
             }
         else {
              sum=(base*0)+sum;
              base*=2;
              }
              }
double based=.5, pointed=0;
     int length;
     length=strlen(num[1])-1;
     for (int k=0;k<=length;k++) {
         if(num[1][k]=='1') {
                           pointed= (based*1)+pointed;
                           based*=.5;
                           }
         else {
              pointed=(based*0)+pointed;
              based*=.5;
              }
              }
              output= sum+pointed;
              cout<<"The decimal value is "<<output;
    system("PAUSE");
    return EXIT_SUCCESS;
}
