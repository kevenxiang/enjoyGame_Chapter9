//
//  NotificationScene.hpp
//  enjoyGame_Chapter9
//
//  Created by xiang on 2017/4/9.
//
//

#ifndef NotificationScene_hpp
#define NotificationScene_hpp

#include "cocos2d.h"
USING_NS_CC;

class NotificationScene : public Layer {
public:
    static Scene *createScene();
    virtual bool init();
    CREATE_FUNC(NotificationScene);
    
    //发布test消息
    void sendMsg(float dt);
    
    //接收test消息的回调函数
    void testMsg(Ref *pSender);
};

#endif /* NotificationScene_hpp */
