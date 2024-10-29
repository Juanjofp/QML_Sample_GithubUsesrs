#include "apirest.h"

#include <QDebug>

jjfp::rest::ApiRest::ApiRest() { qDebug() << "ApiRest constructor"; }

jjfp::rest::ModelView &jjfp::rest::ApiRest::model()
{
    return m_model;
}
