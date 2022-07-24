#include <cstdlib>
#include <iostream>
#include <stdlib.h>
using namespace std;
//largest prime in multiple sets chosen by the user

class search_engine {
      public:
             long set, i, range[100], k, num[100][100], count, primo, prime[100],f,p,q;
             void welcome();
             void input_sets();
             void input_per_sets();
             void primehunter();
             void largestprimo();
             };
void refresh() {
     system("cls");
     }
void search_engine::welcome() {
     cout<<"Welcome to the Largest prime search engine in multiple sets!"<<endl<<endl<<endl;
     cout<<"Enter the number of sets:";
     cin>>set;
          refresh();
     }
void search_engine::input_sets() {
     for (i=0;i<set;i++) {
         cout<<"Enter the  number of values in Set "<<i+1<<":";
         cin>>range[i];
         cout<<"The range of set "<<i+1<<" is: "<<range[i]<<endl;
         }
     refresh();
     }
void search_engine::input_per_sets() {
     for(q=0;q<set;q++) {
                        cout<<"Enter the values in Set "<<q+1<<":"<<endl;
                        cout<<"Enter the "<<range[q]<<" inputs."<<endl;
                    //    cout<<set-(q+1)<<"Sets remaining:";
                        for(k=0;k<range[q];k++) {
                                                cin>>num[q][k];
                    //                            cout<<range[q]-(k+1)<<"inputs left."<<endl;
                                                }
                                                }
     refresh();
     }
                                                
void search_engine::primehunter() {
     p=0;
     for(i=0;i<set;i++) {
                        for(k=0;k<range[i];k++) {
                                                count=0;
                                                for(f=1;f<=num[i][k];f++) {
                                                                         // cout<<num[i][k]<<" "<<count<<endl;
                                                                         if(num[i][k]%f==0) {
                                                                                            count++;
                                                                                            }
                                                                         }
                                                                         
                                                if(count==2) {
                                                             prime[p]=num[i][k];
                                                           //  cout<<p<<"test:"<<prime[p]<<endl;
                                                             p++;
                                                             }
                                                }
                        }
                                   }
void search_engine::largestprimo() {
     primo=prime[0];
     for(i=1;i<p;i++) {
                      if(primo<prime[i]) {
                                         primo=prime[i];
                                         }
                      }
     cout<<"The largest prime in "<<set<<" sets is: "<<primo<<endl;
     }
                                   
                                                                         
int main(int argc, char *argv[])
{
     search_engine a;
     a.welcome();
     a.input_sets();
     a.input_per_sets();
     a.primehunter();
     a.largestprimo();
    system("PAUSE");
    return EXIT_SUCCESS;
}
