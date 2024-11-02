#include "modelview.h"

jjfp::rest::ModelView::ModelView()
{
    m_users.push_back(GitUser{"Juanjo1", "juanjo@juanjofp.com", "juanjofp", "noimage"});
    m_users.push_back(GitUser{"Juanjo2", "juanjo@juanjofp.com", "juanjofp", "noimage"});
    m_users.push_back(GitUser{"Juanjo3", "juanjo@juanjofp.com", "juanjofp", "noimage"});
    m_users.push_back(GitUser{"Juanjo4", "juanjo@juanjofp.com", "juanjofp", "noimage"});
    m_users.push_back(GitUser{"Juanjo5", "juanjo@juanjofp.com", "juanjofp", "noimage"});
    m_users.push_back(GitUser{"Juanjo6", "juanjo@juanjofp.com", "juanjofp", "noimage"});
    m_users.push_back(GitUser{"Juanjo7", "juanjo@juanjofp.com", "juanjofp", "noimage"});
    m_users.push_back(GitUser{"Juanjo8", "juanjo@juanjofp.com", "juanjofp", "noimage"});
    m_users.push_back(GitUser{"Juanjo9", "juanjo@juanjofp.com", "juanjofp", "noimage"});
    m_users.push_back(GitUser{"Juanjo10", "juanjo@juanjofp.com", "juanjofp", "noimage"});
}

int jjfp::rest::ModelView::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);

    return m_users.size();
}

QVariant jjfp::rest::ModelView::data(const QModelIndex &index, int role) const
{
    if (index.row() < 0 || index.row() >= m_users.size())
        return QVariant();

    auto user = m_users.at(index.row());

    if (role == Roles::NameRole) {
        return QString{user.name().c_str()};
    }

    if (role == Roles::EmaiRole) {
        return QString{user.email().c_str()};
    }

    if (role == Roles::LoginRole) {
        return QString{user.login().c_str()};
    }

    if (role == Roles::AvatarRole) {
        return QString{user.avatarUrl().c_str()};
    }

    return QVariant{};
}

QHash<int, QByteArray> jjfp::rest::ModelView::roleNames() const
{
    QHash<int, QByteArray> roles;

    roles[Roles::NameRole] = "name";
    roles[Roles::EmaiRole] = "email";
    roles[Roles::LoginRole] = "login";
    roles[Roles::AvatarRole] = "avatar";

    return roles;
}
