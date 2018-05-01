#include<iostream>

using namespace std;

class LinkedList{
public:
  LinkedList(int i){
    initiate(i);
  }

  void add(int i){
    insert(i);
  }

  void list(){
    print();
  }
private:
  struct node{
    int x;
    node *next;
  };

  node *root;
  node *conductor;

  void initiate(int i){
  root = new node;
  root->next = 0;
  root->x = i;
  conductor = root;
  };

  void insert(int i){
      node *temp;
      temp = new node;
      temp->x = i;
      bool inserted = false;
      conductor = root;
      while(!inserted){
        if(conductor->next->x > i){
          temp->next = conductor->next;
          conductor->next = temp;
          inserted = true;
        }
        else if(){

        }
        else
      }
  };

  void print(){
    conductor = root;
    if(conductor != 0){
      cout << conductor->x << endl;
      while(conductor->next != 0){
        conductor = conductor->next;
        cout << conductor->x << endl;
      }
    }
  };
};
