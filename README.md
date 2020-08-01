# Fotogrametri Helmert Benzerlik Dönüşümü

**Amaç;**

İki ayrı koordinat sistemindeki nokta kümelerinin, bir sistemdeki koordinatlarının diğer sisteme dönüştürülmesi işlemine koordinat dönüşümü ya da kısaca dönüşüm denir. Bu işlemi gerçekleştiren formüllere ise dönüşüm formülleri denir.


Jeodezi  uygulamalarında, başlangıç değerleri farklı, birbirlerine göre dönüklük açısı ve ölçek farkı bulunan koordinat sistemleri dönüşüm hesapları yardımı ile birbirine dönüştürülür. Fotogrametri uygulamalarında da dönüşüm hesapları ile sık karşılaşılır.


Dönüşüm formüllerinde geçen katsayılar (parametreler) biliniyorsa, bir sistemde koordinatları verilmiş bir noktanın diğer sistemdeki koordinatlarının bulunması dönüşüm formüllerinin uygulanmasından başka bir şey değildir. Genellikle dönüşüm parametreleri bilinmez, her iki sistemde de koordinatları bilinen ortak yada özdeş noktalar vardır. Ve bunlar yardımı ile parametreler hesaplanır. Çoğunlukla da bu hesaplama bir En Küçük Kareler Dengelemesine göre yapılır.(Prof.Dr.A.Yaşayan) Yazılım, Stereomodel koordinatları ve arazi koordinatları bilinen 4 ortak nokta yardımı ile dönüşüm katsayılarını hesaplamakta ve bu katsayılar ile diğer stereomodel koordinatlarının başka sistemdeki arazi koordinatlarını hesaplamaya (Helmert Benzerlik Dönüşümü) yardımcı olmak amaçlı kullanılmaktadır.

NOT: Koordinatlar arasında korelasyon yok ve herbir koordinat eşit ağırlıklı olarak düşünülmelidir.