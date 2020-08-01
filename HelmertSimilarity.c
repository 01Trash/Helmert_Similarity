#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");

	double Ox1, Ox2, Ox3, Ox4, Oy1, Oy2, Oy3, Oy4, OX1, OX2, OX3, OX4, OY1, OY2, OY3, OY4, x, y;
	double xg, yg, Xg, Yg, xo1, yo1, xo2, yo2, xo3, yo3, xo4, yo4, Xo1, Yo1, Xo2, Yo2, Xo3, Yo3, Xo4, Yo4, a, b, c, d;
	double Xd1, Yd1, Xd2, Yd2, Xd3, Yd3, Xd4, Yd4;
	double Vx1, Vy1, Vx2, Vy2, Vx3, Vy3, Vx4, Vy4;
	double X, Y, n, mo, mp, lamda;

		/// Bilinenleri isteyelim.
	// Ortak Stereomodel Koordinatlar; Ox1, Ox2, Ox3, Ox4, Oy1, Oy2, Oy3, Oy4;
	printf("Ox1 değerini giriniz: ");
	scanf("%lf", &Ox1);
	printf("Ox2 değerini giriniz: ");
	scanf("%lf", &Ox2);
	printf("Ox3 değerini giriniz: ");
	scanf("%lf", &Ox3);
	printf("Ox4 değerini giriniz: ");
	scanf("%lf", &Ox4);
	printf("Oy1 değerini giriniz: ");
	scanf("%lf", &Oy1);
	printf("Oy2 değerini giriniz: ");
	scanf("%lf", &Oy2);
	printf("Oy3 değerini giriniz: ");
	scanf("%lf", &Oy3);
	printf("Oy4 değerini giriniz: ");
	scanf("%lf", &Oy4);
	// Ortak Arazi Koordinatlar; OX1, OX2, OX3, OX4, OY1, OY2, OY3, OY4;
	printf("OX1 değerini giriniz: ");
	scanf("%lf", &OX1);
	printf("OX2 değerini giriniz: ");
	scanf("%lf", &OX2);
	printf("OX3 değerini giriniz: ");
	scanf("%lf", &OX3);
	printf("OX4 değerini giriniz: ");
	scanf("%lf", &OX4);
	printf("OY1 değerini giriniz: ");
	scanf("%lf", &OY1);
	printf("OY2 değerini giriniz: ");
	scanf("%lf", &OY2);
	printf("OY3 değerini giriniz: ");
	scanf("%lf", &OY3);
	printf("OY4 değerini giriniz: ");
	scanf("%lf", &OY4);
	// Steromodel Koordinatlar; x, y;
	printf("x değerini giriniz: ");
	scanf("%lf", &x);
	printf("y değerini giriniz: ");
	scanf("%lf", &y);

		/// Bilinmeyenlerin hesaplanması.
	printf("\n\t=== Hesap sonuçları! === \n");

	/* a, b, c, d dönüşüm parametrelerinin hesaplanması;
	Ortak noktalar kümesinin ağırlık noktası hesaplanması; xg, yg, Xg, Yg;
	xg = (Ox1 + Ox2 + Ox3 + Ox4) / 4;
	yg = (Oy1 + Oy2 + Oy3 + Oy4) / 4;
	Xg = (OX1 + OX2 + OX3 + OX4) / 4;
	Yg = (OY1 + OY2 + OY3 + OY4) / 4;
	Ortak noktaların ötelenmiş koordinatlarının hesaplanması; xo1, yo1, xo2, yo2, xo3, yo3, xo4, yo4, Xo1, Yo1, Xo2, Yo2, Xo3, Yo3, Xo4, Yo4;
	xo1 = Ox1 - xg;
	yo1 = Oy1 - yg;
	xo2 = Ox2 - xg;
	yo2 = Oy2 - yg;
	xo3 = Ox3 - xg;
	yo3 = Oy3 - yg;
	xo4 = Ox4 - xg;
	yo4 = Oy4 - yg;
	Xo1 = OX1 - Xg;
	Yo1 = OY1 - Yg;
	Xo2 = OX2 - Xg;
	Yo2 = OY2 - Yg;
	Xo3 = OX3 - Xg;
	Yo3 = OY3 - Yg;
	Xo4 = OX4 - Xg;
	Yo4 = OY4 - Yg;
	Ötelenmiş koordinatlar ile dönüşüm parametrelerinin hesaplanması; a, b, c, d;
	a = (((xo1 * Xo1) + (yo1 * Yo1)) + ((xo2 * Xo2) + (yo2 * Yo2)) + ((xo3 * Xo3) + (yo3 * Yo3)) + ((xo4 * Xo4) + (yo4 * Yo4))) / ((xo1 * xo1) + (yo1 * yo1)) + ((xo2 * xo2) + (yo2 * yo2)) + ((xo3 * xo3) + (yo3 * yo3)) + ((xo4 * xo4) + (yo4 * yo4));
	b = (((xo1 * Yo1) - (yo1 * Xo1)) + ((xo2 * Yo2) - (yo2 * Xo2)) + ((xo3 * Yo3) - (yo3 * Xo3)) + ((xo4 * Yo4) - (yo4 * Xo4))) / ((xo1 * xo1) + (yo1 * yo1)) + ((xo2 * xo2) + (yo2 * yo2)) + ((xo3 * xo3) + (yo3 * yo3)) + ((xo4 * xo4) + (yo4 * yo4));
	c = Xg - (a * xg) + (b * yg);
	d = Yg - (b * xg) - (a * yg); */
	//Ortak noktalar kümesinin ağırlık noktası hesaplanması; xg, yg, Xg, Yg;
	xg = (Ox1 + Ox2 + Ox3 + Ox4) / 4;
	yg = (Oy1 + Oy2 + Oy3 + Oy4) / 4;
	Xg = (OX1 + OX2 + OX3 + OX4) / 4;
	Yg = (OY1 + OY2 + OY3 + OY4) / 4;
	//Ortak noktaların ötelenmiş koordinatlarının hesaplanması;
	xo1 = Ox1 - xg;
	yo1 = Oy1 - yg;
	xo2 = Ox2 - xg;
	yo2 = Oy2 - yg;
	xo3 = Ox3 - xg;
	yo3 = Oy3 - yg;
	xo4 = Ox4 - xg;
	yo4 = Oy4 - yg;
	Xo1 = OX1 - Xg;
	Yo1 = OY1 - Yg;
	Xo2 = OX2 - Xg;
	Yo2 = OY2 - Yg;
	Xo3 = OX3 - Xg;
	Yo3 = OY3 - Yg;
	Xo4 = OX4 - Xg;
	Yo4 = OY4 - Yg;
	//Ötelenmiş koordinatlar ile dönüşüm parametrelerinin hesaplanması;
	a = (((xo1 * Xo1) + (yo1 * Yo1)) + ((xo2 * Xo2) + (yo2 * Yo2)) + ((xo3 * Xo3) + (yo3 * Yo3)) + ((xo4 * Xo4) + (yo4 * Yo4))) / ((xo1 * xo1) + (yo1 * yo1)) + ((xo2 * xo2) + (yo2 * yo2)) + ((xo3 * xo3) + (yo3 * yo3)) + ((xo4 * xo4) + (yo4 * yo4));
	b = (((xo1 * Yo1) - (yo1 * Xo1)) + ((xo2 * Yo2) - (yo2 * Xo2)) + ((xo3 * Yo3) - (yo3 * Xo3)) + ((xo4 * Yo4) - (yo4 * Xo4))) / ((xo1 * xo1) + (yo1 * yo1)) + ((xo2 * xo2) + (yo2 * yo2)) + ((xo3 * xo3) + (yo3 * yo3)) + ((xo4 * xo4) + (yo4 * yo4));
	c = Xg - (a * xg) + (b * yg);
	d = Yg - (b * xg) - (a * yg);

	/* Ortak noktaların dönüştürülmüş koordinatlarının hesaplanması (Helmert Benzerlik Dönüşümü ile); Xd1, Yd1, Xd2, Yd2, Xd3, Yd3, Xd4, Yd4;
	Xd1 = (a * Ox1) - (b * Oy1) + c;
	Yd1 = (b * Ox1) + (a * Oy1) + d;
	Xd2 = (a * Ox2) - (b * Oy2) + c;
	Yd2 = (b * Ox2) + (a * Oy2) + d;
	Xd3 = (a * Ox3) - (b * Oy3) + c;
	Yd3 = (b * Ox3) + (a * Oy3) + d;
	Xd4 = (a * Ox4) - (b * Oy4) + c;
	Yd4 = (b * Ox4) + (a * Oy4) + d; */
	Xd1 = (a * Ox1) - (b * Oy1) + c;
	Yd1 = (b * Ox1) + (a * Oy1) + d;
	Xd2 = (a * Ox2) - (b * Oy2) + c;
	Yd2 = (b * Ox2) + (a * Oy2) + d;
	Xd3 = (a * Ox3) - (b * Oy3) + c;
	Yd3 = (b * Ox3) + (a * Oy3) + d;
	Xd4 = (a * Ox4) - (b * Oy4) + c;
	Yd4 = (b * Ox4) + (a * Oy4) + d;
	printf("Xd1 dönüştürülmüş değeri: %f\n", Xd1);
	printf("Yd1 dönüştürülmüş değeri: %f\n", Yd1);
	printf("Xd2 dönüştürülmüş değeri: %f\n", Xd2);
	printf("Yd2 dönüştürülmüş değeri: %f\n", Yd2);
	printf("Xd3 dönüştürülmüş değeri: %f\n", Xd3);
	printf("Yd3 dönüştürülmüş değeri: %f\n", Yd3);
	printf("Xd4 dönüştürülmüş değeri: %f\n", Xd4);
	printf("Yd4 dönüştürülmüş değeri: %f\n", Yd4);

	/* Ortak Noktaların Koordinatlarına getirilecek düzeltmelerin hesaplanması; Vx1, Vy1, Vx2, Vy2, Vx3, Vy3, Vx4, Vy4;
	Vx1 = Xd1 - OX1;
	Vy1 = Yd1 - OY1;
	Vx2 = Xd2 - OX2;
	Vy2 = Yd2 - OY2;
	Vx3 = Xd3 - OX3;
	Vy3 = Yd3 - OY3;
	Vx4 = Xd4 - OX4;
	Vy4 = Yd4 - OY4; */
	Vx1 = Xd1 - OX1;
	Vy1 = Yd1 - OY1;
	Vx2 = Xd2 - OX2;
	Vy2 = Yd2 - OY2;
	Vx3 = Xd3 - OX3;
	Vy3 = Yd3 - OY3;
	Vx4 = Xd4 - OX4;
	Vy4 = Yd4 - OY4;
	printf("Vx1 düzeltme değeri: %f\n", Vx1);
	printf("Vy1 düzeltme değeri: %f\n", Vy1);
	printf("Vx2 düzeltme değeri: %f\n", Vx2);
	printf("Vy2 düzeltme değeri: %f\n", Vy2);
	printf("Vx3 düzeltme değeri: %f\n", Vx3);
	printf("Vy3 düzeltme değeri: %f\n", Vy3);
	printf("Vx4 düzeltme değeri: %f\n", Vx4);
	printf("Vy4 düzeltme değeri: %f\n", Vy4);

	/* Ortak noktalar dışındaki,diğer stereomodel koordinatlarına karşılık gelen arazi koordinatlarının hesaplanması Helmert Benzerlik Dönüşümü ile; X, Y;
	X = (a * x) - (b * y) + c;
	Y = (b * x) + (a * y) + d; */
	X = (a * x) - (b * y) + c;
	printf("X değeri: %f\n", X);
	Y = (b * x) + (a * y) + d; 
	printf("Y değeri: %f\n", Y);

	/* Bir Koordinatın ortalama hatasının hesaplanması; n, mo
	n = 4;
	mo = Sqrt(((Vx1^2) + (Vx2^2)+ (Vx3^2)+ (Vx4^2)+ (Vy1^2)+ (Vy2^2)+ (Vy3^2)+ (Vy4^2)) / ((2 * n) - 4)); */
	n = 4;
	mo = pow(((pow(Vx1, 2) + pow(Vx2, 2)+ pow(Vx3, 2)+ pow(Vx4, 2)+ pow(Vy1, 2)+ pow(Vy2, 2)+ pow(Vy3, 2)+ pow(Vy4, 2)) / ((2 * n) - 4)), 0.5);
	printf("mo değeri: %f\n", mo);
	
	/* Konum ortalama hatasının hesaplanması; mp
	mp = Sqrt(((Vx1^2) + (Vx2^2) + (Vx3^2) + (Vx4^2) + (Vy1^2) + (Vy2^2) + (Vy3^2) + (Vy4^2)) / (n - 2)); */
	mp = pow(((pow(Vx1, 2) + pow(Vx2, 2) + pow(Vx3, 2) + pow(Vx4, 2) + pow(Vy1, 2) + pow(Vy2, 2) + pow(Vy3, 2) + pow(Vy4, 2)) / (n - 2)), 0.5);
	printf("mp değeri: %f\n", mp);

	/* Ölçek hesaplanması; lamda
	λ = Sqrt((a^2) + (b^2)); */
	lamda = pow((pow(a, 2) + pow(b, 2)), 0.5);
	printf("λ değeri: %f\n", lamda);

	return 0;
}
