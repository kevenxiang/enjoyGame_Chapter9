//
//  ScheduleUpdateScene.hpp
//  enjoyGame_Chapter9
//
//  Created by xiang on 2017/4/9.
//
//

#ifndef ScheduleUpdateScene_hpp
#define ScheduleUpdateScene_hpp

#include "cocos2d.h"
USING_NS_CC;

class ScheduleUpdateScene : public Layer {
public:
    static Scene *createScene();
    virtual bool init();
    CREATE_FUNC(ScheduleUpdateScene);
    
    //重写update函数
    virtual void update(float dt);
};

#endif /* ScheduleUpdateScene_hpp */









































