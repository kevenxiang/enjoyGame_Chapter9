//
//  NotifyUtil.hpp
//  enjoyGame_Chapter9
//
//  Created by xiang on 2017/4/10.
//
//

#ifndef NotifyUtil_hpp
#define NotifyUtil_hpp

#include "cocos2d.h"
USING_NS_CC;

class NotifyUtil : public Ref {
public:
    static NotifyUtil *getInstance();
    CREATE_FUNC(NotifyUtil);
    virtual bool init();
    
    //订阅消息
    void addObserver(const std::string &sMsgName, std::function<void(Ref *)> func);
    
    //发布消息
    void postNotification(const std::string &sMsgName, Ref *data);
    
private:
    static NotifyUtil *m_NotifyUtil;
    std::map<std::string, std::vector<std::function<void(Ref *)>>>m_funcMap;
};

#endif /* NotifyUtil_hpp */




























