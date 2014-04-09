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

class CNPC2;

class CBaseState2{
public:
    virtual ~CBaseState2() = 0;
    
    virtual void execute(CNPC2* pNPC) = 0;
};
#endif /* defined(__codeplace__CBaseState2__) */
