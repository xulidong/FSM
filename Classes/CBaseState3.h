//
//  CBaseState2.h
//  codeplace
//
//  Created by user on 14-4-9.
//
//

#ifndef __codeplace__CBaseState2__
#define __codeplace__CBaseState2__

#include <iostream>
#include "EMsgType.h"

class CNPC3;

class CBaseState3{
public:
    virtual ~CBaseState3() = 0;
    virtual void execute(CNPC3* pNPC, EMsgType eMsgType) = 0;
};
#endif /* defined(__codeplace__CBaseState2__) */
