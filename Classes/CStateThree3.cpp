//
//  CStateThree.cpp
//  codeplace
//
//  Created by user on 14-4-9.
//
//

#include "CStateThree3.h"
#include "CNPC3.h"
#include "CStateOne3.h"
#include "CStateTwo3.h"

void CStateThree3::execute(CNPC3* pNPC, EMsgType eMsgType){
    
    pNPC->onStateThree();
    
    if (pNPC->checkStateOne()) {
        pNPC->getFSM()->changeToState(new CStateOne3());
    }
    else if (pNPC->checkStateTwo()) {
        pNPC->getFSM()->changeToState(new CStateTwo3());
    }
}