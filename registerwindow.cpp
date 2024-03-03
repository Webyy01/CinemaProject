#include "registerwindow.h"
#include "ui_registerwindow.h"

RegisterWindow::RegisterWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RegisterWindow)
{
    ui->setupUi(this);
    ui->errorAgesLessThanTweve->setVisible(false);
    ui->errorAllFieldMustBeFilled->setVisible(false);
    ui->errorAlreadyExisting->setVisible(false);
    ui->errorNotMatching->setVisible(false);


}

RegisterWindow::~RegisterWindow()
{
    delete ui;
}

void RegisterWindow::on_registerButton_clicked()
{
    QString username = ui->lineEditUsername->text();
    QString password = ui->lineEditPassword->text();
    QString reTypePassword = ui->lineEditRetypePassword->text();
    QString month = ui->monthComboBox->currentText();
    QString day = ui->dayLineEdit->text();
    QString year = ui->yearLineEdit->text();
    QString gender;
    QString accountType;
    QString genres[7];

    if(ui->femaleRadioButton->isChecked())
        gender = "female";
    else
        gender = "male";


    if(ui->adminRadioButton->isChecked())
        accountType="admin";
    else
        accountType="user";

    int counter = 0;
    if(ui->ComedyCheckBox->isChecked())
    {
        genres[counter] = "Comedy";
        counter++;
    }
    if(ui->actionCheckBox->isChecked())
    {
        genres[counter] = "Action";
        counter++;
    }
    if(ui->romanceCheckBox->isChecked())
    {
        genres[counter] = "Romance";
        counter++;
    }
    if(ui->dramaCheckBox->isChecked())
    {
        genres[counter] = "Drama";
        counter++;
    }
    if(ui->horrorCheckBox->isChecked())
    {
        genres[counter] = "Horror";
        counter++;
    }
    if(ui->otherCheckBox->isChecked())
    {
        genres[counter] = "Other";
        counter++;
    }


}

