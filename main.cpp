#include <DApplication>
#include <DLabel>
#include <DWidgetUtil>

DWIDGET_USE_NAMESPACE
int main(int argc, char *argv[])
{
    DApplication::loadDXcbPlugin();

    DApplication app(argc, argv);
    app.loadTranslator();
    app.setAttribute(Qt::AA_UseHighDpiPixmaps);
    app.setOrganizationName("zanyrain");
    app.setApplicationVersion(DApplication::buildVersion("1.0"));
    app.setApplicationName("Hello World!");

    DLabel label("Hello Deepin!");
    label.setMinimumWidth(480);
    label.setMinimumHeight(240);
    label.setAlignment(Qt::Alignment::enum_type::AlignCenter);
    label.show();

    Dtk::Widget::moveToCenter(&label);
    return app.exec();
}