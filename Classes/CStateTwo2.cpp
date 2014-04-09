//
//  CStateTwo.cpp
//  codeplace
//
//  Created by user on 14-4-9.
//
//

#include "CStateTwo2.h"
#include "CNPC2.h"
#include "CStateOne2.h"
#include "CStateThree2.h"

void CStateTwo2::execute(CNPC2* pNPC){
    
    pNPC->onStateTwo();
    
    if (pNPC->checkStateOne()) {
        pNPC->getFSM()->changeToState(new CStateOne2());
    }
    else if (pNPC->checkStateThree()) {
        pNPC->getFSM()->changeToState(new CStateThree2());
    }
}