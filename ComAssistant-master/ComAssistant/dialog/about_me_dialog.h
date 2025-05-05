#ifndef ABOUT_ME_DIALOG_H
#define ABOUT_ME_DIALOG_H

#include <QDialog>
#include <QDesktopServices>
#include <QUrl>
#include <QDebug>
#include <QFile>
#include <QMessageBox>
#include <QScrollBar>
#include <QTextCursor>

namespace Ui {
class About_Me_Dialog;
}

class About_Me_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit About_Me_Dialog(QWidget *parent = nullptr);
    ~About_Me_Dialog();
    void getVersionString(QString str);
    void showManualDoc(void);

private slots:
    void on_okButton_clicked();

    void on_githubUrl_linkActivated(const QString &link);

    void on_email_linkActivated(const QString &link);

private:
    Ui::About_Me_Dialog *ui;
};

#endif // ABOUT_ME_DIALOG_H
