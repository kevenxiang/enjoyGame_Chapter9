//
//  CallbackTimeCounter.hpp
//  enjoyGame_Chapter9
//
//  Created by xiang on 2017/4/9.
//
//

#ifndef CallbackTimeCounter_hpp
#define CallbackTimeCounter_hpp

#include "cocos2d.h"
USING_NS_CC;

class CallbackTimeCounter : public Node {
public:
    CREATE_FUNC(CallbackTimeCounter);
    virtual bool init();
    virtual void update(float dt);
    
    //开始计时，指定回调时间和回调函数
    void start(float fCBTime, std::function<void()> func);
    
private:
    float m_fTime;       //用于计时
    float m_fCBTime;     //回调的时间
    bool m_isCounting;   //标记是否在计时
    
    std::function<void()> m_func;  //回调函数
};

#endif /* CallbackTimeCounter_hpp */





















