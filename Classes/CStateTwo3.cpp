//
//  CStateTwo.cpp
//  codeplace
//
//  Created by user on 14-4-9.
//
//

#include "CStateTwo3.h"
#include "CNPC3.h"
#include "CStateOne3.h"
#include "CStateThree3.h"

void CStateTwo3::execute(CNPC3* pNPC, EMsgType eMsgType){
    
    pNPC->onStateTwo();
    
    if (pNPC->checkStateOne()) {
        pNPC->getFSM()->changeToState(new CStateOne3());
    }
    else if (pNPC->checkStateThree()) {
        pNPC->getFSM()->changeToState(new CStateThree3());
    }
}