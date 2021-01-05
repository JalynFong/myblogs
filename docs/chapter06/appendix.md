# 六、 附录



### VarUpdData(变更更新数据单元)

对于变量更新消息层，除了那三个子模块外，还有个比较重要的数据类；是各个模块间，变量更新消息交互的最小数据单元；

对于VarUpdData，主要关注如下参数：
|  名称   | 参数  | 说明  |
|  ----  | ----  | ----  |
| 变量ID  | m_id | 变量的唯一标识 |
| 单元格  | 单元格 | 单元格 |






<br>

|名称|参数|说明|
|----------|-------| 
| 变量ID |   m_id| 变量的唯一标识|
| 更新后的值 |  m_value  | 变量更新后的值，这里是字符串；|
|   值的类型   |  m_type   | 变量更新值的实际类型；<br />对于更新触发源是外部设备，是必填选项 |
|  更新触发源  | m_trigger | 记录了此次变量更新的触发源；一般有：	 <br />     ① 外部设备变量值的变更触发的变量更新；<br>     ② Ui界面（包含HMI本地页面、局域网访问、远程访问及APP访问等通过node接口的情况）对变量的写操作时，触发的变量更新；<br />     ③ MQTT 远程写入时触发的变量更新；<br />     ④ 从站设备写入时触发的变量更新；<br />     ...... |
| 更新附加信息 |   m_ext   | 该属性是变量更新的附加信息；对变量更新事件做额外说明；<br />这个可能根据m_trigger的不同而有所区别；<br />例如对于Ui界面的写入，产生的更新有时需要返回前端的附加信息（eg: 操作记录的ext）； |





