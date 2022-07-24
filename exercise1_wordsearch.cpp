#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <cstdio>
//Exercise # 1::Word search

using namespace std;

void refresh();

void refresh() {
     system("cls");
     }

 main()
{
    char sentence[100], word[100][100], target[100];
    int i,x,z,len, max=0,limit=0,range,count=0, found=0;
    cout<<"Enter word(s):";
    gets(sentence);
    cout<<"Enter the target:";
    gets(target);
    len=strlen(sentence);
    range=strlen(target);
    for ( i=0; i<=len; i++) {
        if(sentence[i]== '\0' || sentence[i]== ' ') {
                         word[max][limit]= '\0';
                         limit=-1;
                         max++;
                         }
        word[max][limit]=sentence[i];
        limit++;
        }
    for (i=0;i<max;i++) {
        count=0;
   //checkers     cout<<word[i]<<" count is"<<strlen(word[i])<<endl;
        if(range == (strlen(word[i]))) {
                 for(x=0,z=0; x<range,z<range;x++,z++) {
                         if(target[x]==word[i][z]) {
                                                   count++;
                                                   }
                                                   }
                                                   }
        if(count==range) {
                         found++;
                         }
                         }
    if(found!=0) {
                 cout<<target<<" has found "<<found<<" time(s)."<<endl;
                 }
    else {
         cout<<target<<" is not found"<<endl;
         }
                 
                         
    system("PAUSE");
    return EXIT_SUCCESS;
}
