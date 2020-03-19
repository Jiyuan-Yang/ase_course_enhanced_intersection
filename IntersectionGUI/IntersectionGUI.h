#pragma once

#include <QtWidgets/QMainWindow>
#include <map>
#include <string>

#include "ui_IntersectionGUI.h"
#include "..\src\Intersection.h"

class IntersectionGUI : public QMainWindow
{
	Q_OBJECT

public:
	Intersection* intersection;
	map<string, int> vectorNameToIndex;
	map<string, int> circleNameToIndex;
	IntersectionGUI(QWidget *parent = Q_NULLPTR);

private:
	Ui::IntersectionGUIClass ui;
private slots:
	void openFile(void);
	void loadShape(QStringList& strList);
	void getResult(void);
	void deleteItem(void);
};
