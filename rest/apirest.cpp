#include "apirest.h"

#include <QDebug>
#include <future>
#include <thread>

jjfp::rest::ApiRest::ApiRest()
    : info{"fake_token"}
{
    const auto result = std::async(std::launch::async, &ApiRest::asyncMe, this);

    qDebug() << "ApiRest constructor: ";
}

jjfp::rest::ModelView *jjfp::rest::ApiRest::model()
{
    return &m_model;
}

void jjfp::rest::ApiRest::asyncMe()
{
    const auto me = info.me();

    if (me) {
        qDebug() << "Me: " << me->to_string();
    }
}
