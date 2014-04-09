//
//  CNPC2.cpp
//  codeplace
//
//  Created by user on 14-4-9.
//
//

#include "CNPC2.h"
#include "CBaseState2.h"

CNPC2::~CNPC2(){

    CC_SAFE_DELETE(m_pFSM);
}

bool CNPC2::init(){
    
    if (!CCNode::init()) {
        return false;
    }
    
    m_pFSM = CFSM::createWithNPC(this);
    m_pFSM->retain();
    
    scheduleUpdate();
    
    return true;
}

void CNPC2::update(float dt){
    
    m_pFSM->update(dt);
}

void CNPC2::onStateOne(){
    
    CCLog("state 1");
}

void CNPC2::onStateTwo(){
    
    CCLog("state 2");
}

void CNPC2::onStateThree(){
    
    CCLog("state 3");
}

bool CNPC2::checkStateOne(){
    
    if (CCRANDOM_0_1() < 0.5f) {
        return true;
    }
    
    return false;
}

bool CNPC2::checkStateTwo(){
    
    if (CCRANDOM_0_1() < 0.5f) {
        return true;
    }
    
    return false;
}

bool CNPC2::checkStateThree(){
    
    if (CCRANDOM_0_1() < 0.5f) {
        return true;
    }
    
    return false;
}

CFSM* CNPC2::getFSM(){
    return m_pFSM;
}