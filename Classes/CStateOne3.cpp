//
//  CStateOne.cpp
//  codeplace
//
//  Created by user on 14-4-8.
//
//

#include "CStateOne3.h"
#include "CNPC3.h"
#include "CStateTwo3.h"

void CStateOne3::execute(CNPC3* pNPC, EMsgType eMsgType){
    // 只处理自己关心的消息
    switch (eMsgType) {
        case eMsgType_One:
            pNPC->onStateOne();
            pNPC->getFSM()->changeToState(new CStateTwo3);
            break;
            
        default:
            break;
    }
}