//
//  CNPC.h
//  codeplace
//
//  Created by user on 14-4-8.
//
//

#ifndef __codeplace__CNPC__
#define __codeplace__CNPC__

#include <iostream>
#include "cocos2d.h"

class CBaseState;

using namespace std;
USING_NS_CC;

class CNPC:public CCNode{
public:
    CREATE_FUNC(CNPC);
    virtual bool init();
    
    void changeToState(CBaseState *pBaseState);
    void onStateOne();
    void onStateTwo();
    void onStateThree();
    bool checkStateOne();
    bool checkStateTwo();
    bool checkStateThree();
    
protected:
    CBaseState* m_cBaseState;
};

#endif /* defined(__codeplace__CNPC__) */
