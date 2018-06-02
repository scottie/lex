#ifndef ADDEDITLEXNODE_H
#define ADDEDITLEXNODE_H

#include <QDialog>

namespace Ui {
class AddEditLEXNode;
}


class AddEditLEXNode : public QDialog
{
    Q_OBJECT

public:
    explicit AddEditLEXNode(QWidget *parent = 0);
    ~AddEditLEXNode();

protected:

private slots:
    void on_okButton_clicked();
    void on_cancelButton_clicked();

signals:

private:
    Ui::AddEditLEXNode *ui;
};

#endif // ADDEDITLEXNODE_H
