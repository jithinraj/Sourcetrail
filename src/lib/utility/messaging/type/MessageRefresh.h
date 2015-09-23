#ifndef MESSAGE_REFRESH_H
#define MESSAGE_REFRESH_H

#include "utility/messaging/Message.h"

class MessageRefresh: public Message<MessageRefresh>
{
public:
	MessageRefresh()
		: uiOnly(false)
		, all(false)
	{
	}

	static const std::string getStaticType()
	{
		return "MessageRefresh";
	}

	MessageRefresh& refreshUiOnly()
	{
		uiOnly = true;
		return *this;
	}

	MessageRefresh& refreshAll()
	{
		all = true;
		return *this;
	}

	bool uiOnly;
	bool all;
};

#endif // MESSAGE_REFRESH_H
