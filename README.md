# Ultrasonik Mesafe Sensörü ile Yakınlık Uyarı Sistemi
Bu proje, Arduino ve ultrasonik sensör kullanarak nesnelerin mesafesini ölçen ve mesafeye göre LED'leri ve bir buzzer'ı kontrol eden bir yakınlık uyarı sistemidir. Bu sistem, bir nesne yaklaştıkça LED'leri kademeli olarak yakar ve buzzer'ı artan sürelerde aktif eder.

Özellikler
Ultrasonik Mesafe Ölçümü: Nesne ile sensör arasındaki mesafeyi hesaplar.
LED Göstergesi: Nesneye olan uzaklığa göre 4 LED'in durumunu kontrol eder.
Buzzer Uyarısı: Nesne yaklaştıkça buzzer'ın yanıp sönme süresini kısaltır.
Mesafe Gösterimi: Seri monitörde ölçülen mesafeyi ve yakınlık seviyesini gösterir.
Bağlantı ve Pinler
Ultrasonik Sensör:
Trig Pin: 8
Echo Pin: 9
LED'ler:
LED1: Pin 2
LED2: Pin 3
LED3: Pin 4
LED4: Pin 5
Buzzer: Pin 6
Kod Açıklaması
Başlatma: Seri haberleşmeyi başlatır ve sensör, LED'ler ve buzzer için gerekli pin modlarını tanımlar.

Mesafe Ölçümü:

Trig pinini kısa süreliğine düşük ve ardından yüksek yaparak ultrasonik sensörün bir sinyal göndermesini sağlar.
Echo pininde sinyalin geri dönme süresini ölçer (pulseIn fonksiyonu kullanılarak).
Mesafeyi hesaplar: Mesafe = (Süre / 2) / 29.1 (cm cinsinden).
Yakınlık Belirleme:

map fonksiyonu ile ölçülen mesafeyi 1 ile 4 arasında bir yakınlık seviyesine dönüştürür.
Yakınlık seviyesi, nesnenin mesafesine göre belirlenir ve bu seviye 4 LED'in durumunu kontrol eder.
LED ve Buzzer Kontrolü:

Tüm LED'leri kapatır.
Yakınlık seviyesine göre belirli sayıda LED'i açar.
Buzzer'ı yakar ve belirli bir süre sonra kapatır. Bu süre, yakınlık seviyesine göre değişir.
Mesafe ve Yakınlık Bilgisi:

Ölçülen mesafe ve yakınlık seviyesi seri monitörde gösterilir.
Kullanım
Arduino kartınıza uygun bağlantıları yapın:

Trig ve Echo pinlerini ultrasonik sensörünüze bağlayın.
LED'leri belirlenen pinlere bağlayın.
Buzzer'ı belirtilen pinlere bağlayın.
Arduino'yu bilgisayarınıza bağlayın ve kodu yükleyin.

Seri monitörde mesafe ve yakınlık seviyelerini izleyebilir ve nesne yaklaştıkça LED'lerin yanıp söndüğünü gözlemleyebilirsiniz.
