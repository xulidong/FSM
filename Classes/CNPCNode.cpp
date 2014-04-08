//
//  CNPCNode.cpp
//  codeplace
//
//  Created by user on 14-4-8.
//
//

#include "CNPCNode.h"

bool CNPCNode::init(){

    if (!CCNode::init()) {
        return false;
    }
    
    this->scheduleUpdate();
    
    return true;
}

void CNPCNode::update(float dt){

    switch (m_eCurState) {
        case eState_One:
            onStateOne();
            if (checkStateTwo()) {
                changeToState(eState_Two);
            }
            else if (checkStateThree()) {
                changeToState(eState_Three);
            }
            break;
        
        case eState_Two:
            this->onStateTwo();
            
            if (checkStateOne()) {
                changeToState(eState_One);
            }
            else if (checkStateThree()) {
                changeToState(eState_Three);
            }
            break;
            
        case eState_Three:
            onStateThree();
            if (checkStateOne()) {
                changeToState(eState_One);
            }
            else if (checkStateTwo()) {
                changeToState(eState_Two);
            }
            break;
        
        default:
            break;
    }
}

void CNPCNode::changeToState(EState eState){

    m_eCurState = eState;
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