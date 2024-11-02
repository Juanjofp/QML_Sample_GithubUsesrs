#include <rest/apirest.h>

#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

int main(int argc, char *argv[]) {
  QGuiApplication app(argc, argv);

  // jjfp::rest::ApiRest apiRest;

  QQmlApplicationEngine engine;

  // engine.rootContext()->setContextProperty("apiRest", &apiRest);

  qmlRegisterType<jjfp::rest::ApiRest>("com.jjfp.rest", 1, 0, "ApiRest");

  QObject::connect(
      &engine, &QQmlApplicationEngine::objectCreationFailed, &app,
      []() { QCoreApplication::exit(-1); }, Qt::QueuedConnection);
  engine.loadFromModule("GithubUsesrs", "Main");

  return app.exec();
}
