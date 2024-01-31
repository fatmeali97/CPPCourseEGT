#pragma once
#include "User.h"
class OnlineShop
{
public:
	void AddUser(User);
	std::vector<User> GetUser();

private:
	std::vector<User> m_user;
};

