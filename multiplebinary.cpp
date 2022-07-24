#include <cstdlib>
#include <iostream>
#include <stdlib.h>
//binary to decimal, no limit
using namespace std;
void refresh();

void refresh() {
     system("cls");
     }
int main(int argc, char *argv[])
{
    char input[500],binary[100][100],split[100][100];
    int len,power=0,limit=0,min=0,max=0,maxlen,minlen,outint, final,l;
    double outdouble,base,vase,check,output;
    cout<<"Enter the binaries:"<<endl;
    gets(input);
    len=strlen(input);
    for(int i=0;i<=len;i++) {
            if(input[i]==' ' || input[i]=='\0')     {
                           binary[power][limit]='\0';
                           power++;
                           limit= -1;
                                                     }
            binary[power][limit]= input[i];
            limit++;
            }
    for(l=0;l<power;l++) {
    len=strlen(binary[l]);
  //  cout<<"binary:"<<binary[l]<<endl;
    base=1;
    vase=0.5;
    outint=0;
    outdouble=0;
    final=0;
    max=0;
                          for(int x=0; x<=len;x++) {
                          if(binary[l][x]== '.' || binary[l][x]== '\0') {
                                            split[max][min]='\0';
                                            max++;
                                            min=-1;
                                                                        }
                          split[max][min]= binary[l][x];
                          min++;
                                                   }
    maxlen=strlen(split[0])-1;
    minlen=strlen(split[1])-1;
  //   cout<<"This is:"<<split[0]<<endl;
  //   cout<<"This is:"<<split[1]<<endl;
                          for(int k=maxlen;k>=0;k--){
                                  if(split[0][k]=='1') {
                                                       outint=(base*1)+outint;
                                                       base*=2;
                                                       }
                                  else {
                                       outint=(base*0)+outint;
                                       base*=2;
                                       }
                                                      }
                          for(int j=0; j<=minlen; j++) {
                                  if(split[1][j]=='1') {
                                                       outdouble=(vase*1) + outdouble;
                                                       vase*=0.5;
                                                       }
                                  else {
                                       outdouble=(vase*0) + outdouble;
                                       vase*=0.5;
                                       }
                                                          }
                          output=outdouble + outint;
                        //  cout<<output;
                          final=output;
                          check= output - final;
                          if(check!=0) {
                                      cout<<output<<" ";\
                              //        cout<<endl;
                                      }
                          else {
                               cout<<final<<" ";
                          //     cout<<endl;
                               }
                }
                               cout<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
