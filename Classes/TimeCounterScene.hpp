//
//  TimeCounterScene.hpp
//  enjoyGame_Chapter9
//
//  Created by xiang on 2017/4/9.
//
//

#ifndef TimeCounterScene_hpp
#define TimeCounterScene_hpp

#include "cocos2d.h"
#include "TimeCounter.hpp"
USING_NS_CC;
class TimeCounterScene : public Layer {
public:
    static Scene *createScene();
    virtual bool init();
    CREATE_FUNC(TimeCounterScene);
    
    void logic(float dt);
    void doSomething(float dt);
private:
    TimeCounter *m_timeCounter;

};

#endif /* TimeCounterScene_hpp */
