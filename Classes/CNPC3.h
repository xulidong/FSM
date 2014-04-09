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
#include "CEventFSM.h"

using namespace std;
USING_NS_CC;

class CBaseState3;

class CNPC3:public CCNode{
public:
    ~CNPC3();
    
    CREATE_FUNC(CNPC3);
    virtual bool init();
    
    void onStateOne();
    void onStateTwo();
    void onStateThree();
    bool checkStateOne();
    bool checkStateTwo();
    bool checkStateThree();
    
    virtual void update(float dt);
    
    CEventFSM* getFSM();
    
protected:
    CEventFSM* m_pFSM;
};
#endif /* defined(__codeplace__CNPC2__) */
