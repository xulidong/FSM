//
//  CStateOne.cpp
//  codeplace
//
//  Created by user on 14-4-8.
//
//

#include "CStateOne2.h"
#include "CNPC2.h"
#include "CStateTwo2.h"
#include "CStateThree2.h"

void CStateOne2::execute(CNPC2* pNPC){
    
    pNPC->onStateOne();
    
    if (pNPC->checkStateTwo()) {
        pNPC->getFSM()->changeToState(new CStateTwo2());
    }
    else if (pNPC->checkStateThree()) {
        pNPC->getFSM()->changeToState(new CStateThree2());
    }
}