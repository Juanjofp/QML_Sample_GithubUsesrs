#pragma once

#include <string>

namespace jjfp::rest {
class GitUser {
 public:
  GitUser(std::string name, std::string email, std::string login,
          std::string avatarUrl)
      : m_name(name), m_email(email), m_login(login), m_avatarUrl(avatarUrl) {}

  std::string name() const { return m_name; }

  std::string email() const { return m_email; }

  std::string login() const { return m_login; }

  std::string avatarUrl() const { return m_avatarUrl; }

 private:
  std::string m_name;
  std::string m_email;
  std::string m_login;
  std::string m_avatarUrl;
};
}  // namespace jjfp::rest