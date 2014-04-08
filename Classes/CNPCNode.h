//
//  CNPCNode.h
//  codeplace
//
//  Created by user on 14-4-8.
//
//

#ifndef __codeplace__CNPCNode__
#define __codeplace__CNPCNode__

#include <iostream>
#include "cocos2d.h"

USING_NS_CC;
using namespace std;


enum EState{
    eState_One,
    eState_Two,
    eState_Three
};

class CNPCNode:public CCNode{
public:
    CREATE_FUNC(CNPCNode);
    virtual bool init();
    
    void changeToState(EState eState);
    void onStateOne();
    void onStateTwo();
    void onStateThree();
    bool checkStateOne();
    bool checkStateTwo();
    bool checkStateThree();
    
    virtual void update(float dt);
protected:
    EState m_eCurState;
};

#endif /* defined(__codeplace__CNPCNode__) */
