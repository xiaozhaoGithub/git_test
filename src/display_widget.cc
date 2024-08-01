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
	int qq = 777;
	int c1 = 1;
	int c2 = 2;
	return a - b;
}
// 注释
// 功能3
int feature3(int a, int b)
{
	int dd = 10;
	int ee = 10;
	// 注释
	return a + b;
}


int getValue()
{
	return 5;
}


int getIntValue()
{
	// chongtu
	return 5;
}

#include "moc_display_widget.cpp"
