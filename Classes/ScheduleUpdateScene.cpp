//
//  ScheduleUpdateScene.cpp
//  enjoyGame_Chapter9
//
//  Created by xiang on 2017/4/9.
//
//

#include "ScheduleUpdateScene.hpp"

Scene *ScheduleUpdateScene::createScene() {
    auto scene = Scene::create();
    auto layer = ScheduleUpdateScene::create();
    scene->addChild(layer);
    return scene;
}

bool ScheduleUpdateScene::init() {
    if (!Layer::init()) {
        return false;
    }
    
    //把当前节点添加到队列里，只要把节点添加到队列里（或许是其他结构，总之可以存放节点），那么这个节点就会在游戏运行的每一帧被调用一次update函数
    this->scheduleUpdate();
    
    return true;
}


void ScheduleUpdateScene::update(float dt) {
    log("update");
}
