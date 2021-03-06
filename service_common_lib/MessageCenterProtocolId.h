
/* author : limingfan
 * date : 2017.09.11
 * description : 消息中心服务协议码ID定义
 */
 
#ifndef __MESSAGE_CENTER_PROTOCOL_ID_H__
#define __MESSAGE_CENTER_PROTOCOL_ID_H__


// 消息中心服务协议ID
enum EMessageCenterProtocolId
{
	// 各服务上下线&停止等状态通知
	MSGCENTER_SERVICE_STATUS_NOTIFY = 1,
	
	// 用户上下线通知
	MSGCENTER_USER_ONLINE_NOTIFY = 2,
	MSGCENTER_USER_OFFLINE_NOTIFY = 3,
	
	// 转发消息
	MSGCENTER_FORWARD_MESSAGE_REQ = 4,
	MSGCENTER_FORWARD_MESSAGE_RSP = 5,
	
	// 消息信息过滤
	MSGCENTER_MSG_FILTER_REQ = 6,
	MSGCENTER_MSG_FILTER_RSP = 7,
	
	// 刷新服务数据通知
	MSGCENTER_UPDATE_SERVICE_DATA_NOTIFY = 8,
	
	// 转发服务消息通知
	MSGCENTER_FORWARD_SERVICE_MESSAGE_NOTIFY = 9,
};


#endif // __MESSAGE_CENTER_PROTOCOL_ID_H__

