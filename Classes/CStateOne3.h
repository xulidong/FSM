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
#include "CBaseState3.h"
#include "EMsgType.h"

class CNPC3;

class CStateOne3:public CBaseState3{
public:
    virtual void execute(CNPC3* pNPC, EMsgType eMsgType);
    void onStateOne();
};

#endif /* defined(__codeplace__CStateOne__) */
