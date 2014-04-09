//
//  CStateTwo.cpp
//  codeplace
//
//  Created by user on 14-4-9.
//
//

#include "CStateTwo3.h"
#include "CNPC3.h"
#include "CStateThree3.h"

void CStateTwo3::execute(CNPC3* pNPC, EMsgType eMsgType){
    // 只处理自己关心的消息
    switch (eMsgType) {
        case eMsgType_Two:
            pNPC->onStateTwo();
            pNPC->getFSM()->changeToState(new CStateThree3);
            break;
    
        default:
            break;
    }
}