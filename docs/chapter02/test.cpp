
/**
 * @brief 更新采集结果到UI处理接口
 */
void CDevice::UpdateToUIProcess()
{
    /// 根据实际数据类型、BCD编码格式、线性转换、处理数据流，格式化成目标值
    ...     

    /// (数据组)处理触发记录或者死区记录
    map<int, vector<TriggerVarPara> >::iterator it = g_triggerVarMap.find(updateVar->u32VarID);
    if (it != g_triggerVarMap.end())
    {
        vector<TriggerVarPara> vec = it->second;
        int size = vec.size();
        for (int i = 0; i < size; ++i)
        {
            vec[i].handler(szOutBuff, vec[i].userdata);
        }
    }

    /// 处理报警记录
    AlertRecord_Process(&alert);


    ///通知UI界面（node）
    UiCommunicationSend(...);
}