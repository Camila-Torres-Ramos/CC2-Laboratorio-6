#ifndef __ITERATORLIST__H__
#define __ITERATORLIST__H__

#include "linkedlist.h"
template<typename T>
class IteratorList;

template<typename T>
class IteratorList{
    private:
        LinkedList<L> stack;
        Node<L>* iterador;
    public:
        Iteratorlist(LinkedList<L>);
        bool HaveNext();
        void First();
        void Next();
        Node<T>* Current();
};

template<typename L>
Iteratorlist<L>::Iteratorlist(Linkedlist<L> list){
    this->stack = list;
    this->iterador = stack.Begin();
}

template<typename L>
bool Iteratorlist<L>::HaveNext(){
    return (iterador != stack.End());
}

template<typename L>
void Iteratorlist<L>::First(){
    iterador=stack.Begin();
}

template<typename L>
void IteratorList<L>::Next(){
    iterador=iterador->getNext();
}

template<typename L>
Node<L>* Iteratorlist<L>::Current(){
    return iterador;
}
#endif