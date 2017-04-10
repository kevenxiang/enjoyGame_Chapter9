//
//  TimeCounterScene.cpp
//  enjoyGame_Chapter9
//
//  Created by xiang on 2017/4/9.
//
//

#include "TimeCounterScene.hpp"
#include "CallbackTimeCounter.hpp"

Scene *TimeCounterScene::createScene() {
    auto scene = Scene::create();
    auto layer = TimeCounterScene::create();
    scene->addChild(layer);
    return scene;
}

bool TimeCounterScene::init() {
    if (!Layer::init()) {
        return false;
    }
    
    /*
    //创建计时器，要添加到场景
    m_timeCounter = TimeCounter::create();
    this->addChild(m_timeCounter);
    
    //开始计时
    m_timeCounter->start();
    
    this->schedule(schedule_selector(TimeCounterScene::logic), 1.0f);
    this->schedule(schedule_selector(TimeCounterScene::doSomething));
     */
    
    //创建定时器
    CallbackTimeCounter *cbTimeCounter = CallbackTimeCounter::create();
    this->addChild(cbTimeCounter);
    
    //开始计时，5秒后回调函数
    cbTimeCounter->start(5.0f, [&](){
        auto sprite = Sprite::create("sprite.png");
        sprite->setPosition(Point(200, 180));
        this->addChild(sprite);
    });
    
    
    return true;
}

void TimeCounterScene::logic(float dt) {
    log("%f", m_timeCounter->getfCurTime());
}

void TimeCounterScene::doSomething(float dt) {
    for (int i = 0; i < 9999999; i++) {
        
    }
}





















