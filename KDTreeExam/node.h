#ifndef NODE_H
#define NODE_H
class Node<T>
{
public:
    T *t;
    Node<T*> *left;
    Node<T*> *right;
public:
    Node<T>() {}

};
#endif // NODE_H
