# 四、 方案描述

引入变量更新消息层，将原本设备采集模块中变量更新通知的不稳定性，转移到了该消息层中；使设备采集模块的变量更新上报，依赖于该消息层提供的稳定接口，而不依赖具体实现；（为变量更新上报提供统一接口）

对于变量更新消息层，在接收到采集模块的变量更新事件时，需要通知其他功能模块；这里，考虑使用观察者模式来解耦变量更新消息层与其他功能模块；

![1-3](../imgs/1-3.png)