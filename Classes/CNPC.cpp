//
//  CNPC.cpp
//  codeplace
//
//  Created by user on 14-4-8.
//
//

#include "CNPC.h"
#include "CBaseState.h"

bool CNPC::init(){
    
    if (!CCNode::init()) {
        return false;
    }
    
    this->scheduleUpdate();
    
    return true;
}

void CNPC::changeToState(CBaseState* cState){
    
    m_cBaseState = cState;
}

void CNPCNode::onStateOne(){
    
    CCLog("state 1");
}

void CNPCNode::onStateTwo(){
    
    CCLog("state 2");
}

void CNPCNode::onStateThree(){
    
    CCLog("state 3");
}

bool CNPCNode::checkStateOne(){
    
    if (CCRANDOM_0_1() < 0.5f) {
        return true;
    }
    
    return false;
}

bool CNPCNode::checkStateTwo(){
    
    if (CCRANDOM_0_1() < 0.5f) {
        return true;
    }
    
    return false;
}

bool CNPCNode::checkStateThree(){
    
    if (CCRANDOM_0_1() < 0.5f) {
        return true;
    }
    
    return false;
}