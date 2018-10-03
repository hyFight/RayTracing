#ifndef KDTREE_H
#define KDTREE_H
#include<QDebug>

#include <QObject>
#include <list>
#include "Point.h"
#include "Scene.h"
#include "boundrect.h"
#include <algorithm>
#include <vector>
#include "node.h"
using namespace std;

class KDTree
{
public:
    vector<BoundRect*> position;
    Node<double> *head;
public:
    KDTree(Scene *scene){
        position=scene->getKDTreeDataSet();
        sort(position.begin(),position.end(),[](const BoundRect *b1,const BoundRect *b2){
            if(b1->centre->x>b2->centre->x){
                return true;
            }else{
                return false;
            }
        });
//        for(int i=0;i<position.size();i++){
//            qDebug()<<"position:"<<position[i]->centre->x<<","<<position[i]->centre->y;
//        }
    }
    void sortPositionByX(){
        sort(position.begin(),position.end(),[](const BoundRect *b1,const BoundRect *b2){
            if(b1->centre->x>b2->centre->x){
                return true;
            }else{
                return false;
            }
        });
    }
    void sortPositionByY(){
        sort(position.begin(),position.end(),[](const BoundRect *b1,const BoundRect *b2){
            if(b1->centre->y>b2->centre->y){
                return true;
            }else{
                return false;
            }
        });
    }
    bool sortByX(const BoundRect *b1,const BoundRect *b2){
        if(b1->centre->x>b2->centre->x){
            return true;
        }else{
            return false;
        }
    }
    void formTree(){
        //
    }
};

#endif // KDTREE_H
