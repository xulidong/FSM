//
//  CStateTwo.cpp
//  codeplace
//
//  Created by user on 14-4-9.
//
//

#include "CStateTwo.h"
#include "CNPC.h"
#include "CStateOne.h"
#include "CStateThree.h"

void CStateTwo::execute(CNPC* pNPC){
    
    pNPC->onStateTwo();
    
    if (pNPC->checkStateOne()) {
        pNPC->changeToState(new CStateOne());
    }
    else if (pNPC->checkStateThree()) {
        pNPC->changeToState(new CStateThree());
    }
}