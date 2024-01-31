#include "OnlineShop.h"

void OnlineShop::AddUser(User user)
{
	m_user.push_back(user);
}

std::vector<User> OnlineShop::GetUser()
{
	return m_user;
}
