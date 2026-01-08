#include <stdio.h>
#include <math.h>
#include <windows.h>

double ivmeler[]={3.70,8.87,9.81,3.71,24.79,10.44,8.69,11.15};
char *gezegenler[]={"Merkur","Venus","Dunya","Mars","Jupiter","Saturn","Uranus","Neptun"};

void efektUygula() {
    printf("\nVeriler analiz ediliyor...\n");
    Sleep(600);
    printf("HESAPLANIYOR");
    for(int i=0;i<3;i++) {
        printf(".");
        fflush(stdout);
        Sleep(500);
    }
    printf("\n\n");
}

void serbestDusmeHesapla(double *ptr){
    double h,t;
    printf("Sureyi (saniye) giriniz:");
    scanf("%lf",&t);
    t=(t<0)?-t:t;
    efektUygula();
    printf("^^^^SERBEST DUSME SONUCLARI^^^^^\n");
    for(int i=0;i<8;i++){
        double g= *(ptr+i);
        h=0.5*g*t*t;
        printf("%s gezegenindeki dusus mesafesi: %.2lf m.\n",gezegenler[i],h);

    }
}

void yukariAtisHesapla(double *ptr){
    double v0,hmax;
    printf("Cismin firlatilma hizini (m/s) giriniz:");
    scanf("%lf",&v0);
    v0=(v0<0)?-v0:v0;
    efektUygula();
    printf("^^^^YUKARI ATIS SONUCLARI^^^^^\n");
    for(int i=0;i<8;i++){
        double g= *(ptr+i);
        hmax=(v0*v0)/(2*g);
        printf("%s gezegeninde cikilan max yukselik: %.2lf m.\n",gezegenler[i],hmax);

    }
}

void agirlikHesapla(double *ptr){
    double m,G;
    printf("Cismin kutlesini giriniz:");
    scanf("%lf",&m);
    m=(m<0)?-m:m;
    efektUygula();
    printf("^^^^AGIRLIK SONUCLARI^^^^^\n");
    for(int i=0;i<8;i++){
        double g= *(ptr+i);
        G=m*g;
        printf("%s gezegenindeki agirlik: %.2lf kg.\n",gezegenler[i],G);

    }
}

void kutleCekimselPotansiyelEnerjiHesapla(double *ptr){
    double Ep,m,h;
    printf("Kutleyi (m) ve yuksekligi (metre) giriniz:");
    scanf("%lf",&m);
    scanf("%lf",&h);
    m=(m<0)?-m:m;
    h=(h<0)?-h:h;
    efektUygula();
    printf("^^^^KUTLECEKÝMSEL POTANSIYEL ENERJI SONUCLARI^^^^^\n");
    for(int i=0;i<8;i++){
        double g= *(ptr+i);
        Ep=m*g*h;
        printf("%s gezegenindeki kutlecekimsel potansiyel enerji : %.2lf J.\n",gezegenler[i],Ep);

    }
}

void hidrostatikHesapla(double *ptr){
    double P,rho,h;
    printf("Sivinin birim hacmindeki kütelsini (kg/m^3) ve derinligini (m) giriniz:");
    scanf("%lf",&h);
    scanf("%lf",&rho);
    h=(h<0)?-h:h;
    rho=(rho<0)?-rho:rho;
    efektUygula();
    printf("^^^^HIDROSTATIK BASINC SONUCLARI^^^^^\n");
    for(int i=0;i<8;i++){
        double g= *(ptr+i);
        P=rho*g*h;
        printf("%s gezegenindeki basinc: %.2lf pascal.\n",gezegenler[i],P);

    }
}

void kaldirmaKuvvetiHesapla(double *ptr){
    double Fk,rho,V;
    printf("Sivinin birim hacmindeki kütelsini (kg/m^3) ve cismin  batan hacmini (m^3) giriniz:");
    scanf("%lf",&V);
    scanf("%lf",&rho);
    V=(V<0)?-V:V;
    rho=(rho<0)?-rho:rho;
    efektUygula();
    printf("^^^^KALDIRMA KUVVETI SONUCLARI^^^^^\n");
    for(int i=0;i<8;i++){
        double g= *(ptr+i);
        Fk=rho*g*V;
        printf("%s gezegenindeki kaldirma kuvveti: %.2lf N.\n",gezegenler[i],Fk);

    }
}

void basitSarkacPeriyoduHesapla(double *ptr){
    double T,L;
    printf("Sarkac uzunlugunu (m) giriniz:");
    scanf("%lf",&L);
    L=(L<0)?-L:L;
    efektUygula();
    printf("^^^^BASIT SARKAC PERIYOT SONUCLARI^^^^^\n");
    for(int i=0;i<8;i++){
        double g= *(ptr+i);
        T=2*3.14159*sqrt(L/g);
        printf("%s gezegenindeki sarkacin periyodu: %.2lf saniye.\n",gezegenler[i],T);

    }
}

void sabitIpGreilmesiHesapla(double *ptr){
    double T,m;
    printf("Cismin kutlesini (kg) giriniz:");
    scanf("%lf",&m);
    m=(m<0)?-m:m;
    efektUygula();
    printf("^^^^SABIT IP GERILEMESI SONUCLARI^^^^^\n");
    for(int i=0;i<8;i++){
        double g= *(ptr+i);
        T=m*g;
        printf("%s gezegenindeki ip gerilmesi: %.2lf N.\n",gezegenler[i],T);

    }
}

void asasorDeneyiHesapla(double *ptr){
    double N,m,a;
    int durum;
    printf("Asansorun ivmesini (m/s2) ve cisimin agirligini (m) giriniz:");
    scanf("%lf",&m);
    scanf("%lf",&a);
    a=(a<0)?-a:a;
    m=(m<0)?-m:m;

    printf("1: hizlanarak yukari/yavaslayarak asagi\n2: hizlanarak asagi/yavaslayarak yukari\nSecim:");
    scanf("%d",&durum);
    efektUygula();
    printf("^^^^ASANSOR DENEYI SONUCLARI^^^^^\n");
    for(int i=0;i<8;i++){
        double g= *(ptr+i);
        N=(durum==1)?m*(g+a):m*(g-a);
        printf("%s gezegenindeki hissedilen agirlik: %.2lf N.\n",gezegenler[i],N);

    }
}

int main(){
    char isim[100];
    int secim=0;

    printf("            UZAY SIMULASYON PROGRAMA HOSGELDINIZ...          \nBu program, bilim insanlarinin deneylerini simulasyon ortaminda calistirilmasini saglamaktadir\n");
    printf("Lutfen adinizi giriniz: ");
    gets(isim);

    while(secim!=-1){
        printf("\nMERHABA Sayin %s. Lutfen Yapmak Istediginiz Deneyi Seciniz: ",isim);
        printf("\n1. Serbest Dusme\n2. Yukari Atis\n3. Agirlik\n4. Potansiyel Enerji\n5. Hidrostatik Basinc\n6. Kaldirma Kuvveti\n7. Basit Sarkac\n8. Ip Gerilmesi\n9. Asansor Deneyi\n-1. CIKIS\n");
        printf("SECIMINIZ: ");
        scanf("%d",&secim);
        if(secim==-1)
            break;

        switch(secim){
            case 1:serbestDusmeHesapla(ivmeler);break;
            case 2:yukariAtisHesapla(ivmeler);break;
            case 3:agirlikHesapla(ivmeler);break;
            case 4:kutleCekimselPotansiyelEnerjiHesapla(ivmeler);break;
            case 5:hidrostatikHesapla(ivmeler);break;
            case 6:kaldirmaKuvvetiHesapla(ivmeler);break;
            case 7:basitSarkacPeriyoduHesapla(ivmeler);break;
            case 8:sabitIpGreilmesiHesapla(ivmeler);break;
            case 9:asasorDeneyiHesapla(ivmeler);break;
            default: printf("HATALI SECIM YAPTINIZ!!!");
        }
    }

    printf("              SIMULASYON SONLANDIRILDI...           ");
    printf("\nBizi tercih ettiginiz icin tesekkurler...");

    return 0;

}


