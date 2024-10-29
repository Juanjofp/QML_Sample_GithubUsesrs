#pragma once

#include <QAbstractListModel>
#include <QObject>

#include "gituser.h"

namespace jjfp::rest {

class ModelView : QAbstractListModel {
    Q_OBJECT

public:
    enum class Roles : int { NameRole = Qt::UserRole + 1, EmaiRole, LoginRole, AvatarRole };

    ModelView();

    // QAbstractItemModel interface

    virtual int rowCount(const QModelIndex &parent) const override;
    virtual QVariant data(const QModelIndex &index, int role) const override;
    virtual QHash<int, QByteArray> roleNames() const override;

private:
    std::vector<GitUser> m_users;
};

}  // namespace jjfp::rest
