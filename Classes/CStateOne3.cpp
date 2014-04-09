//
//  CStateOne.cpp
//  codeplace
//
//  Created by user on 14-4-8.
//
//

#include "CStateOne3.h"
#include "CNPC3.h"
#include "CStateTwo3.h"
#include "CStateThree3.h"

void CStateOne3::execute(CNPC3* pNPC, EMsgType eMsgType){
    
    pNPC->onStateOne();
    
    if (pNPC->checkStateTwo()) {
        pNPC->getFSM()->changeToState(new CStateTwo3());
    }
    else if (pNPC->checkStateThree()) {
        pNPC->getFSM()->changeToState(new CStateThree3());
    }
}