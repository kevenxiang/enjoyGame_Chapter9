//
//  UnScheduleScene.hpp
//  enjoyGame_Chapter9
//
//  Created by xiang on 2017/4/9.
//
//

#ifndef UnScheduleScene_hpp
#define UnScheduleScene_hpp

#include "cocos2d.h"
USING_NS_CC;

class UnScheduleScene : public Layer {
public:
    static Scene *createScene();
    virtual bool init();
    CREATE_FUNC(UnScheduleScene);
    
    virtual void update(float dt); //默认的update函数
    
    void mutUpdate(float dt);  //自定义的update函数
};

#endif /* UnScheduleScene_hpp */
