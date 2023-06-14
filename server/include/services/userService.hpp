#ifndef USER_SERVICE_HPP
#define USER_SERVICE_HPP

#include "../models/user.hpp"

class UserService {
public:
    UserService();

    User createUser(const std::string& username, const std::string& email, const std::string& password);
    void updateUser(User& user);
    void deleteUser(User& user);
    User getUserById(int userId);
    User getUserByUsername(const std::string& username);
    User getUserByEmail(const std::string& email);
};

#endif  // USER_SERVICE_HPP
