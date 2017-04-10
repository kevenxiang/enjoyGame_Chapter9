//
//  OtherLayer.cpp
//  enjoyGame_Chapter9
//
//  Created by xiang on 2017/4/9.
//
//

#include "OtherLayer.hpp"

bool OtherLayer::init() {
    if (!Layer::init()) {
        return false;
    }
    
    //订阅消息类型为test的消息，不传递数据
    NotificationCenter::getInstance()->addObserver(this, callfuncO_selector(OtherLayer::testMsg), "test", NULL);
    
    return true;
}

void OtherLayer::testMsg(cocos2d::Ref *pData) {
//    log("testMsg in OtherLayer:");
    log("testMsg in OtherLayer:%s", pData);
}

