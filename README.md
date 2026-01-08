Uzay Simülasyon Programı (Space Simulation Tool)
  Bu proje, temel fizik deneylerini ve hesaplamalarını Güneş sistemindeki 8 farklı gezegenin yerçekimi ivmesini (g) temel alarak simüle eden bir C programıdır. Bilimsel verileri analiz ederken görsel bir bekleme efekti sunarak kullanıcı deneyimini artırır.
🚀 Özellikler
  Program, kullanıcıdan aldığı temel verileri (kütle, hız, süre vb.) kullanarak şu 9 farklı fiziksel hesaplamayı tüm gezegenler için aynı anda yapar:
  Serbest Düşme: Belirlenen sürede cismin ne kadar yol alacağı.
  Yukarı Atış: Cismin çıkabileceği maksimum yükseklik.
  Ağırlık Hesaplama: Cismin farklı gezegenlerdeki Newton cinsinden ağırlığı.
  Potansiyel Enerji: Belirli bir yükseklikteki cismin sahip olduğu enerji.
  Hidrostatik Basınç: Sıvı içindeki derinliğe bağlı basınç.
  Kaldırma Kuvveti: Sıvının cisme uyguladığı kaldırma kuvveti.
  Basit Sarkaç Periyodu: Yerçekimine bağlı sarkaç salınım süresi.
  İp Gerilmesi: Sabit bir asılı cismin ipte oluşturduğu gerilme.
  Asansör Deneyi: İvmeli hareket eden bir asansörde hissedilen "yapay" ağırlık.
🛠️ Teknik Detaylar
  Dil: C 
  Kütüphaneler: stdio.h, math.h, windows.h (Efektler ve bekleme süreleri için).
  Veri Yapıları: Gezegen isimleri ve ivme değerleri için array ve dinamik erişim için pointer kullanılmıştır.
  Hata Yönetimi: Girilen negatif değerler, fiziksel gerçekliğe uygun olması adına otomatik olarak mutlak değerlerine (abs) çevrilir.
💻 Nasıl Çalıştırılır?
  Derleme: Herhangi bir C derleyicisi (GCC, Dev-C++, Visual Studio) ile dosyayı derleyin.
  Çalıştırma: Oluşan .exe veya çıktı dosyasını çalıştırın.
  Kullanım: İsminizi girin ve yapmak istediğiniz deneyi menüden seçerek gerekli fiziksel değerleri tanımlayın.
 📸 Ekran Görüntüsü
  Veriler analiz ediliyor...
  HESAPLANIYOR...

^^^^SERBEST DUSME SONUCLARI^^^^^
Merkur gezegenindeki dusus mesafesi: 18.50 m.
Venus gezegenindeki dusus mesafesi: 44.35 m.
...
