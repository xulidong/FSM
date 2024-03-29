//
//  CStateOne.cpp
//  codeplace
//
//  Created by user on 14-4-8.
//
//

#include "CStateOne.h"
#include "CNPC.h"
#include "CStateTwo.h"
#include "CStateThree.h"

void CStateOne::execute(CNPC* pNPC){
    
    pNPC->onStateOne();
    
    if (pNPC->checkStateTwo()) {
        pNPC->changeToState(new CStateTwo());
    }
    else if (pNPC->checkStateThree()) {
        pNPC->changeToState(new CStateThree());
    }
}