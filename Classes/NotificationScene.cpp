//
//  NotificationScene.cpp
//  enjoyGame_Chapter9
//
//  Created by xiang on 2017/4/9.
//
//

#include "NotificationScene.hpp"
#include "OtherLayer.hpp"

Scene *NotificationScene::createScene() {
    auto scene = Scene::create();
    auto layer = NotificationScene::create();
    scene->addChild(layer);
    
    auto otherLayer = OtherLayer::create();
    scene->addChild(otherLayer);

    return scene;
}

bool NotificationScene::init() {
    if (!Layer::init()) {
        return false;
    }
    
    //订阅消息类型为test的消息，不传递数据
//    NotificationCenter::getInstance()->addObserver(this, callfuncO_selector(NotificationScene::testMsg), "test", NULL);
    
    
    
    //3秒后发布test消息
    this->schedule(schedule_selector(NotificationScene::sendMsg), 3.0f);
    
    return true;
}

void NotificationScene::sendMsg(float dt) {
    //发布test消息，不传递数据
    NotificationCenter::getInstance()->postNotification("test", (Ref *)"HelloWorld Msg!");
}

//void NotificationScene::testMsg(cocos2d::Ref *pSender) {
//    log("testMsg");
//}



















