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
#include "CBaseState.h"

class CNPC;

class CStateThree:public CBaseState{
public:
    virtual void execute(CNPC* pNPC);
    void onStateOne();
};
#endif /* defined(__codeplace__CStateThree__) */
