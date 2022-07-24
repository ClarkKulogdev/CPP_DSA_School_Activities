#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <new>
/////////////////////Stack Exercise///////////////////////////////////////////////
using namespace std;

class search_engine {
      public:
             char *rekt,sentence[100], word[100][100],fine[100][100],stacking[100][100];
             int len,l,w,k,p,j,count,f,m,q,s,z,b,size,h;
             void kappa();
             void input();
             void vision();
             void menu();
             void output();
             };
void refresh();
void refresh() {
     system("cls");
     }
void search_engine::kappa() {
     cout<<"Stack Exercise:"<<endl;
     cout<<"Enter the Size of the stack:";
     cin>>size;
     refresh();
     }
void search_engine::input() {
     w=0;
     cout<<"Stack Exercise:"<<endl;
     cout<<"Enter the Inputs:";
     gets(sentence);
     rekt=strtok(sentence," ");
     while (rekt != NULL) {
           strcpy(word[w],rekt);
           w++;
           rekt=strtok(NULL," ");
           }
           }
void search_engine::vision() {
     char num[5] = {'1','2','3', '5', '7' };
     f=0;
     for (k=0;k<w;k++) {
         count=0;
         len = strlen(word[k]);
         for(p=len-1;p>=0;p--) {
         for(j=0;j<5;j++) {
         if(num[j] == word[k][p]) {
                   for(m=0;m<5;m++) {
                   if(num[m] == word[k][p-1]) {
                             count++;
                                              }
                                    }
                                  }
                          }
                               }
         if(count!=0) {
                        strcpy(fine[f],word[k]);
                        f++;
                        }
                        }
                                                }
void search_engine::menu() {
     q=1;
     char command;
     s=0;
     z=0;
     while(q) {
              cout<<endl<<" ____"<<endl;
              cout<<"|MENU|"<<endl;
              cout<<"_______________________";
              cout<<endl;
              cout<<"|[A] Push:            |"<<endl;
              cout<<"|[B] Pop:             |"<<endl;
              cout<<"|[C] Top:             |"<<endl;
              cout<<"|[D] Bottom:          |"<<endl;
              cout<<"|[E] Display:         |"<<endl;
              cout<<"|[F] Exit:            |"<<endl;
              cout<<"_______________________"<<endl;
              cin>>command;
              if(command == 'F' || command== 'f') {
                         q--;  
                                                  }
              if(command == 'A' || command == 'a') {
                          if(s<size && z<=f) {
                         refresh();
                         strcpy(stacking[s],fine[z]);
                         s++;
                         z++;
                         cout<<"Stack Exercise:"<<endl;
                         cout<<"Stack: ";
                         for(b=0;b<s;b++) {
                             cout<<stacking[b]<<" ";             
                                          }
                                          }
                         else if( (s==size || s<size) && (z<=f || z>=f)) {
                              refresh();
                              cout<<"Stack Exercise:"<<endl;
                              cout<<"The Stack is FULL or no more valid inputs to be PUSH!"<<endl;
                              cout<<"Stack: ";
                         for(b=0;b<s;b++) {
                             cout<<stacking[b]<<" ";             
                                          }
                                          }
                                          }
              if(command == 'B' || command == 'b') {
                         if(s==1) {
                                  refresh();
                                  s--;
                                  cout<<"Stack Exercise:"<<endl;
                                  cout<<"The Stack is empty!."<<endl;
                                  }
                          if(s==0){
                                  refresh();
                                  cout<<"Stack Exercise:"<<endl;
                                  cout<<"The Stack is empty!"<<endl;
                         }
                         else if(s<=size) {
                             refresh();
                              s--;
                              cout<<"Stack Exercise:"<<endl;
                              cout<<"Stack: ";
                              for(b=0;b<s;b++) {
                                               cout<<stacking[b]<<" ";
                                               }
                                               }
                                                   }
              if(command == 'C' || command == 'c') {
                         refresh();
                         cout<<"Stack Exercise:"<<endl;
                         cout<<"The top of the stack is : "<<stacking[s-1]<<endl;
                         cout<<"Stack: ";
                         for(b=0;b<s;b++) {
                             cout<<stacking[b]<<" ";             
                                          }
                                                   }
              if(command == 'D' || command == 'd') {
                         refresh();
                         if(s==0) {
                                  cout<<"Stack Exercise:"<<endl;
                                  cout<<"The bottom of the stack is none!"<<endl;
                                  cout<<endl;
                                  }
                         else {
                         cout<<"Stack Exercise:"<<endl;
                         cout<<"The bottom of the stack is : "<<stacking[0]<<endl;
                         cout<<"Stack: ";
                         for(b=0;b<s;b++) {
                             cout<<stacking[b]<<" ";             
                                          }
                                                    }
                                                    }
              if(command == 'E' || command == 'e') {
                         refresh();
                         cout<<"Stack Exercise:"<<endl;
                         cout<<"Stack: ";
                         for(b=0;b<s;b++) {
                             cout<<stacking[b]<<" ";             
                                          }
                         }
              }
              }      
         
                               
/////////////////////////////////////////////////////////
void search_engine::output() {            //////////////
     cout<<"Stack Exercise:"<<endl;        ////////////
     cout<<"Values that can be stack:";   ////////////
     for(l=0;l<f;l++) {      ////////////////////////
                      cout<<fine[l]<<" ";///////////
                      }     ///////////////////////
                      }     //////////////////////
/////////////////////////////////////////////////
     
int main(int argc, char *argv[])
{
    search_engine a;
    a.input();
    a.kappa();
    a.vision();
    a.output();
    a.menu();
    cout<<"Program Terminated!"<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
