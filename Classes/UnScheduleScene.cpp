//
//  UnScheduleScene.cpp
//  enjoyGame_Chapter9
//
//  Created by xiang on 2017/4/9.
//
//

#include "UnScheduleScene.hpp"

Scene *UnScheduleScene::createScene() {
    auto scene = Scene::create();
    auto layer = UnScheduleScene::create();
    scene->addChild(layer);
    return scene;
}

bool UnScheduleScene::init() {
    if (!Layer::init()) {
        return false;
    }
    
    this->scheduleUpdate();
    
    this->schedule(schedule_selector(UnScheduleScene::mutUpdate), 2.0f);
    
    return true;
}

void UnScheduleScene::mutUpdate(float dt) {

}

void UnScheduleScene::update(float dt) {
    log("update");
    this->unscheduleUpdate();
}

























