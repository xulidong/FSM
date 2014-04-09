//
//  CFSM.h
//  codeplace
//
//  Created by user on 14-4-9.
//
//

#ifndef __codeplace__CFSM__
#define __codeplace__CFSM__

#include <iostream>
#include "cocos2d.h"

using namespace std;
USING_NS_CC;

class CBaseState2;
class CNPC2;

class CFSM:public CCNode{
public:
    ~CFSM();
    
    static CFSM* createWithNPC(CNPC2 *pNPC);
    bool initWithNPC(CNPC2 *pNPC);
    
    virtual void update(float dt);
    void changeToState(CBaseState2* cState);

protected:
    CBaseState2* m_cCurState;
    CNPC2* m_pNPC;
};

#endif /* defined(__codeplace__CFSM__) */
