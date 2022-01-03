//
// Created by 74079 on 2022/1/3.
//

#include <QWidget>
#include <QGroupBox>
#include <QTableWidget>
#include <QListWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QDebug>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QFile>
#include <QMessageBox>
#include "EditStuMessBox.h"
#include "Tool.h"

#ifndef STUDENTMANAGE_MAINWIDGET_H
#define STUDENTMANAGE_MAINWIDGET_H

class MainWidget : public QWidget {
Q_OBJECT
public:
    // 主窗口
    MainWidget();

    //当用户点击添加按钮时，弹出添加学生信息窗口
    void AddStuBox();

public slots:

    // 更新表格中的用户信息
    void flushTable();

    // 更新列表中显示的学生信息
    void flushListWidget(int row);

    // 删除学生信息
    void delStuFun();

    // 查找学生信息
    void findStuMess();

    // 修改学生信息
    void changeStuMess(int row);

    // 保存学生信息
    void saveStuMess();

private:
    // 创建主窗口中的学生信息面板
    QGroupBox *createStuMess();

    // 创建主窗口中的功能面板
    QGroupBox *createMenu();

private:
    // 主窗口中的表格控件
    QTableWidget *TableWidget{};

    // 主窗口中的列表控件
    QListWidget *ListWidget{};

    // 主窗口中的添加、删除、保存、退出和查找文本框控件
    QPushButton *AddStuBtn{};
    QPushButton *DelStuBtn{};
    QLineEdit *FindStuEdit{};
    QPushButton *SaveBtn{};
    QPushButton *ExitBtn{};

    // 弹出学生信息添加窗口
    EditStuMessBox *messBox{};
};

#endif //STUDENTMANAGE_MAINWIDGET_H