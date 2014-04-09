//
//  CStateThree.cpp
//  codeplace
//
//  Created by user on 14-4-9.
//
//

#include "CStateThree3.h"
#include "CNPC3.h"
#include "CStateOne3.h"

void CStateThree3::execute(CNPC3* pNPC, EMsgType eMsgType){
    // 只处理自己关心的消息
    switch (eMsgType) {
        case eMsgType_Three:
            pNPC->onStateThree();
            pNPC->getFSM()->changeToState(new CStateThree3);
            break;
            
        default:
            break;
    }
}