//
//  CNPC2.cpp
//  codeplace
//
//  Created by user on 14-4-9.
//
//

#include "CNPC3.h"
#include "CBaseState2.h"

CNPC3::~CNPC3(){

    CC_SAFE_DELETE(m_pFSM);
}

bool CNPC3::init(){
    
    if (!CCNode::init()) {
        return false;
    }
    
    m_pFSM = CEventFSM::createWithNPC(this);
    m_pFSM->retain();
    
    scheduleUpdate();
    
    return true;
}

void CNPC3::update(float dt){
    
    m_pFSM->update(dt);
}

void CNPC3::onStateOne(){
    
    CCLog("state 1");
}

void CNPC3::onStateTwo(){
    
    CCLog("state 2");
}

void CNPC3::onStateThree(){
    
    CCLog("state 3");
}

bool CNPC3::checkStateOne(){
    
    if (CCRANDOM_0_1() < 0.5f) {
        return true;
    }
    
    return false;
}

bool CNPC3::checkStateTwo(){
    
    if (CCRANDOM_0_1() < 0.5f) {
        return true;
    }
    
    return false;
}

bool CNPC3::checkStateThree(){
    
    if (CCRANDOM_0_1() < 0.5f) {
        return true;
    }
    
    return false;
}

CEventFSM* CNPC3::getFSM(){
    return m_pFSM;
}