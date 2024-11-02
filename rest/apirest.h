#pragma once

#include <QObject>
#include <QtQml>

#include "github_info.h"

#include "modelview.h"

namespace jjfp::rest {

class ApiRest : public QObject
{
    Q_OBJECT

    QML_ELEMENT
    // QML_SINGLETON

    Q_PROPERTY(const ModelView *model READ model CONSTANT)

public:
    ApiRest();

    ModelView *model();

private:
    ModelView m_model;

    github_info::GithubInfo info;

private:
    void asyncMe();
};

} // namespace jjfp::rest
