//
//  CStateOne.h
//  codeplace
//
//  Created by user on 14-4-8.
//
//

#ifndef __codeplace__CStateOne__
#define __codeplace__CStateOne__

#include <iostream>
#include "CBaseState.h"

class CNPC;

class CStateOne:public CBaseState{
public:
    virtual void execute(CNPC* pNPC);
    void onStateOne();
};

#endif /* defined(__codeplace__CStateOne__) */
