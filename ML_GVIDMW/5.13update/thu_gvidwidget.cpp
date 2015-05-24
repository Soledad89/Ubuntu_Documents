#include "thu_gvidwidget.h"


/*
void thu_gvidwidget::ardecay()//QImage& image
{
//    if(image_ar.format()!=QImage::Format_ARGB32) exit(1);
    image_ar.convertToFormat(QImage::Format_ARGB32);
    uchar*  imagebits_ar = image_ar.bits();
    for(int i=0; i<SURF_AR_HEIGHT; ++i)
    {
          imagebits_ar = image_ar.scanLine(i);
          for(int j=0; j<SURF_AR_WIDTH; ++j)
          {
              imagebits_ar[j*4+3]= imagebits_ar[j*4+3]-arDecaySpeed;
          }
     }
//    return 1;
}

 void thu_gvidwidget::paintEvent(QPaintEvent *)
 {
     pkgTimerHandler(pmywidget);

     pmywidget[0]->yh->yh();//try to add yh to PPI

     QRect recdst_ppi(0, 0,SURF_CM_WIDTH, SURF_CM_HEIGHT);
     QRect recsource_ppi(0, 0, SURF_CM_WIDTH, SURF_CM_HEIGHT);
     QRect recdst_mini(0, 0,SURF_MINI_WIDTH,SURF_MINI_HEIGHT);
     QRect recsource_mini(0, 0, SURF_MINI_WIDTH, SURF_MINI_HEIGHT);
     QRect recdst_ar(0, 0,SURF_AR_WIDTH,SURF_AR_HEIGHT);
     QRect recsource_ar(0, 0, SURF_AR_WIDTH, SURF_AR_HEIGHT);

     QPainter painter(this);//if static added,memory erro;
     switch(opentype)
     {
     case(openppi):
         painter.drawImage(recdst_ppi, image_ppi, recsource_ppi);
         break;
     case(openmini):
        painter.drawImage(recdst_mini, image_mini, recsource_mini);
        break;
     case(openar):
        painter.drawImage(recdst_ar, image_ar, recsource_ar);
//      pmywidget[0]->ar->setArBackgroundColor(0x00ffff00);//输入格式要求0XRRGGBB00

        arDecayParam--;
        if(arDecayParam==0)
        {arDecayParam=arinterval;
        image_ar.fill(QColor((tmparbackcolor>>16)&0xff,(tmparbackcolor>>8)&0xff,tmparbackcolor&0xff));//每次画完AR当前线条再用AR背景颜色覆盖画布。
        }

        image_ar.fill(QColor((tmparbackcolor>>16)&0xff,(tmparbackcolor>>8)&0xff,tmparbackcolor&0xff));//每次画完AR当前线条再用AR背景颜色覆盖画布。
        //ardecay(image_ar);
        break;
     default:
         break;

     }
}

/**/
