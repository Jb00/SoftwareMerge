#ifndef FACILITYWINDOW_H
#define FACILITYWINDOW_H

#include <QMainWindow>
#include <QDateTime>
#include <QString>
#include "genui.h"
#include "facilitywinctrl.h"
#include "Facility.h"
#include "AddBedController.h"
#include "AssignHospitalController.h"
#include "AssignLTCController.h"

namespace Ui {
    class FacilityWindow;
}

class FacilityWindow : public QMainWindow, public genUI
{
    Q_OBJECT

public:
    explicit FacilityWindow(QWidget *parent = 0);
    ~FacilityWindow();

    void keyPressEvent(QKeyEvent * event);
    void setUI(Facility *);
    //void setScheme();

private:
    Ui::FacilityWindow *ui;

    FacilityWinCtrl* facCtrl;
    Facility* facility;
    Patient * aPatient2;


private slots:

    void AcuteSelected();
    void ComplexSelected();
    void LTCSelected();

    void waitingBtn_clicked();
    void okBtn_clicked();
    void cancelBtn_clicked();

};

#endif // FACILITYWINDOW_H
