#include <bits/stdc++.h>
using namespace std;
// class linked_list{
// private:
//     linked_list* least = 0;
//     int value = 0;
//     linked_list* next = 0;
// public:
//     void setLast(linked_list* x){
//         least = x;
//     }
//     void setValue(int x){
//         value = x;
//     }
//     void setNext(linked_list* x){
//         next = x;
//     }
//     linked_list* getLast(){
//         return least;
//     }
//     int getValue(){
//         return value;
//     }
//     linked_list* getNext(){
//         return next;
//     }
//     void SETT(linked_list *x,int y,linked_list *z){
//         setLast(x);
//         setValue(y);
//         setNext(z);
//     }
// };

class dlist{
    struct Punct
    {
        Punct* prev;
        int x;
        Punct* next;
    };
    Punct H;Punct L;
    H.prev=nullptr;L.prev=nullptr;
    H.next=nullptr;L,next=nullptr;

    void linsert(int n){
        if (H.next==nullptr){
            H.x=n;
            return;
        };
        i=new Punct;
        L.next=i;
        i.prev=L;
        L=i;
        L.x=n;
    };
    int ldel(){
        int cx=L.x;
        L->prev.next=nullptr;
        L=L.prev;
        return cx;
    };
    int fdel(){
        int cx=H.x;
        H->next.prev=nullptr;
        H=H.next;
        return cx;
    };

    
};
class stiva{
    dlist S;


    void push(int k){
        S.linsert(k);
    };
    int pop(){
        if (S.H.next==nullptr){
            return NULL;
        }
        
    };

};
int main(){



    return 0;
}