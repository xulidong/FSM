//
//  CEventFSM.cpp
//  codeplace
//
//  Created by user on 14-4-9.
//
//

#include "CEventFSM.h"
#include "CNPC3.h"
#include "CBaseState3.h"
#include "EMsgType.h"

#define NOTIFY CCNotificationCenter::sharedNotificationCenter() 
#define MSG_ONE "kMessage1"
#define MSG_TWO "kMessage2"
#define MSG_THREE "kMessage3"

CEventFSM::~CEventFSM() {
    
    NOTIFY->removeObserver(this, MSG_ONE);
    NOTIFY->removeObserver(this, MSG_TWO);
    NOTIFY->removeObserver(this, MSG_THREE);
    
    CC_SAFE_DELETE(m_pCurState);
    CC_SAFE_DELETE(m_pNPC);
}

CEventFSM* CEventFSM::createWithNPC(CNPC3* pNPC) {
    
    CEventFSM* pFSM = new CEventFSM();
    
    if(pFSM && pFSM->initWithNPC(pNPC)) {
        pFSM->autorelease();
    }
    else {
        CC_SAFE_DELETE(pFSM);
    }
    
    return pFSM;
}

bool CEventFSM::initWithNPC(CNPC3* pNPC) {
    
    this->m_pCurState = NULL;
    this->m_pNPC = pNPC;
    m_pNPC->retain();
    
    NOTIFY->addObserver(this,callfuncO_selector(CEventFSM::onRecvMsgOne) , MSG_ONE, NULL);
    NOTIFY->addObserver(this,callfuncO_selector(CEventFSM::onRecvMsgTwo) , MSG_TWO, NULL);
    NOTIFY->addObserver(this,callfuncO_selector(CEventFSM::onRecvMsgThree) ,MSG_THREE, NULL);
    
    return true;
}

void CEventFSM::changeToState(CBaseState3* pState) {
    
    CC_SAFE_DELETE(m_pCurState);
    this->m_pCurState = pState;
}

void CEventFSM::onRecvMsgOne( CCObject* obj ) {
    
    this->m_pCurState->execute(m_pNPC, eMsgType_One);
}

void CEventFSM::onRecvMsgTwo( CCObject* obj ) {
    
    this->m_pCurState->execute(m_pNPC, eMsgType_Two);
}

void CEventFSM::onRecvMsgThree( CCObject* obj ) {
    
    this->m_pCurState->execute(m_pNPC, eMsgType_Three);
}