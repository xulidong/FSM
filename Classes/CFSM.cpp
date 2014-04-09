//
//  CFSM.cpp
//  codeplace
//
//  Created by user on 14-4-9.
//
//

#include "CFSM.h"
#include "CNPC2.h"
#include "CBaseState2.h"

CFSM::~CFSM(){
    
    CC_SAFE_DELETE(m_pNPC);
    CC_SAFE_DELETE(m_cCurState);
}

CFSM* CFSM::createWithNPC(CNPC2* pNPC){
    
    CFSM* pFSM = new CFSM();
    if (pFSM && pFSM->initWithNPC(pNPC)) {
        pFSM->autorelease();
    }
    else{
        CC_SAFE_DELETE(pFSM);
    }
    
    return pFSM;
}

bool CFSM::initWithNPC(CNPC2* pNPC){

    if (!CCNode::init()) {
        return false;
    }
    
    m_cCurState = NULL;
    m_pNPC = pNPC;
    m_pNPC->retain();
    
    return true;
}

void CFSM::changeToState(CBaseState2* cState){

    CC_SAFE_DELETE(m_cCurState);
    
    m_cCurState = cState;
}

void CFSM::update(float dt){

    this->m_cCurState->execute(m_pNPC);
}