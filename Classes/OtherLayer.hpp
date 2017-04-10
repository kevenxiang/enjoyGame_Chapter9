//
//  OtherLayer.hpp
//  enjoyGame_Chapter9
//
//  Created by xiang on 2017/4/9.
//
//

#ifndef OtherLayer_hpp
#define OtherLayer_hpp

#include "cocos2d.h"
using namespace cocos2d;

class OtherLayer : public Layer {
public:
    CREATE_FUNC(OtherLayer);
    virtual bool init();
private:
    //接收test消息的回调函数
    void testMsg(Ref *pData);
};

#endif /* OtherLayer_hpp */
