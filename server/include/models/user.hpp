#ifndef USER_HPP
#define USER_HPP

#include <string>

class User {
public:
    User(const std::string& username, const std::string& email, const std::string& password);

    std::string getUsername() const;
    std::string getEmail() const;
    std::string getPassword() const;

private:
    std::string username;
    std::string email;
    std::string password;
};

#endif  // USER_HPP
