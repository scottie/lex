#ifndef LEXNODECONFIGDIALOG_H
#define LEXNODECONFIGDIALOG_H

#include <QDialog>

namespace Ui {
    class LEXNodeConfigDialog;
}

QT_BEGIN_NAMESPACE
class QModelIndex;
QT_END_NAMESPACE

/** Dialog showing transaction details. */
class LEXNodeConfigDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LEXNodeConfigDialog(QWidget *parent = 0, QString nodeAddress = "123.456.789.123:28666", QString privkey="MASTERNODEPRIVKEY");
    ~LEXNodeConfigDialog();

private:
    Ui::LEXNodeConfigDialog *ui;
};

#endif // LEXNODECONFIGDIALOG_H
