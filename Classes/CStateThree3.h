//
//  CStateThree.h
//  codeplace
//
//  Created by user on 14-4-9.
//
//

#ifndef __codeplace__CStateThree__
#define __codeplace__CStateThree__

#include <iostream>
#include "CBaseState3.h"
#include "EMsgType.h"

class CNPC3;

class CStateThree3:public CBaseState3{
public:
    virtual void execute(CNPC3* pNPC, EMsgType eMsgType);
    void onStateOne();
};
#endif /* defined(__codeplace__CStateThree__) */
