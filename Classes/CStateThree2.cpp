//
//  CStateThree.cpp
//  codeplace
//
//  Created by user on 14-4-9.
//
//

#include "CStateThree2.h"
#include "CNPC2.h"
#include "CStateOne2.h"
#include "CStateTwo2.h"

void CStateThree2::execute(CNPC2* pNPC){
    
    pNPC->onStateThree();
    
    if (pNPC->checkStateTwo()) {
        pNPC->getFSM()->changeToState(new CStateOne2());
    }
    else if (pNPC->checkStateTwo()) {
        pNPC->getFSM()->changeToState(new CStateTwo2());
    }
}