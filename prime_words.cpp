#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <cstring>

using namespace std;

class prime_word {
      public:
             char *rekt, sentence[100],word[100][100],prime[100];
             int len, target,w,p;
             void input();
             void primechecker();
             };
void prime_word::input() {
     w=0;
     cout<<"Enter the words:"<<endl;
     gets(sentence);
     rekt=strtok(sentence," ");
     while (rekt != NULL) {
           strcpy(word[w],rekt);
           w++;
           rekt=strtok(NULL," ");
           }
           }
void prime_word::primechecker() {
     int i,k,l,count;
     for(i=0;i<w;i++) {
             count=0;
             p=0;
             len=strlen(word[i]);
   //      cout<<"length of "<<word[i]<<" is: "<<len<<endl;
             for(k=1;k<=len;k++) {
                     if(len%k==0) {
                                  count++;
                                  }
                                  }
    //     cout<<"count is "<<count<<endl;
             if(count==2) {
                          p=0;
                          for(l=len-1;l>=0;l--) {
                                  prime[p]=word[i][l];
                                  p++;
                                  
                                                      }
                          prime[p]='\0';
                          cout<<prime<<" ";
                          }
             else {
                  cout<<word[i]<<" "; 
                  }
                                     }
                                     }
int main(int argc, char *argv[])
{
    prime_word a;
    a.input();
    a.primechecker();
    cout<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
