//
//  ScheduleScene.hpp
//  enjoyGame_Chapter9
//
//  Created by xiang on 2017/4/9.
//
//

#ifndef ScheduleScene_hpp
#define ScheduleScene_hpp

#include "cocos2d.h"
USING_NS_CC;
class ScheduleScene : public Layer {
public:
    static Scene *createScene();
    virtual bool init();
    CREATE_FUNC(ScheduleScene);
    
    void mutUpdate(float dt);  //自定义的update函数
};

#endif /* ScheduleScene_hpp */
