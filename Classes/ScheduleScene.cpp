//
//  ScheduleScene.cpp
//  enjoyGame_Chapter9
//
//  Created by xiang on 2017/4/9.
//
//

#include "ScheduleScene.hpp"

Scene *ScheduleScene::createScene() {
    auto scene = Scene::create();
    auto layer = ScheduleScene::create();
    scene->addChild(layer);
    return scene;
}

bool ScheduleScene::init() {
    if (!Layer::init()) {
        return false;
    }
    
    //指定每帧执行自定义的函数
    this->schedule(schedule_selector(ScheduleScene::mutUpdate), 2.0f);
    
    return true;
}


void ScheduleScene::mutUpdate(float dt) {
    log("MutUpdate dt= %f", dt);
}















































