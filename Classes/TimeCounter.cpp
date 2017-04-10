//
//  TimeCounter.cpp
//  enjoyGame_Chapter9
//
//  Created by xiang on 2017/4/9.
//
//

#include "TimeCounter.hpp"

bool TimeCounter::init() {
    return true;
}

void TimeCounter::update(float dt) {
    m_fTime += dt;
}

float TimeCounter::getfCurTime() {
    return m_fTime;
}

void TimeCounter::start() {
    m_fTime = 0;
    this->scheduleUpdate();
}
