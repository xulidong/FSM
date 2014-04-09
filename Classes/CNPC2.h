//
//  CNPC2.h
//  codeplace
//
//  Created by user on 14-4-9.
//
//

#ifndef __codeplace__CNPC2__
#define __codeplace__CNPC2__

#include <iostream>
#include "cocos2d.h"
#include "CFSM.h"

using namespace std;
USING_NS_CC;

class CBaseState2;

class CNPC2:public CCNode{
public:
    ~CNPC2();
    
    CREATE_FUNC(CNPC2);
    virtual bool init();
    
    void onStateOne();
    void onStateTwo();
    void onStateThree();
    bool checkStateOne();
    bool checkStateTwo();
    bool checkStateThree();
    
    virtual void update(float dt);
    
    CFSM* getFSM();
    
protected:
    CFSM* m_pFSM;
};
#endif /* defined(__codeplace__CNPC2__) */
