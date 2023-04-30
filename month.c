int month(int monthSelect,char name_month[],int *days){

    switch (monthSelect){
    case 1:
        name_month = "January";
        *days = 31;
        break;
    case 2:
        name_month= "February";
        *days = 28;
        break;
    case 3:
        name_month= "March";
        *days = 31;
        break;
    case 4:
        name_month= "April";
        *days = 30;
        break;
    case 5:
        name_month= "May";
        *days = 31;
        break;
    case 6:
        name_month= "June";
        *days = 30;
        break;
    case 7:
        name_month= "July";
        *days = 31;
        break;
    case 8:
        name_month= "August";
        *days = 31;
        break;
    case 9:
        name_month= "September";
        *days = 30;
        break;
    case 10:
        name_month= "October";
        *days = 31;
        break;
    case 11:
        name_month= "November";
        *days = 30;
        break;
    case 12:
        name_month= "December";
        *days = 31;
        break;
    default:
            ;
    }
    return name_month;

}
