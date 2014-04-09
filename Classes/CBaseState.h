//
//  CBaseState.h
//  codeplace
//
//  Created by user on 14-4-8.
//
//

#ifndef __codeplace__CBaseState__
#define __codeplace__CBaseState__

#include <iostream>

class CNPC;

class CBaseState{
public:
    virtual ~CBaseState() = 0;
    
    virtual void execute(CNPC* pNPC) = 0;
};

#endif /* defined(__codeplace__CBaseState__) */
