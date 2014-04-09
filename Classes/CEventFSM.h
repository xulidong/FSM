//
//  CEventFSM.h
//  codeplace
//
//  Created by user on 14-4-9.
//
//

#ifndef __codeplace__CEventFSM__
#define __codeplace__CEventFSM__

#include <iostream>
#include "cocos2d.h"
/*
 在不同的状态（状态类）下，只处理自己关心的消息（消息枚举）
 */
#define NOTIFY CCNotificationCenter::sharedNotificationCenter()
#define MSG_ONE "kMessage1"
#define MSG_TWO "kMessage2"
#define MSG_THREE "kMessage3"

using namespace std;
USING_NS_CC;

class CBaseState3;
class CNPC3;

class CEventFSM : public CCNode {
public:
    ~CEventFSM();
    
    static CEventFSM* createWithNPC(CNPC3* pNPC);
    bool initWithNPC(CNPC3* pNPC);
    
    void changeToState(CBaseState3* cState);
    
private:
    void onRecvMsgOne(CCObject* obj);
    void onRecvMsgTwo(CCObject* obj);
    void onRecvMsgThree(CCObject* obj);
    
    CBaseState3* m_pCurState;

    CNPC3* m_pNPC;
};

#endif /* defined(__codeplace__CEventFSM__) */
