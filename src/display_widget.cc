#include "display_widget.h"

#include <QLabel>
#include <QHBoxLayout>

DisplayWidget::DisplayWidget(QWidget* parent)
    : QWidget(parent)
{
    setObjectName("widget_like_container");
    setFixedHeight(400);

    auto label = new QLabel(tr("abceee"));

    auto main_layout = new QHBoxLayout(this);
    main_layout->setSpacing(24);
    main_layout->addWidget(label);
}

DisplayWidget::~DisplayWidget() {}

int add(int a, int b)
{
	return a + b;
}

int reduce(int a, int b)
{
	int q = 77;
	return a - b;
}

#include "moc_display_widget.cpp"
