#ifndef USER_CONTROLLER_HPP
#define USER_CONTROLLER_HPP

#include "../services/userService.hpp"

class UserController {
private:
    UserService userService;

public:
    UserController();

    void createUser(const std::string& username, const std::string& email, const std::string& password);
    void updateUser(int userId, const std::string& newUsername, const std::string& newEmail, const std::string& newPassword);
    void deleteUser(int userId);
    void getUserById(int userId);
    void getUserByUsername(const std::string& username);
    void getUserByEmail(const std::string& email);
};

#endif  // USER_CONTROLLER_HPP
