# Kelvin Ayrlı Stüdyo Işığı
C ile ve MPLAB kullanılarak yazılmış PIC16F1847 mikrodenetleyicisi ile oluşturulan kelvin ayarlı LED kontrol programı.

- Sıcak ve soğuk ışıklı LED lerin PWM ile çeşitli şiddetlerde karıştırarak farklı kelvin ayarları elde eder.

- Parlaklık ayarı kelvin ayarını etkilemez, kodu ona göre yazılmıştır.

- Ayarlar kilitlendikten sonra kapanıp açılsa bile EEPROM sayesinde ayarları yeniden yükler.

- Sıcaklık kontrol etmesi için soğutucuların içindeki NTC yi okur ve duruma göre fanı aktive eder, eğer sıcaklık belli bir
seviyeyi geçerse otomatik olarak LED leri kapatır. Histerezis kodun içinde bulunduğu için sürekli açma kapama gibi bir
sıkıntı yoktur.

- Fan ve sıcaklık kontrolü olduğu için, LED leri normalden daha yüksek voltajda çalıştırabilir.


# Devre Şemaları:
<p float="left">
  <img src="./Resimler/Şema-1.jpg" width="500">
  <img src="./Resimler/Şema-2.jpg" width="200"> 
</p>

# Devre Resimleri:
<p float="left">
  <img src="./Resimler/Plaket Devre-1.png" width="300">
  <img src="./Resimler/Plaket Devre-2.png" width="300"> 
</p>

# Proje Resimleri:
<p float="left">
  <img src="./Resimler/Kasa-1.png" width="150">
  <img src="./Resimler/Kasa-2.png" width="200"> 
  <img src="./Resimler/Kasa-3.png" width="200">
</p>
<p float="left">
  <img src="./Resimler/Kasa-4.png" width="200">
  <img src="./Resimler/Kasa-5.png" width="200"> 
  <img src="./Resimler/Kasa-6.png" width="200"> 
  <img src="./Resimler/Kasa-7.png" width="200"> 
</p>
<p float="left">
  <img src="./Resimler/Kasa-8.png" width="200">
  <img src="./Resimler/Kasa-9.png" width="200"> 
  <img src="./Resimler/Kasa-10.png" width="200"> 
  <img src="./Resimler/Kasa-11.png" width="200"> 
</p>
