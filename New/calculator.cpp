#include "calculator.h"
#include "ui_calculator.h"
#include "QPixmap"

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);
    QPixmap pix("D:/Projects/New/photos/logo");
    ui->pic->setPixmap(pix.scaled(200,300,Qt::KeepAspectRatio));
}

Calculator::~Calculator()
{
    delete ui;
}


void Calculator::on_pushButton_2_clicked()
{

    //For Course number 1
    float a1;
    if((ui->l1->text().toInt())<40){
        a1=0.0;
        ui->g1->setText(QString::number(a1));
        ui->p1->setText(QString::fromStdString("F"));
    }
    else if((ui->l1->text().toInt())<45){
        a1=2.0;
        ui->g1->setText(QString::number(2));
        ui->p1->setText(QString::fromStdString("D"));
    }
    else if((ui->l1->text().toInt())<50){
        a1=2.25;
        ui->g1->setText(QString::number(2.25));
        ui->p1->setText(QString::fromStdString("C"));
    }
    else if((ui->l1->text().toInt())<55){
        a1=2.50;
        ui->g1->setText(QString::number(2.50));
        ui->p1->setText(QString::fromStdString("C+"));
    }
    else if((ui->l1->text().toInt())<60){
        a1=2.75;
        ui->g1->setText(QString::number(2.75));
        ui->p1->setText(QString::fromStdString("B-"));
    }
    else if((ui->l1->text().toInt())<65){
        a1=3.00;
        ui->g1->setText(QString::number(3.00));
        ui->p1->setText(QString::fromStdString("B"));
    }
    else if((ui->l1->text().toInt())<70){
        a1=3.25;
        ui->g1->setText(QString::number(3.25));
        ui->p1->setText(QString::fromStdString("B+"));
    }
    else if((ui->l1->text().toInt())<75){
        a1=3.50;
        ui->g1->setText(QString::number(3.50));
        ui->p1->setText(QString::fromStdString("A-"));
    }
    else if((ui->l1->text().toInt())<80){
        a1=3.75;
        ui->g1->setText(QString::number(3.75));
        ui->p1->setText(QString::fromStdString("A"));
    }
    else if((ui->l1->text().toInt())<101){
        a1=4.00;
        ui->g1->setText(QString::number(4.00));
        ui->p1->setText(QString::fromStdString("A+"));
    }

    //For Course number 2
    float a2;
    if((ui->l2->text().toInt())<40){
        a2=0.0;
        ui->g2->setText(QString::number(0));
        ui->p2->setText(QString::fromStdString("F"));
    }
    else if((ui->l2->text().toInt())<45){
        a2=2.00;
        ui->g2->setText(QString::number(2.00));
        ui->p2->setText(QString::fromStdString("D"));
    }
    else if((ui->l2->text().toInt())<50){
        a2=2.25;
        ui->g2->setText(QString::number(2.25));
        ui->p2->setText(QString::fromStdString("C"));
    }
    else if((ui->l2->text().toInt())<55){
        a2=2.50;
        ui->g2->setText(QString::number(2.50));
        ui->p2->setText(QString::fromStdString("C+"));
    }
    else if((ui->l2->text().toInt())<60){
        a2=2.75;
        ui->g2->setText(QString::number(2.75));
        ui->p2->setText(QString::fromStdString("B-"));
    }
    else if((ui->l2->text().toInt())<65){
        a2=3.00;
        ui->g2->setText(QString::number(3.00));
        ui->p2->setText(QString::fromStdString("B"));
    }
    else if((ui->l2->text().toInt())<70){
        a2=3.25;
        ui->g2->setText(QString::number(3.25));
        ui->p2->setText(QString::fromStdString("B+"));
    }
    else if((ui->l2->text().toInt())<75){
        a2=3.50;
        ui->g2->setText(QString::number(3.50));
        ui->p2->setText(QString::fromStdString("A-"));
    }
    else if((ui->l2->text().toInt())<80){
        a2=3.75;
        ui->g2->setText(QString::number(3.75));
        ui->p2->setText(QString::fromStdString("A"));
    }
    else if((ui->l2->text().toInt())<101){
        a2=4.00;
        ui->g2->setText(QString::number(4.00));
        ui->p2->setText(QString::fromStdString("A+"));
    }

    //For Course number 3
    float a3;
    if((ui->l3->text().toInt())<40){
        a3=0.00;
        ui->g3->setText(QString::number(0.00));
        ui->p3->setText(QString::fromStdString("F"));
    }
    else if((ui->l3->text().toInt())<45){
        a3=2.00;
        ui->g3->setText(QString::number(2.00));
        ui->p3->setText(QString::fromStdString("D"));
    }
    else if((ui->l3->text().toInt())<50){
        a3=2.25;
        ui->g3->setText(QString::number(2.25));
        ui->p3->setText(QString::fromStdString("C"));
    }
    else if((ui->l3->text().toInt())<55){
        a3=2.50;
        ui->g3->setText(QString::number(2.50));
        ui->p3->setText(QString::fromStdString("C+"));
    }
    else if((ui->l3->text().toInt())<60){
        a3=2.75;
        ui->g3->setText(QString::number(2.75));
        ui->p3->setText(QString::fromStdString("B-"));
    }
    else if((ui->l3->text().toInt())<65){
        a3=3.00;
        ui->g3->setText(QString::number(3.00));
        ui->p3->setText(QString::fromStdString("B"));
    }
    else if((ui->l3->text().toInt())<70){
        a3=3.25;
        ui->g3->setText(QString::number(3.25));
        ui->p3->setText(QString::fromStdString("B+"));
    }
    else if((ui->l3->text().toInt())<75){
        a3=3.50;
        ui->g3->setText(QString::number(3.50));
        ui->p3->setText(QString::fromStdString("A-"));
    }
    else if((ui->l3->text().toInt())<80){
        a3=3.75;
        ui->g3->setText(QString::number(3.75));
        ui->p3->setText(QString::fromStdString("A"));
    }
    else if((ui->l3->text().toInt())<101){
        a3=4.00;
        ui->g3->setText(QString::number(4.00));
        ui->p3->setText(QString::fromStdString("A+"));
    }

    //For Course number 4
    float a4;
    if((ui->l4->text().toInt())<40){
        a4=0.00;
        ui->g4->setText(QString::number(0.00));
        ui->p4->setText(QString::fromStdString("F"));
    }
    else if((ui->l4->text().toInt())<45){
        a4=2.00;
        ui->g4->setText(QString::number(2.00));
        ui->p4->setText(QString::fromStdString("D"));
    }
    else if((ui->l4->text().toInt())<50){
        a4=2.25;
        ui->g4->setText(QString::number(2.25));
        ui->p4->setText(QString::fromStdString("C"));
    }
    else if((ui->l4->text().toInt())<55){
        a4=2.50;
        ui->g4->setText(QString::number(2.50));
        ui->p4->setText(QString::fromStdString("C+"));
    }
    else if((ui->l4->text().toInt())<60){
        a4=2.75;
        ui->g4->setText(QString::number(2.75));
        ui->p4->setText(QString::fromStdString("B-"));
    }
    else if((ui->l4->text().toInt())<65){
        a4=3.00;
        ui->g4->setText(QString::number(3.00));
        ui->p4->setText(QString::fromStdString("B"));
    }
    else if((ui->l4->text().toInt())<70){
        a4=3.25;
        ui->g4->setText(QString::number(3.25));
        ui->p4->setText(QString::fromStdString("B+"));
    }
    else if((ui->l4->text().toInt())<75){
        a4=3.50;
        ui->g4->setText(QString::number(3.50));
        ui->p4->setText(QString::fromStdString("A-"));
    }
    else if((ui->l4->text().toInt())<80){
        a4=3.75;
        ui->g4->setText(QString::number(3.75));
        ui->p4->setText(QString::fromStdString("A"));
    }
    else if((ui->l4->text().toInt())<101){
        a4=4.00;
        ui->g4->setText(QString::number(4.00));
        ui->p4->setText(QString::fromStdString("A+"));
    }

    //For Course number 5
    float a5;
    if((ui->l5->text().toInt())<40){
        a5=0.00;
        ui->g5->setText(QString::number(0.00));
        ui->p5->setText(QString::fromStdString("F"));
    }
    else if((ui->l5->text().toInt())<45){
        a5=2.00;
        ui->g5->setText(QString::number(2.00));
        ui->p5->setText(QString::fromStdString("D"));
    }
    else if((ui->l5->text().toInt())<50){
        a5=2.25;
        ui->g5->setText(QString::number(2.25));
        ui->p5->setText(QString::fromStdString("C"));
    }
    else if((ui->l5->text().toInt())<55){
        a5=2.50;
        ui->g5->setText(QString::number(2.50));
        ui->p5->setText(QString::fromStdString("C+"));
    }
    else if((ui->l5->text().toInt())<60){
        a5=2.75;
        ui->g5->setText(QString::number(2.75));
        ui->p5->setText(QString::fromStdString("B-"));
    }
    else if((ui->l5->text().toInt())<65){
        a5=3.00;
        ui->g5->setText(QString::number(3.00));
        ui->p5->setText(QString::fromStdString("B"));
    }
    else if((ui->l5->text().toInt())<70){
        a5=3.25;
        ui->g5->setText(QString::number(3.25));
        ui->p5->setText(QString::fromStdString("B+"));
    }
    else if((ui->l5->text().toInt())<75){
        a5=3.50;
        ui->g5->setText(QString::number(3.50));
        ui->p5->setText(QString::fromStdString("A-"));
    }
    else if((ui->l5->text().toInt())<80){
        a5=3.75;
        ui->g5->setText(QString::number(3.75));
        ui->p5->setText(QString::fromStdString("A"));
    }
    else if((ui->l5->text().toInt())<101){
        a5=4.00;
        ui->g5->setText(QString::number(4.00));
        ui->p5->setText(QString::fromStdString("A+"));
    }

    //For Course number 6
    float a6;
    if((ui->l6->text().toInt())<40){
        a6=0.00;
        ui->g6->setText(QString::number(0.00));
        ui->p6->setText(QString::fromStdString("F"));
    }
    else if((ui->l6->text().toInt())<45){
        a6=2.00;
        ui->g6->setText(QString::number(2.00));
        ui->p6->setText(QString::fromStdString("D"));
    }
    else if((ui->l6->text().toInt())<50){
        a6=2.25;
        ui->g6->setText(QString::number(2.25));
        ui->p6->setText(QString::fromStdString("C"));
    }
    else if((ui->l6->text().toInt())<55){
        a6=2.50;
        ui->g6->setText(QString::number(2.50));
        ui->p6->setText(QString::fromStdString("C+"));
    }
    else if((ui->l6->text().toInt())<60){
        a6=2.75;
        ui->g6->setText(QString::number(2.75));
        ui->p6->setText(QString::fromStdString("B-"));
    }
    else if((ui->l6->text().toInt())<65){
        a6=3.00;
        ui->g6->setText(QString::number(3.00));
        ui->p6->setText(QString::fromStdString("B"));
    }
    else if((ui->l6->text().toInt())<70){
        a6=3.25;
        ui->g6->setText(QString::number(3.25));
        ui->p6->setText(QString::fromStdString("B+"));
    }
    else if((ui->l6->text().toInt())<75){
        a6=3.50;
        ui->g6->setText(QString::number(3.50));
        ui->p6->setText(QString::fromStdString("A-"));
    }
    else if((ui->l6->text().toInt())<80){
        a6=3.75;
        ui->g6->setText(QString::number(3.75));
        ui->p6->setText(QString::fromStdString("A"));
    }
    else if((ui->l6->text().toInt())<101){
        a6=4.00;
        ui->g6->setText(QString::number(4.00));
        ui->p6->setText(QString::fromStdString("A+"));
    }

    //For Course number 7
    float a7;
    if((ui->l7->text().toInt())<40){
        a7=0.00;
        ui->g7->setText(QString::number(0.00));
        ui->p7->setText(QString::fromStdString("F"));
    }
    else if((ui->l7->text().toInt())<45){
        a7=2.00;
        ui->g7->setText(QString::number(2.00));
        ui->p7->setText(QString::fromStdString("D"));
    }
    else if((ui->l7->text().toInt())<50){
        a7=2.25;
        ui->g7->setText(QString::number(2.25));
        ui->p7->setText(QString::fromStdString("C"));
    }
    else if((ui->l7->text().toInt())<55){
        a7=2.50;
        ui->g7->setText(QString::number(2.50));
        ui->p7->setText(QString::fromStdString("C+"));
    }
    else if((ui->l7->text().toInt())<60){
        a7=2.75;
        ui->g7->setText(QString::number(2.75));
        ui->p7->setText(QString::fromStdString("B-"));
    }
    else if((ui->l7->text().toInt())<65){
        a7=3.00;
        ui->g7->setText(QString::number(3.00));
        ui->p7->setText(QString::fromStdString("B"));
    }
    else if((ui->l7->text().toInt())<70){
        a7=3.25;
        ui->g7->setText(QString::number(3.25));
        ui->p7->setText(QString::fromStdString("B+"));
    }
    else if((ui->l7->text().toInt())<75){
        a7=3.50;
        ui->g7->setText(QString::number(3.50));
        ui->p7->setText(QString::fromStdString("A-"));
    }
    else if((ui->l7->text().toInt())<80){
        a7=3.75;
        ui->g7->setText(QString::number(3.75));
        ui->p7->setText(QString::fromStdString("A"));
    }
    else if((ui->l7->text().toInt())<101){
        a7=4.00;
        ui->g7->setText(QString::number(4.00));
        ui->p7->setText(QString::fromStdString("A+"));
    }

    //For Course number 8
    float a8;
    if((ui->l8->text().toInt())<40){
        a8=0.00;
        ui->g8->setText(QString::number(0.00));
        ui->p8->setText(QString::fromStdString("F"));
    }
    else if((ui->l8->text().toInt())<45){
        a8=2.00;
        ui->g8->setText(QString::number(2.00));
        ui->p8->setText(QString::fromStdString("D"));
    }
    else if((ui->l8->text().toInt())<50){
        a8=2.25;
        ui->g8->setText(QString::number(2.25));
        ui->p8->setText(QString::fromStdString("C"));
    }
    else if((ui->l8->text().toInt())<55){
        a8=2.50;
        ui->g8->setText(QString::number(2.50));
        ui->p8->setText(QString::fromStdString("C+"));
    }
    else if((ui->l8->text().toInt())<60){
        a8=2.75;
        ui->g8->setText(QString::number(2.75));
        ui->p8->setText(QString::fromStdString("B-"));
    }
    else if((ui->l8->text().toInt())<65){
        a8=3.00;
        ui->g8->setText(QString::number(3.00));
        ui->p8->setText(QString::fromStdString("B"));
    }
    else if((ui->l8->text().toInt())<70){
        a8=3.25;
        ui->g8->setText(QString::number(3.25));
        ui->p8->setText(QString::fromStdString("B+"));
    }
    else if((ui->l8->text().toInt())<75){
        a8=3.50;
        ui->g8->setText(QString::number(3.50));
        ui->p8->setText(QString::fromStdString("A-"));
    }
    else if((ui->l8->text().toInt())<80){
        a8=3.75;
        ui->g8->setText(QString::number(3.75));
        ui->p8->setText(QString::fromStdString("A"));
    }
    else if((ui->l8->text().toInt())<101){
        a8=4.00;
        ui->g8->setText(QString::number(4.00));
        ui->p8->setText(QString::fromStdString("A+"));
    }

    //For Course number 9
    float a9;
    if((ui->l9->text().toInt())<40){
        a9=0.00;
        ui->g9->setText(QString::number(0.00));
        ui->p9->setText(QString::fromStdString("F"));
    }
    else if((ui->l9->text().toInt())<45){
        a9=2.00;
        ui->g9->setText(QString::number(2.00));
        ui->p9->setText(QString::fromStdString("D"));
    }
    else if((ui->l9->text().toInt())<50){
        a9=2.25;
        ui->g9->setText(QString::number(2.25));
        ui->p9->setText(QString::fromStdString("C"));
    }
    else if((ui->l9->text().toInt())<55){
        a9=2.50;
        ui->g9->setText(QString::number(2.50));
        ui->p9->setText(QString::fromStdString("C+"));
    }
    else if((ui->l9->text().toInt())<60){
        a9=2.75;
        ui->g9->setText(QString::number(2.75));
        ui->p9->setText(QString::fromStdString("B-"));
    }
    else if((ui->l9->text().toInt())<65){
        a9=3.00;
        ui->g9->setText(QString::number(3.00));
        ui->p9->setText(QString::fromStdString("B"));
    }
    else if((ui->l9->text().toInt())<70){
        a9=3.25;
        ui->g9->setText(QString::number(3.25));
        ui->p9->setText(QString::fromStdString("B+"));
    }
    else if((ui->l9->text().toInt())<75){
        a9=3.50;
        ui->g9->setText(QString::number(3.50));
        ui->p9->setText(QString::fromStdString("A-"));
    }
    else if((ui->l9->text().toInt())<80){
        a9=3.75;
        ui->g9->setText(QString::number(3.75));
        ui->p9->setText(QString::fromStdString("A"));
    }
    else if((ui->l9->text().toInt())<101){
        a9=4.00;
        ui->g9->setText(QString::number(4.00));
        ui->p9->setText(QString::fromStdString("A+"));
    }

    //For Course number 10
    float a10;
    if((ui->l10->text().toInt())<40){
        a10=0.00;
        ui->g10->setText(QString::number(0.00));
        ui->p10->setText(QString::fromStdString("F"));
    }
    else if((ui->l10->text().toInt())<45){
        a10=2.00;
        ui->g10->setText(QString::number(2.00));
        ui->p10->setText(QString::fromStdString("D"));
    }
    else if((ui->l10->text().toInt())<50){
        a10=2.25;
        ui->g10->setText(QString::number(2.25));
        ui->p10->setText(QString::fromStdString("C"));
    }
    else if((ui->l10->text().toInt())<55){
        a10=2.50;
        ui->g10->setText(QString::number(2.50));
        ui->p10->setText(QString::fromStdString("C+"));
    }
    else if((ui->l10->text().toInt())<60){
        a10=2.75;
        ui->g10->setText(QString::number(2.75));
        ui->p10->setText(QString::fromStdString("B-"));
    }
    else if((ui->l10->text().toInt())<65){
        a10=3.00;
        ui->g10->setText(QString::number(3.00));
        ui->p10->setText(QString::fromStdString("B"));
    }
    else if((ui->l10->text().toInt())<70){
        a10=3.25;
        ui->g10->setText(QString::number(3.25));
        ui->p10->setText(QString::fromStdString("B+"));
    }
    else if((ui->l10->text().toInt())<75){
        a10=3.50;
        ui->g10->setText(QString::number(3.50));
        ui->p10->setText(QString::fromStdString("A-"));
    }
    else if((ui->l10->text().toInt())<80){
        a10=3.75;
        ui->g10->setText(QString::number(3.75));
        ui->p10->setText(QString::fromStdString("A"));
    }
    else if((ui->l10->text().toInt())<101){
        a10=4.00;
        ui->g10->setText(QString::number(4.00));
        ui->p10->setText(QString::fromStdString("A+"));
    }

    float c_sum = (ui->c1->text().toFloat()) + (ui->c2->text().toFloat()) +(ui->c3->text().toFloat()) +(ui->c4->text().toFloat()) +(ui->c5->text().toFloat()) +(ui->c6->text().toFloat()) +(ui->c7->text().toFloat()) +(ui->c8->text().toFloat()) +(ui->c9->text().toFloat()) +(ui->c10->text().toFloat());
    float sum = (a1*(ui->c1->text().toFloat()))+(a2*(ui->c2->text().toFloat()))+(a3*(ui->c3->text().toFloat()))+(a4*(ui->c4->text().toFloat()))+(a5*(ui->c5->text().toFloat()))+(a6*(ui->c6->text().toFloat()))+(a7*(ui->c7->text().toFloat()))+(a8*(ui->c8->text().toFloat()))+(a9*(ui->c9->text().toFloat()))+(a10*(ui->c10->text().toFloat()));
    float ans = (sum/c_sum);

    ui->final_result->setText(QString::number(ans));

    if(ans<2.00){
        ui->final_grade->setText(QString::fromStdString("F"));
    }
    else if(ans<2.25){

        ui->final_grade->setText(QString::fromStdString("D"));
    }
    else if(ans<2.50){
        ui->final_grade->setText(QString::fromStdString("C"));
    }
    else if(ans<2.75){
        ui->final_grade->setText(QString::fromStdString("C+"));
    }
    else if(ans<3.00){
        ui->final_grade->setText(QString::fromStdString("B-"));
    }
    else if(ans<3.25){
        ui->final_grade->setText(QString::fromStdString("B"));
    }
    else if(ans<3.50){
        ui->final_grade->setText(QString::fromStdString("B+"));
    }
    else if(ans<3.75){
        ui->final_grade->setText(QString::fromStdString("A-"));
    }
    else if(ans<4.00){
        ui->final_grade->setText(QString::fromStdString("A"));
    }
    else{
        ui->final_grade->setText(QString::fromStdString("A+"));
    }



}

