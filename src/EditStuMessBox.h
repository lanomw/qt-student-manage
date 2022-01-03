//
// Created by 74079 on 2022/1/3.
//

#ifndef STUDENTMANAGE_EDITSTUMESSBOX_H
#define STUDENTMANAGE_EDITSTUMESSBOX_H

#include <QDialog>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QFormLayout>
#include <QPushButton>
#include <QFile>
#include <QMessageBox>
#include "Student.h"
#include "Tool.h"

class EditStuMessBox : public QDialog {
Q_OBJECT
public:
    // 构建学生信息界面
    EditStuMessBox();

signals:

    // 自定义信号，当添加学生信息完成后，更新主界面上的表格
    void closeBox();

public slots:

    // 构建新学生的信息写入到文件中
    void saveStuMess();

public:
    // 发出 closeBox 信号
    void emitCloseBox();

private:
    QLineEdit *ID;
    QLineEdit *name;
    QLineEdit *sex;
    QLineEdit *age;
    QLineEdit *chinese_score;
    QLineEdit *math_score;
    QLineEdit *english_score;
    QPushButton *submit;
    QPushButton *cancel;
};

#endif //STUDENTMANAGE_EDITSTUMESSBOX_H
