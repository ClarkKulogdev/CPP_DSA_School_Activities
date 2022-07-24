#include <cstdlib>
#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;

class search_engine{
      
      public:
      char *rekt,sentence[100],word[100][100], target[100],checker[100][100],found[100][100];
      int w, len, i,wordlen,logic,c,count,f;
      void refresh();
      void input();
      void processor();
      void scanner();
      void output();
      };
void search_engine::refresh(){
     system("cls");
     }
void search_engine::input() {
     w=0;
     cout<<"Enter word(s):"<<endl;
     gets(sentence);
     cout<<"Enter the target: ";
     gets(target);
     rekt=strtok(sentence," ");
     while(rekt!=NULL) {
                       strcpy(word[w],rekt);
                       w++;
                       rekt=strtok(NULL," ");
                       }
                       }
void search_engine::processor() {
     c=0;
     for(i=0;i<w;i++) {
            //          cout<<word[i]<<endl;
                      logic=0;
                      if(strcmp(target,word[i])==0) {
                                                    logic++;
                                                    }
                      len= strlen(target)-1;
                      wordlen=strlen(word[i])-1;
                      if(len!=wordlen) {
                                       logic++;
                                       }
                      if(logic==0) {
                   //                cout<<word[i]<<" ";
                                   strcpy(checker[c],word[i]);
                                   c++;
                                   }
                      }
                      }
void search_engine::scanner(){
     len=strlen(target);
      for(i=0;i<c;i++) {
                       count=0;
                       for(int k=0;k<len;k++) {
                               wordlen=strlen(checker[i]);
                               for(int j=0;j<wordlen;j++) {
                                   //   cout<<checker[i][j]<<endl;
                                       if(target[k]==checker[i][j]) {
                                                                    count++;
                                                                    }
                                                           }
                                                }
                       if(count==len) {
                             //           cout<<checker[i]<<endl;
                                        strcpy(found[f],checker[i]);
                                        f++;
                                        }
                       }
                             }
void search_engine::output(){
     cout<<"Anagrams of "<<target<<" Found: ";
     if(f==0) {
              cout<<"None";
              }
     else {
          for(i=0;i<f;i++) {
                           cout<<found[i]<<" ";
                           }
          }
     cout<<endl;
          }
                                       
      
      
int main(int argc, char *argv[])
{
    search_engine a;
    a.input();
    a.processor();
    a.scanner();
    a.output();
    system("PAUSE");
    return EXIT_SUCCESS;
}
