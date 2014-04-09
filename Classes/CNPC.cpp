//
//  CNPC.cpp
//  codeplace
//
//  Created by user on 14-4-8.
//
//

#include "CNPC.h"
#include "CBaseState.h"

CNPC::~CNPC(){

    CC_SAFE_DELETE(m_cCurState);
}

bool CNPC::init(){
    
    if (!CCNode::init()) {
        return false;
    }
    
    m_cCurState = NULL;
    
    scheduleUpdate();
    
    return true;
}

void CNPC::update(float dt){

    m_cCurState->execute(this);
}

void CNPC::changeToState(CBaseState* cState){
    
    CC_SAFE_DELETE(m_cCurState);// 如果基本定义为抽象类，这里会出现警告
    m_cCurState = cState;
}

void CNPC::onStateOne(){
    
    CCLog("state 1");
}

void CNPC::onStateTwo(){
    
    CCLog("state 2");
}

void CNPC::onStateThree(){
    
    CCLog("state 3");
}

bool CNPC::checkStateOne(){
    
    if (CCRANDOM_0_1() < 0.5f) {
        return true;
    }
    
    return false;
}

bool CNPC::checkStateTwo(){
    
    if (CCRANDOM_0_1() < 0.5f) {
        return true;
    }
    
    return false;
}

bool CNPC::checkStateThree(){
    
    if (CCRANDOM_0_1() < 0.5f) {
        return true;
    }
    
    return false;
}