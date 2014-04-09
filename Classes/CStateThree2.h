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
#include "CBaseState2.h"

class CNPC2;

class CStateThree2:public CBaseState2{
public:
    virtual void execute(CNPC2* pNPC);
    void onStateOne();
};
#endif /* defined(__codeplace__CStateThree__) */
