#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <stack>
#include <string>
/* Quiz # 2 stack */
using namespace std;

class search_engine {
      public:
             char *rekt,word[100][100],clean[100][100],good[100][100],*cppy,stacking[100][100];
             int w,i,j,k,l,count,g,c,len,size,woop,cool,buff;
             void input();
             void scannernum();
             void scanner();
             void output();
             void trying();
             };
void refresh();
int debuff();
void refresh(){
     system("cls");
     }
int debuff(int exort) {
     exort=0;
     return exort;
     }
void search_engine::input(){
    char sentence[100];
     cin.getline(sentence,100);
     w=0;
     rekt=strtok(sentence," ");
     while (rekt != NULL) {
           strcpy(word[w],rekt);
           w++;
           rekt=strtok(NULL," ");
           }
           }
void search_engine::scannernum() {
     c=0;
     char num[10] = {'0','1','2','3','4','5','6','7','8','9'};
     for(i=0;i<w;i++) {
                      count=0;
                       len=strlen(word[i]);
                       for(j=0;j<len;j++) {
                                          for(k=0;k<10;k++) {
                                                            if(word[i][j]==num[k]) {
                                                                                   count++;
                                                                                   }
                                                            }
                                          }
     if(count==0) {
                  strcpy(clean[c],word[i]);
                  c++;
                  }
                      }
                      }
void search_engine::scanner() {
     char letter[42]= {'b','B','c','C','d','D','f','F','g','G','h','H','j','J','k','K','l','L','m','M','n','N','p','P','q','Q','r','R','s','S','t','T','v','V','w','W','x','X','y','Y','z','Z'};
     g=0;
     for(i=0;i<c;i++) {
                      count=0;
                      len=strlen(clean[i]);
     for(j=0;j<len;j++) {
                        for(k=0;k<42;k++) {
                                          if(clean[i][j]== letter[k]){
                                          if(clean[i][j+1]== letter[k+2] || clean[i][j+1]==letter[k+3]) {
                                                             count++;
                                                                                                        }
                                                                      }
                                          }
                        }
                        if(count!=0) {
                                     strcpy(good[g],clean[i]);
                                     g++;
                                     }
                        }
                        }
void search_engine::output() {
     cout<<"Values can be stack:"<<endl;
     for(i=0;i<g;i++) {
                      cout<<good[i]<<" ";
                      }
                      cout<<endl;
                      woop=0;
                      cool=0;
                      size=g;
                      }
void search_engine::trying() {
int mode=1;
char take;
while(mode) {
            cout<<endl<<"[A]Push:"<<endl;
            cout<<"[B]Pop:"<<endl;
            cin>>take;

                if(take == 'A' || take== 'a') {
                           if(size<woop) {
                           refresh();
                                          cout<<endl<<"The Stack is full!"<<endl;
                                          }
                           else if(size==woop || cool==size) {
                                refresh();
                                cout<<"The stack is full or no more valid inputs to push!"<<endl;
                                cout<<"stack size: "<<woop<<"/"<<size<<endl<<"Stack values :";
                                for(i=0;i<woop;i++) {
                                               cout<<stacking[i]<<" ";
                                               }
                                               cout<<endl;
                                }
                           else if (size>woop) {
                           strcpy(stacking[woop],good[cool]);
                           woop++;
                           cool++;
                           refresh();
                           cout<<"stack size: "<<woop<<"/"<<size<<endl<<"Stack values :";
                           for(i=0;i<woop;i++) {
                                               cout<<stacking[i]<<" ";
                                               }
                                               cout<<endl;
                                                     }
                                                     }
                else if(take == 'B' || take == 'b') {
                     if(woop==1) {
                                 woop--;
                                 refresh();
                                 cout<<endl<<"The stack is empty"<<endl;
                                 if(cool==size && woop==0) {
                                            cout<<"Program Terminated"<<endl;   
                                               mode--;
                                 }
                                 }
                     else if(woop==0) {
                          if(cool==size && woop==0) {
                                        mode--;
                                        }
                                 refresh();       
                          cout<<endl<<"The stack is empty"<<endl;
                          }
                     else if(woop>1) {
                          woop--;
                          refresh();
                     cout<<"stack size: "<<woop<<"/"<<size<<endl<<"Stack values :";
                     for(i=0;i<woop;i++) {
                                         cout<<stacking[i];
                                         }
                cout<<endl;
                                         }
                                         }
                                         }
                                         }

     
     
int main(int argc, char *argv[])
{
    search_engine a;
    a.input();
    a.scannernum();
    a.scanner();
    a.output();
    a.trying();
    system("PAUSE");
    return EXIT_SUCCESS;
}
