#ifndef DISPLAY_WIDGET_H_
#define DISPLAY_WIDGET_H_

#include <QWidget>
#include <QLabel>

class DisplayWidget : public QWidget
{
    Q_OBJECT
public:
    explicit DisplayWidget(QWidget* parent = nullptr);
    ~DisplayWidget();
	
	int num_ = 10;
};

#endif
