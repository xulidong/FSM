//
//  CStateTwo.h
//  codeplace
//
//  Created by user on 14-4-9.
//
//

#ifndef __codeplace__CStateTwo__
#define __codeplace__CStateTwo__

#include <iostream>
#include "CBaseState.h"

class CNPC;

class CStateTwo:public CBaseState{
public:
    virtual void execute(CNPC* pNPC);
    void onStateOne();
};
#endif /* defined(__codeplace__CStateTwo__) */
