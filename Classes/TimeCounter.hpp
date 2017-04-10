//
//  TimeCounter.hpp
//  enjoyGame_Chapter9
//
//  Created by xiang on 2017/4/9.
//
//

#ifndef TimeCounter_hpp
#define TimeCounter_hpp

#include "cocos2d.h"
USING_NS_CC;

class TimeCounter : public Node {
public:
    CREATE_FUNC(TimeCounter);
    virtual bool init();
    
    virtual void update(float dt);
    
    void start();
    float getfCurTime();
    
private:
    float m_fTime;

};

#endif /* TimeCounter_hpp */
