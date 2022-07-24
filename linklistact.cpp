#include <cstdlib>
#include <iostream>
#include <stdlib.h>
using namespace std;

typedef struct node {
        int data;
        node* next;
        }*nodePtr;
nodePtr head;
nodePtr curr;
nodePtr temp;
nodePtr extra;
nodePtr maxi; 

class list_engine {
      public:
             int checker;
             list_engine();
             void refresh();
             void primechecker(int);
             node* create_node(int);
             void insert_begin();
             void insert_last();
             void insert_position();
             void display();
             void display_largestprime();
};

list_engine::list_engine() {
                           head = NULL;
                           curr = NULL;
                           temp = NULL;
                           extra = NULL;
                           }
                           
void list_engine::refresh() {
     system("cls");
     }
     
void list_engine::primechecker(int value){
    int count=0,r;
    checker =0;
    for(r=1;r<=value;r++) {
    if(value%r==0) {
                   count++;
                   }
                           }
    if(count!=2) {
                 cout<<"This Value is not a Prime!"<<endl;
                 }
    else {
         checker++;
         }
         }

node*list_engine::create_node(int value){
                                nodePtr n = new node;
                                if(n== NULL) {
                                       cout<<"Memory failed to Allocate!"<<endl;
                                       return 0;
                                       }
                                else {
                                n->data = value;
                                n->next = NULL;
                                return n;
                                }
                                }
                                
void list_engine::insert_begin() {
     int value;
     cout<<"Enter the value:"<<endl;
     cin>>value;
     primechecker(value);
     if(checker!=0) {
                    curr = create_node(value);
     if(head == NULL) {
             head = curr;
             head->next = NULL;
                              display_largestprime();
                  cout<<endl;
                      }
     else {
          temp=head;
          head = curr;
          head->next = temp;
                            display_largestprime();
                  cout<<endl;
          }
          }
          }
          
void list_engine::insert_last(){
     int value;
     cout<<"Enter the value:"<<endl;
     cin>>value;
     primechecker(value);
     if(checker!=0) {
                    curr = create_node(value);
                    if(head==NULL) {
                    head = curr;
                    head->next = NULL;
                                      display_largestprime();
                  cout<<endl;
                    }
                    else {
                         temp = head;
                         while (temp->next != NULL) {
                               temp = temp->next;
                               }
                         curr->next = NULL;
                         temp->next = curr;
                                          display_largestprime();
                  cout<<endl;
                         }
                         }
                         }
                         
void list_engine::insert_position() {
     int value, pos, counter, i;
     cout<<"Enter the value:"<<endl;
     cin>>value;
     primechecker(value);
     if(checker!=0) {
                    curr = create_node(value);
                    cout<<"Enter the position to be change value:"<<endl;
                    cin>>pos;
                    if(head == NULL) {
                            head = curr;
                            head->next = NULL;
                                              display_largestprime();
                  cout<<endl;
                            }
                    else {
                         temp = head;
                         while(temp!=NULL) {
                         temp = temp->next;
                         counter++;
                         }
                    if(pos==1) {
                               extra=head;
                               head=curr;
                               head->next = extra;
                                                 display_largestprime();
                  cout<<endl;
                               }
                    else if (pos>1 && pos<=counter) {
                         temp = head;
                         for(i=1;i<pos;i++) {
                         extra = temp;
                         temp=temp->next;
                         }
                         extra->next = curr;
                         curr->next=temp;
                                          display_largestprime();
                  cout<<endl;
                         }
                    else if(pos>1 && pos>counter) {
                         cout<<"The Position is out of range!"<<endl;
                                          display_largestprime();
                  cout<<endl;
                         }
                         }
                         }
                         }
                         
void list_engine::display() {
     if(head == NULL) {
             cout<<"The List is empty!"<<endl;
             }
             else {
                  temp = head;
                  while(temp!=NULL){
                  cout<<temp->data<<"->";
                  temp=temp->next;
                  }
                  }
                  cout<<endl;
                 display_largestprime();
                  cout<<endl;
                  }
                  
                  
void list_engine::display_largestprime(){
     temp = head;
     maxi = head;
     while (temp->next != NULL) {
           extra = temp->next;
           if(maxi->data<extra->data) {
           maxi = extra;
           }
           temp = extra;
           }
     cout<<"The largest prime in the list is "<<maxi->data<<"."<<endl;
     }
                                               
                         
int main(int argc, char *argv[])
{
    list_engine dl;
    int buff=1;
    char command;
    while(buff) {
                cout<<endl<<"Menu:"<<endl;
                cout<<"[A]Insert Node at beginning:"<<endl;
                cout<<"[B]Insert Node at last:"<<endl;
                cout<<"[C]Insert Node at a given position:"<<endl;
                cout<<"[D]Display:"<<endl;
                cout<<"[E]Exit:"<<endl;
                cin>>command;
                if(command=='A' || command=='a') {
                                dl.refresh();
                                cout<<"Insert Node at Beginning:"<<endl;
                                dl.insert_begin();
                                }
                else if(command=='B' || command=='b'){
                     dl.refresh();
                     cout<<"Insert Node at Last:"<<endl;
                     dl.insert_last();
                     }
                else if(command=='C' || command=='c'){
                     dl.refresh();
                     cout<<"Insert Node at a given Position:"<<endl;
                     dl.insert_position();
                     }
                else if(command=='D' || command=='d'){
                     dl.refresh();
                     cout<<"Display Mode:"<<endl;
                     dl.display();
                  cout<<endl;
                     }
                else if(command=='E' || command=='e'){
                     buff--;
                     }
                     }
    system("PAUSE");
    return EXIT_SUCCESS;
}
