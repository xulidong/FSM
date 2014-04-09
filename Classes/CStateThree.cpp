//
//  CStateThree.cpp
//  codeplace
//
//  Created by user on 14-4-9.
//
//

#include "CStateThree.h"
#include "CNPC.h"
#include "CStateOne.h"
#include "CStateThree.h"

void CStateThree::execute(CNPC* pNPC){
    
    pNPC->onStateThree();
    
    if (pNPC->checkStateTwo()) {
        pNPC->changeToState(new CStateOne());
    }
    else if (pNPC->checkStateThree()) {
        pNPC->changeToState(new CStateThree());
    }
}