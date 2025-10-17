#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QFile"
#include "QFileDialog"
#include "QTextStream"
#include "QMessageBox"
#include "QFont"
#include "QFontDialog"
#include "QColor"
#include "QColorDialog"
#include <QtPrintSupport/QPrinter>
#include "QtPrintSupport/QPrintDialog"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit); // xóa khoảng trắng ở hàng ngang
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_triggered()
{
    file_path = "";
    ui->textEdit->setText(""); // clear textedit
}


void MainWindow::on_actionOpen_triggered()
{
    QString file_name = QFileDialog ::getOpenFileName(this,"open file");
    QFile file(file_name);
    if(!file.open(QFile ::ReadOnly | QFile :: Text))
    {
        QMessageBox ::warning(this,"title","khong the mo file");
        return;
    }
    QTextStream in(&file);
    QString text = in.readAll();
    ui->textEdit->setText(text);
    file.close();
}


void MainWindow::on_actionSave_triggered()
{
    QString file_name = QFileDialog ::getSaveFileName(this,"open file");
    QFile file(file_name);
    if(!file.open(QFile ::WriteOnly | QFile :: Text))
    {
        QMessageBox ::warning(this,"title","khong the mo file");
        return;
    }
    QTextStream out(&file);
    QString text = ui->textEdit->toPlainText();
    out << text;
    file.flush();
    file.close();
}


void MainWindow::on_actionSave_as_triggered()
{
    QString file_name = QFileDialog ::getSaveFileName(this,"open file");
    QFile file(file_name);
    file_path = file_name;
    if(!file.open(QFile ::WriteOnly | QFile :: Text))
    {
        QMessageBox ::warning(this,"title","khong the mo file");
        return;
    }
    QTextStream out(&file);
    QString text = ui->textEdit->toPlainText();
    out << text;
    file.flush();
    file.close();
}


void MainWindow::on_actioncut_triggered()
{
    ui->textEdit->cut();
}


void MainWindow::on_actioncoppy_triggered()
{
    ui->textEdit->copy();
}


void MainWindow::on_actionpaste_triggered()
{
    ui->textEdit->paste();
}


void MainWindow::on_actionredo_triggered()
{
    ui->textEdit->redo();
}


void MainWindow::on_actionUndo_triggered()
{
    ui->textEdit->undo();
}


void MainWindow::on_actionAbout_notepad_triggered()
{
    QString about_text;
    about_text = " tac gia : tran quang luan\n";
    about_text += "ngay : 15/6/2025\n";
    about_text += "notepad_simple\n";
    QMessageBox ::about(this,"title",about_text);
}


void MainWindow::on_actionFONT_triggered()
{
    bool ok;
    QFont font = QFontDialog ::getFont(&ok,this);
    if(ok)
    {
        ui->textEdit->setFont(font);
    }
    else
    {
        return;
    }
}


void MainWindow::on_actionColor_triggered()
{
    QColor color = QColorDialog ::getColor(Qt :: yellow,this,"chọn màu"); // màu đầu tiên là mặc định chọn giúp
    if(color.isValid())
    {
        ui->textEdit->setTextColor(color);
    }
}


void MainWindow::on_actionBackgroud_color_triggered()
{
    QColor color = QColorDialog ::getColor(Qt :: yellow,this,"chọn màu"); // màu đầu tiên là mặc định chọn giúp
    if(color.isValid())
    {
        ui->textEdit->setTextBackgroundColor(color);
    }
}


void MainWindow::on_actionBackgroud_color_text_edit_triggered()
{
    QColor color = QColorDialog::getColor(Qt::yellow, this, "Chọn màu");
    if (color.isValid())
    {
        QPalette p = ui->textEdit->palette(); // Bạn lấy ra bảng màu hiện tại của textEdit.
        p.setColor(QPalette::Base, color); // Bạn đặt lại màu nền cho vùng gõ chữ
        ui->textEdit->setPalette(p); // Bạn áp dụng lại bảng màu đã chỉnh vào
    }
}


void MainWindow::on_actionPrint_triggered()
{
    QPrinter printer;
    printer.setPrinterName("in");
    QPrintDialog dialog(&printer,this);
    if(dialog.exec() == QDialog::Rejected)
    {
        return ;
    }
    ui->textEdit->print(&printer);
}

