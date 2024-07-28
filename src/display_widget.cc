#include "display_widget.h"

#include <QLabel>
#include <QHBoxLayout>

DisplayWidget::DisplayWidget(QWidget* parent)
    : QWidget(parent)
{
    setObjectName("widget_like_container");
    setFixedHeight(300);

    auto label = new QLabel(tr("abc"));

    auto main_layout = new QHBoxLayout(this);
    main_layout->setSpacing(24);
    main_layout->addWidget(label);
}

DisplayWidget::~DisplayWidget() {}

#include "moc_display_widget.cpp"
