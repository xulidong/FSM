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
#include "CBaseState2.h"

class CNPC2;

class CStateOne2:public CBaseState2{
public:
    virtual void execute(CNPC2* pNPC);
    void onStateOne();
};

#endif /* defined(__codeplace__CStateOne__) */
