#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

#define M_PI 3.14159265358979323846


int get_category_input() {
    int category_input;
    printf("\nMasukkan kategori yang anda pilih: ");
    scanf("%d", &category_input);

    return category_input;
}

int get_operation_input() {
    int operation_input;
    printf("\nMasukkan operasi yang anda pilih: ");
    scanf("%d", &operation_input);

    return operation_input;
}

// fungsi untuk menampilkan home page dan mengembalikan nilai pilihan kategori
int show_home_page() {
    printf("\nKALKULATOR\n");
    printf("v.1.0.0\n");
    printf("By: Tabita Novi Sinaga\n\n");

    printf("Silahkan pilih kategori yang tersedia:\n");
    printf("1) Kategori Matematika Dasar\n");
    printf("2) Kategori Trigonometri\n");
    printf("3) Kategori Suhu\n");
    printf("4) Kategori Mata Uang\n");
    printf("5) Kategori Luas atau Area\n");
    printf("6) Kategori Matriks\n");
    printf("7) Kategori Kalkulus\n");
    printf("8) Tutup Aplikasi\n");

    return get_category_input();
}

bool check_validation_category_input(int category_input) {
    if (category_input != 1 && category_input != 2 && category_input != 3 && category_input != 4 && category_input != 5 && category_input != 6 && category_input != 7) {
        return true;
    }
    return false;
}

// fungsi untuk menampilkan operasi yang tersedia pada kategori matematika dasar
int show_operation_list_basic_math() {
    printf("\n=== Kategori Matematika Dasar ===\n");
    printf("1) Penjumlahan\n");
    printf("2) Pengurangan\n");
    printf("3) Pembagian\n");
    printf("4) Perkalian\n");
    printf("5) Pangkat\n");
    printf("6) Modulus\n");
    printf("7) Faktorial\n");
    printf("8) Akar\n");
    printf("9) Pembulatan Angka\n");
    printf("10) Nilai mutlak/Absolut\n");
    printf("11) Diskon\n");
    printf("12) Logaritma (basis 10)\n");
    printf("13) Akar Pangkat 3\n");
    printf("14) Kombinasi\n");
    printf("15) Permutasi\n");
    printf("16) ARITMATIKA CAMPURAN (tambah, kurang, kali, bagi, akar, pangkat, modulus)\n");

    return get_operation_input();
}

// fungsi untuk menampilkan operasi yang tersedia pada kategori Trigonometri
int show_operation_list_trigonomentri() {
    printf("\n=== Kategori Trigonometri ===\n");
    printf("1) Sin\n");
    printf("2) Cos\n");
    printf("3) Tan\n"); 
    printf("4) Csc\n");
    printf("5) Sec\n");
    printf("6) Cot\n");
    printf("7) arc Sin\n");
    printf("8) arc Cos\n");
    printf("9) arc Tan\n");
    printf("10) arc Csc\n");
    printf("11) arc Sec\n");
    printf("12) arc Cot\n");

    return get_operation_input();
}

// fungsi untuk menampilkan operasi yang tersedia pada kategori Suhu
int show_operation_list_temperature() {
    printf("\n=== Kategori Suhu ===\n");
    printf("1) Celcius --> Reamur\n");
    printf("2) Celcius --> Fahrenheit\n");
    printf("3) Celcius --> Kelvin\n");
    printf("4) Reamur --> Celcius\n");
    printf("5) Reamur --> Fahrenheit\n");
    printf("6) Reamur --> Kelvin\n");
    printf("7) Fahreinheit --> Celcius\n");
    printf("8) Fahreheit --> Kelvin\n");
    printf("9) Fahreheit --> Reamur\n");
    printf("10) Kelvin --> Celcius\n");
    printf("11) Kelvin --> Fahreinheit\n");
    printf("12) Kelvin --> Reamur\n");
    
    return get_operation_input();
}

// fungsi untuk menampilkan operasi yang tersedia pada kategori Mata Uang
int show_operation_list_money_currency() {
    printf("\n=== Kategori Mata Uang ===\n");
    printf("1) Rupiah --> US Dollar\n");
    printf("2) Rupiah --> Pounds\n");
    printf("3) Rupiah --> Euro\n");
    printf("4) Rupiah --> Gulden\n");
    printf("5) Rupiah --> Yen\n");

    return get_operation_input();
}

// fungsi untuk menampilkan operasi yang tersedia pada kategori area
int show_operation_list_area() {
    printf("\n=== Kategori Luas ===\n");
    printf("1) Lingkaran\n");
    printf("2) Tabung\n");
    printf("3) Persegi\n");
    printf("4) Persegi Panjang\n");
    printf("5) Bola\n");
    printf("6) Segitiga\n");
    printf("7) Kerucut\n");
    printf("8) Kubus\n");
    printf("9) Balok\n");

    return get_operation_input();
}

// fungsi untuk menampilkan operasi yang tersedia pada kategori matriks
int show_operation_list_matrix() {
    printf("\n=== Kategori Matriks ===\n");
    printf("1) Penjumlahan\n");
    printf("2) Pengurangan\n");
    printf("3) Perkalian\n");

    return get_operation_input();
}

// fungsi untuk menampilkan operasi yang tersedia pada kategori matriks
int show_operation_list_calculus() {
    printf("\n=== Kategori Kalkulus ===\n");
    printf("1) Turunan\n");
    printf("2) Integral\n");

    return get_operation_input();
}

int show_operation_list_or_exit(int category_input) {
    int operation_input;
    if (category_input == 1) {
        operation_input = show_operation_list_basic_math();
    } else if (category_input == 2) {
        operation_input = show_operation_list_trigonomentri();
    } else if (category_input == 3) {
        operation_input = show_operation_list_temperature();
    } else if (category_input == 4) {
        operation_input = show_operation_list_money_currency();
    } else if (category_input == 5) {
        operation_input = show_operation_list_area();
    } else if (category_input == 6) {
        operation_input = show_operation_list_matrix();
    } else if (category_input == 7) {
        operation_input = show_operation_list_calculus();
    } else if (category_input == 8) {
        printf(">>> Aplikasi kalkulator ditutup!");
        exit(0);
    }

    return operation_input;
}

// fungsi untuk menentukan validasi input untuk operasi pada kategori matematika dasar
bool check_validation_basic_math_operation_input(int operation_input) {
    if (operation_input != 1 && operation_input != 2 && operation_input != 3 && operation_input != 4 && operation_input != 5 && operation_input != 6 && operation_input != 7 && operation_input != 8 && operation_input != 9 && operation_input != 10 && operation_input != 11 && operation_input != 12 && operation_input != 13 && operation_input != 14 && operation_input != 15 && operation_input != 16 && operation_input != 17) {
        return true;
    } 
    return false;
}

// fungsi untuk menentukan validasi input untuk operasi pada kategori trigonometri
bool check_validation_trigonometry_operation_input(int operation_input) {
    if (operation_input != 1 && operation_input != 2 && operation_input != 3 && operation_input != 4 && operation_input != 5 && operation_input != 6 && operation_input != 7 && operation_input != 8 && operation_input != 9 && operation_input != 10 && operation_input != 11 && operation_input != 12 && operation_input != 13) {
        return true;
    }
    return false;
}

// fungsi untuk menentukan validasi input untuk operasi pada ketegori suhu
bool check_validation_temperature_operation_input(int operation_input) {
     if (operation_input != 1 && operation_input != 2 && operation_input != 3 && operation_input != 4 && operation_input != 5 && operation_input != 6 && operation_input != 7 && operation_input != 8 && operation_input != 9 && operation_input != 10 && operation_input != 11 && operation_input != 12 && operation_input != 13) {
        return true;
    } 
    return false;
}

// fungsi untuk menentukan validasi input untuk operasi pada kategori konversi uang
bool check_validation_money_converter_input(int operation_input) {
    if (operation_input != 1 && operation_input != 2 && operation_input != 3 && operation_input != 4 && operation_input != 5 && operation_input != 6) {
        return true;
    } 
    return false;
}

// fungsi untuk menentukan validasi input untuk operasi pada kategori luas
bool check_validation_area_operation_input(int operation_input) {
    if (operation_input != 1 && operation_input != 2 && operation_input != 3 && operation_input != 4 && operation_input != 5 && operation_input != 6 && operation_input != 7 && operation_input != 8 && operation_input != 9 && operation_input != 10) {
        return true;
    } 
    return false;
}

// fungsi untuk menentukan validasi input untuk operasi pada kategori matriks
bool check_validation_matrix_operation_input(int operation_input) {
    if (operation_input != 1 && operation_input != 2 && operation_input != 3 && operation_input != 4) {
        return true;
    } 
    return false;
}

// fungsi untuk menentukan validasi input untuk operasi pada kategori kalkulus
bool check_validation_calculus_operation_input(int operation_input) {
    if (operation_input != 1 && operation_input != 2 && operation_input != 3) {
        return true;
    } 
    return false;
}

// fungsi untuk menentukan validasi input operasi
bool check_validation_operation_input(int category_input, int operation_input) {
    if (category_input == 1) {
        return check_validation_basic_math_operation_input(operation_input);
    } else if (category_input == 2) {
        return check_validation_trigonometry_operation_input(operation_input);
    } else if (category_input == 3) {
        return check_validation_temperature_operation_input(operation_input);
    } else if (category_input == 4) {
        return check_validation_money_converter_input(operation_input);
    } else if (category_input == 5) {
        return check_validation_area_operation_input(operation_input);
    } else if (category_input == 6) {
        return check_validation_matrix_operation_input(operation_input);
    } else if (category_input == 7) {
        return check_validation_calculus_operation_input(operation_input);
    } else if (category_input == 8) {
        printf(">>> Aplikasi kalkulator ditutup!");
        exit(0);
    }
}

//START

// fungsi untuk operasi penjumlahan
void run_sum_operation() {
    int angka, result = 0;
    bool validInput = true;

    printf("Masukkan angka-angka (dipisahkan oleh spasi, akhiri dengan karakter '='): ");

    while (validInput) {
        if (scanf("%d", &angka) == 1) {
            result += angka;
        } else {
            if (getchar() == '=') {
                break;
            }
            validInput = false;
        }
    }

    if (validInput) {
        printf("Hasil penjumlahan adalah: %d\n", result);
    } else {
        printf("Input tidak valid. Hentikan operasi penjumlahan.\n");
    }
}

// fungsi untuk operasi pengurangan
void run_subtraction_operation() {
    int angka, result = 0;
    bool validInput = true;

    printf("Masukkan angka-angka (dipisahkan oleh spasi, akhiri dengan karakter '='): ");

    if (scanf("%d", &result) != 1) {
        validInput = false;
    }

    while (validInput) {
        if (scanf("%d", &angka) == 1) {
            result -= angka; // Menggunakan operator pengurangan -=
        } else {
            if (getchar() == '=') {
                break;
            }
            validInput = false;
        }
    }

    if (validInput) {
        printf("Hasil pengurangan adalah: %d\n", result); 
    } else {
        printf("Input tidak valid. Hentikan operasi pengurangan.\n"); 
    }
}

// fungsi untuk operasi pembagian
void run_division_operation() {
    double angka, result = 0;
    bool validInput = true;

    printf("Masukkan angka-angka (dipisahkan oleh spasi, akhiri dengan karakter '='): ");

    while (validInput) {
        if (scanf("%lf", &angka) == 1) {
            if (angka == 0) {
                if (result == 1) {
                    printf("Hasil pembagian adalah: tak hingga\n");
                    return;
                } else {
                    validInput = false;
                }
            } else {
                if (result == 0) {
                    result = angka;
                } else {
                    result /= angka;
                }
            }
        } else {
            if (getchar() == '=') {
                break;
            }
            validInput = false;
        }
    }

    if (validInput) {
        printf("Hasil pembagian adalah: %.2lf\n", result);
    } else {
        printf("Input tidak valid. Hentikan operasi pembagian.\n");
    }
}

// fungsi untuk operasi perkalian
void run_multiplication_operation() {
    int angka, result = 1; // Ubah nilai awal result menjadi 1 untuk operasi perkalian
    bool validInput = true;

    printf("Masukkan angka-angka (dipisahkan oleh spasi, akhiri dengan karakter '='): ");

    while (validInput) {
        if (scanf("%d", &angka) == 1) {
            result *= angka; // Menggunakan operator perkalian *=
        } else {
            if (getchar() == '=') {
                break;
            }
            validInput = false;
        }
    }

    if (validInput) {
        printf("Hasil perkalian adalah: %d\n", result); 
    } else {
        printf("Input tidak valid. Hentikan operasi perkalian.\n"); 
    }
}

// fungsi untuk operasi pangkat
void run_power_operation() {
    double base_number;
    double rank_number;
    double result = 1.0;

    printf("Operasi Pangkat\n");
    printf("Masukkan bilangan basis: ");
    scanf("%lf", &base_number); 
    printf("Masukkan bilangan pangkat: ");
    scanf("%lf", &rank_number);

    for (int i = 1; i <= rank_number; i++) {
        result = result * base_number;
    }

    printf(">>> %.2lf ^ %.2lf = %.2lf\n", base_number, rank_number, result);
}

// fungsi untuk operasi modulus (sisa bagi)
void run_modulus_operation() {
    int first_number;
    int second_number;

    printf("Operasi Modulus\n");
    printf("Masukkan bilangan pertama: ");
    scanf("%d", &first_number);
    printf("Masukkan bilangan kedua: ");
    scanf("%d", &second_number);

    int result = first_number % second_number;

    printf(">>> %d mod %d = %d\n", first_number, second_number, result);
}

// fungsi untuk operasi faktorial
void run_factorial_operation() {
    int base_number;
    int result = 1;

    printf("Operasi Faktorial\n");
    printf("Masukkan bilangan faktorial: ");
    scanf("%d", &base_number);

    for (int i = base_number; i >= 1; i--) {
        result = result * i;
    }

    printf(">>> Hasil faktorial %d! = %d", base_number, result);
}

// fungsi untuk operasi akar
void run_root_operation() {
    double number;

    printf("Operasi Akar\n");
    printf("Masukkan angka yang akan diakarkan: ");
    scanf("%lf", &number);

    double result = sqrt(number);

    printf(">>> Hasil pengakaran dari %.2lf = %.2lf", number, result);
}

// fungsi untuk operasi pembulatan angka
void run_rounding_operation() {
    double bilangan;

    printf("Masukkan sebuah bilangan: ");
    scanf("%lf", &bilangan);

    double hasil_ceil = ceil(bilangan);
    double hasil_floor = floor(bilangan);

    printf("Pembulatan ke atas (ceil): %.2f\n", hasil_ceil);
    printf("Pembulatan ke bawah (floor): %.2f\n", hasil_floor);
}

// fungsi untuk operasi nilai mutlak
void run_absolute_value_operation() {
    double bilangan;

    printf("Masukkan sebuah bilangan: ");
    scanf("%lf", &bilangan);

    double nilai_mutlak;

    if (bilangan < 0)
        nilai_mutlak = -bilangan;
    else
        nilai_mutlak = bilangan;

    printf("Nilai mutlak ( |x| ) dari %.2f adalah %.2f\n", bilangan, nilai_mutlak);
}

// fungsi untuk operasi diskon
void run_discount_operation() {
    double harga, diskon;

    printf("Masukkan harga barang: ");
    scanf("%lf", &harga);

    printf("Masukkan persentase diskon: ");
    scanf("%lf", &diskon);

    double jumlahDiskon = (harga * diskon) / 100;
    double hargaSetelahDiskon = harga - jumlahDiskon;

    printf("Jumlah diskon: %.2f\n", jumlahDiskon);
    printf("Harga setelah diskon: %.2f\n", hargaSetelahDiskon);
}

// fungsi untuk operasi logaritma
void run_logarithm_base10_operation() {
    double angka;
    printf("Masukkan angka: ");
    scanf("%lf", &angka);

    double hasil = log10(angka);

    printf("Log(base 10) dari %.2lf adalah %.2lf\n", angka, hasil);
}

// fungsi untuk operasi Akar pangkat 3
void run_cube_root_operation() {
    double bilangan;
    printf("Masukkan bilangan: ");
    scanf("%lf", &bilangan);

    double hasil = cbrt(bilangan);
    printf("Akar pangkat 3 dari %.2f adalah %.2f\n", bilangan, hasil);
}

// fungsi untuk operasi Kombinasi
long long faktorial(int n) {
    long long hasil = 1;
    for (int i = 1; i <= n; i++) {
        hasil *= i;
    }
    return hasil;
}

void run_combination_operation() {
    int n, r;
    printf("Masukkan nilai n: ");
    scanf("%d", &n);
    printf("Masukkan nilai r: ");
    scanf("%d", &r);

    if (n < 0 || r < 0 || n < r) {
        printf("Input tidak valid.\n");
    } else {
        long long hasil = faktorial(n) / (faktorial(r) * faktorial(n - r));
        printf("Kombinasi dari C(%d, %d) adalah %lld\n", n, r, hasil);
    }
}

// fungsi untuk operasi permutasi
long long factorial(int n) {
    long long hasil = 1;
    for (int i = 1; i <= n; i++) {
        hasil *= i;
    }
    return hasil;
}

void run_permutation_operation() {
    int n, r;
    printf("Masukkan nilai n: ");
    scanf("%d", &n);
    printf("Masukkan nilai r: ");
    scanf("%d", &r);

    if (n < 0 || r < 0 || n < r) {
        printf("Input tidak valid.\n");
    } else {
        long long hasil = faktorial(n) / faktorial(n - r);
        printf("Permutasi dari P(%d, %d) adalah %lld\n", n, r, hasil);
    }
}

// fungsi untuk aritmatika campuran (+,-,*,/,^,%,v)
// penulisan untuk akar: 16 v 2 (untuk akar 2), 8 v 3 (untuk akar 3) 

void run_aritmatika_campuran_operation() {
    char ops;
    double angka, result;
    char opsArray[100];
    double angkaArray[100];
    int i = 0, count = 0;
    bool validInput = true;
    
    printf("Masukkan hitungan: \n");
    
    if (scanf(" %lf", &angkaArray[0]) != 1) {
        printf("Invalid input\n");
        return;
    }
    
    while (validInput) {
        count++;
        if (scanf(" %c", &ops) == 1 && ops != '=') {
          scanf (" %lf", &angka);
            if (ops == '^' || ops == 'v') {        
                if (ops == '^'){
                    angkaArray[i] = pow(angkaArray[i], angka);
                    result = angkaArray[i];
                } else {
                    angkaArray[i] = pow(angkaArray[i], 1.0 / angka);
                    result = angkaArray[i];
                }
            } else {
                opsArray[i] = ops;
                angkaArray[i + 1] = angka;
                i++;
            }
        } else {
            if (ops == '=') {
                break;
            }
            validInput = false;
        }
    }

    for (i = 0; i < count; i++) {
        if (opsArray[i] == '*' || opsArray[i] == '/' || opsArray[i] == '%') {

            if (opsArray[i] == '*') {
                angkaArray[i] *= angkaArray[i + 1];
            } else if (opsArray[i] == '%') {
                angkaArray[i] = fmod(angkaArray[i], angkaArray[i + 1]);
            } else {
                if (angkaArray[i + 1] == 0) {
                    printf("Error: Division by Zero\n");
                    return;
                }
                angkaArray[i] /= angkaArray[i + 1];
            }
            for (int j = i; j < count - 1; j++) {
                opsArray[j] = opsArray[j + 1];
                angkaArray[j + 1] = angkaArray[j + 2];
            }
            i--;
            count--;
        }
    }

    result = angkaArray[0];
    for (int i = 0; i < count; i++) {
        if (opsArray[i] == '+' || opsArray[i] == '-') {
            if (opsArray[i] == '+') {
                result += angkaArray[i + 1];
            } else {
                result -= angkaArray[i + 1];
            }
        }
    }
    
    if (validInput) {
        printf("Hasil penjumlahan adalah: %.2f\n", result);
    } else {
        printf("Input tidak valid. Hentikan operasi penjumlahan.\n");
    }
}

// fungsi MATEMATIKA DASAR
void run_basic_math_operation(int operation_input) {
    switch (operation_input) {
        case 1:
            run_sum_operation();
            break;
        case 2: 
            run_subtraction_operation();
            break;
        case 3:
            run_division_operation();
            break;
        case 4:
            run_multiplication_operation();
            break;
        case 5:
            run_power_operation();
            break;
        case 6:
            run_modulus_operation();
            break;
        case 7:
            run_factorial_operation();
            break;
        case 8:
            run_root_operation();  
            break;
        case 9:
            run_rounding_operation();
            break;
        case 10:
            run_absolute_value_operation();
            break;
        case 11:
            run_discount_operation();
            break;
        case 12:
            run_logarithm_base10_operation();
            break;
        case 13:
            run_cube_root_operation();
            break;
        case 14:
            run_combination_operation();
            break;
        case 15:
            run_permutation_operation();
            break;
        case 16:
            run_aritmatika_campuran_operation();
            break;
    }
}

//===============================================================================================================================================================================================

// fungsi untuk sin
void run_sin_operation() {
    double angle;

    printf("Operasi Sin\n");
    printf("Masukkan sudut derajat: ");
    scanf("%lf", &angle);

    double radian = angle * (M_PI / 180.0);
    double result = sin(radian);

    printf("Nilai sinus dari %.2lf derajat = %.2lf\n", angle, result);
}

// fungsi untuk cos
void run_cos_operation() {
    double angle;

    printf("Operasi Cos\n");
    printf("Masukkan sudut derajat: ");
    scanf("%lf", &angle);

    double radian = angle * (M_PI / 180.0);
    double result = cos(radian);

    printf("Nilai cosinus dari %.2lf derajat = %.2lf\n", angle, result);
}

// fungsi untuk tan
void run_tan_operation() {
    double angle;

    printf("Operasi Tan\n");
    printf("Masukkan sudut derajat: ");
    scanf("%lf", &angle);

    if (angle == 90 || angle == 270) {
        printf("TIDAK TERDEFINISI\n", angle);
    } else {
        double radian = angle * (M_PI / 180.0);
        double result = tan(radian);

        printf("Nilai tangen dari %.2lf derajat = %.2lf\n", angle, result);
    }
}

// fungsi untuk cosecan
void run_csc_operation() {
    double angle;

    printf("Operasi Cosec\n");
    printf("Masukkan sudut derajat: ");
    scanf("%lf", &angle);

    if (angle == 0 || angle == 180 || angle == 360) {
        printf("TIDAK TERDEFINISI\n", angle);
    } else {
        double radian = angle * (M_PI / 180.0);
        double result = 1 / sin(radian);  // Menggunakan 1/sin untuk mendapatkan nilai cosec

        printf("Nilai cosec dari %.2lf derajat = %.2lf\n", angle, result);
    }
}

// fungsi untuk secan
void run_sec_operation() {
    double angle;

    printf("Operasi Sec\n");
    printf("Masukkan sudut derajat: ");
    scanf("%lf", &angle);

    if (angle == 90 || angle == 270) {
        printf("TIDAK TERDEFINISI\n", angle);
    } else {
        double radian = angle * (M_PI / 180.0);
        double result = 1 / cos(radian);  // Menggunakan 1/sin untuk mendapatkan nilai cosec

        printf("Nilai sec dari %.2lf derajat = %.2lf\n", angle, result);
    }
}

// fungsi untuk cotangen
void run_cot_operation() {
    double angle;

    printf("Operasi Cot\n");
    printf("Masukkan sudut derajat: ");
    scanf("%lf", &angle);

    if (angle == 0 || angle == 180 || angle == 360) {
        printf("TIDAK TERDEFINISI\n", angle);
    } else {
        double radian = angle * (M_PI / 180.0);
        double result = 1 / tan(radian);  // Menggunakan 1/sin untuk mendapatkan nilai cosec

        printf("Nilai cot dari %.2lf derajat = %.2lf\n", angle, result);
    }
}

// fungsi untuk arc sin
void run_arc_sin_operation() {
    double sinValue; // Nilai sinus untuk menghitung sudut

    printf("Masukkan nilai sinus untuk menghitung sudut: ");
    scanf("%lf", &sinValue);

    // Memastikan sinValue berada dalam rentang -1 hingga 1
    if (sinValue >= -1 && sinValue <= 1) {
        double angleRad = asin(sinValue);
        double angleDeg = angleRad * 180 / M_PI;

        printf("Sudut arcsin(%.4f) = %.4f radian\n", sinValue, angleRad);
        printf("Sudut arcsin(%.4f) = %.4f derajat\n", sinValue, angleDeg);
    } else {
        printf("Nilai sinus %.4f tidak berada dalam rentang yang valid.\n", sinValue);
    }
}

// fungsi untuk arc cos
void run_arc_cos_operation() {
    double x; // Bilangan untuk menghitung arccos

    printf("Masukkan bilangan untuk menghitung arccos: ");
    scanf("%lf", &x);

    // Memastikan x berada dalam rentang -1 hingga 1 untuk fungsi arccos
    if (x >= -1 && x <= 1) {
        double arccos = acos(x);

        printf("Arccos(%.2f) = %.4f radian\n", x, arccos);
        printf("Arccos(%.2f) = %.4f derajat\n", x, arccos * 180 / M_PI);
    } else {
        printf("Bilangan %.2f tidak berada dalam rentang yang valid.\n", x);
    }
}

// fungsi untuk arc tan
void run_arc_tan_operation() {
    double x; // Bilangan untuk menghitung arctan

    printf("Masukkan bilangan untuk menghitung arctan: ");
    scanf("%lf", &x);

    double arctan = atan(x);

    printf("Arctan(%.2f) = %.4f radian\n", x, arctan);
    printf("Arctan(%.2f) = %.4f derajat\n", x, arctan * 180 / M_PI);
}

// fungsi untuk arc csc
void run_arc_csc_operation() {
    double x; // Bilangan untuk menghitung arccsc

    printf("Masukkan bilangan untuk menghitung arccsc: ");
    scanf("%lf", &x);

    // Memastikan x tidak sama dengan 0
    if (x != 0) {
        double arccsc = asin(1 / x);

        printf("Arccsc(%.2f) = %.4f radian\n", x, arccsc);
        printf("Arccsc(%.2f) = %.4f derajat\n", x, arccsc * 180 / M_PI);
    } else {
        printf("Bilangan %.2f tidak valid untuk fungsi arccsc.\n", x);
    }
}

// fungsi untuk arc sec
void run_arc_sec_operation() {
    double x; // Bilangan untuk menghitung arcsec

    printf("Masukkan bilangan untuk menghitung arcsec: ");
    scanf("%lf", &x);

    // Memastikan x berada dalam rentang -1 hingga 1, kecuali x = 0
    if ((x >= -1 && x <= 1) && x != 0) {
        double arcsec = acos(1 / x);

        printf("Arcsec(%.2f) = %.4f radian\n", x, arcsec);
        printf("Arcsec(%.2f) = %.4f derajat\n", x, arcsec * 180 / M_PI);
    } else {
        printf("Bilangan %.2f tidak valid untuk fungsi arcsec.\n", x);
    }
}

// fungsi untuk arc cot
void run_arc_cot_operation() {
    double x; // Bilangan untuk menghitung arccot

    printf("Masukkan bilangan untuk menghitung arccot: ");
    scanf("%lf", &x);

    double arccot = atan(1 / x);

    printf("Arccot(%.2f) = %.4f radian\n", x, arccot);
    printf("Arccot(%.2f) = %.4f derajat\n", x, arccot * 180 / M_PI);
}

// fungsi TRIGONOMETRI
void run_trigonometry_operation(int operation_input) {
    if (operation_input == 1) {
        run_sin_operation();
    } else if (operation_input == 2) {
        run_cos_operation();
    } else if (operation_input == 3) {
        run_tan_operation();
    } else if (operation_input == 4) {
        run_csc_operation();
    } else if (operation_input == 5) {
        run_sec_operation();
    } else if (operation_input == 6) {
        run_cot_operation();
    } else if (operation_input == 7) {
        run_arc_sin_operation();
    } else if (operation_input == 8) {
        run_arc_cos_operation();
    } else if (operation_input == 9) {
        run_arc_tan_operation();
    } else if (operation_input == 10) {
        run_arc_csc_operation();
    } else if (operation_input == 11) {
        run_arc_sec_operation(); 
    } else if (operation_input == 12) {
        run_arc_cot_operation();
    }
}

//=====================================================================================================================================================================================================================================================================================================

// fungsi untuk konversi C ke R
void run_celcius_to_reamur() {
    double degree;

    printf("Operasi Konversi Celcius -> Reamur\n");
    printf("Masukkan derajat suhu dalam celcius: ");
    scanf("%lf", &degree);

    double reamur_result = degree * 0.8;

    printf("Hasil konversi celcius ke reamur %.2lf adalah %.2lf\n", degree, reamur_result);
}

//fungsi untuk konversi C ke F
void run_celcius_to_fahrenheit() {
    double degree;

    printf("Operasi Konversi Celcius -> Fahrenheit\n");
    printf("Masukkan derajat suhu dalam celsius: ");
    scanf("%lf", &degree);

    double fahrenheit_result = (degree * 9 / 5) + 32;

    printf("Hasil konversi celcius ke fahrenheit %.2lf adalah %.2lf\n", degree, fahrenheit_result);
}

// fungsi untuk konversi C ke K
void run_celcius_to_kelvin() {
    double degree;

    printf("Operasi Konversi Celcius -> Kelvin\n");
    printf("Masukkan derajat suhu dalam celsius: ");
    scanf("%lf", &degree);

    double kelvin_result = degree + 273.15;

    printf("Hasil konversi celcius ke fahrenheit %.2lf adalah %.2lf\n", degree, kelvin_result);
}

// fungsi untuk konversi R ke C
void run_reamur_to_celcius() {
    double degree;

    printf("Operasi Konversi Reamur -> Celcius\n");
    printf("Masukkan derajat suhu dalam reamur: ");
    scanf("%lf", &degree);

    double celcius_result = degree * 1.25;

    printf("Hasil konversi reamur ke celcius %.2lf adalah %.2lf\n", degree, celcius_result);
}

// fungsi untuk konversi R ke F
void run_reamur_to_fahrenheit() {
    double degree;

    printf("Operasi Konversi Reamur -> Fahrenheit\n");
    printf("Masukkan derajat suhu dalam reamur: ");
    scanf("%lf", &degree);

    double fahrenheit_result = (degree * 2.25) + 32;

    printf("Hasil konversi reamur ke celcius %.2lf adalah %.2lf\n", degree, fahrenheit_result);
}

// fungsi untuk konversi R ke K
void run_reamur_to_kelvin() {
    double degree;

    printf("Operasi Konversi Reamur -> Kelvin\n");
    printf("Masukkan derajat suhu dalam reamur: ");
    scanf("%lf", &degree);

    double kelvin_result = degree * 1.25 + 273.15;

    printf("Hasil konversi reamur ke celcius %.2lf adalah %.2lf\n", degree, kelvin_result);
}

// fungsi untuk konversi F ke C
void run_fahrenheit_to_celcius() {
    double degree;

    printf("Operasi Konversi Fahrenheit -> Celcius\n");
    printf("Masukkan derajat suhu dalam fahrenheit: ");
    scanf("%lf", &degree);

    double celcius_result = (degree - 32) * 5 /9;

    printf("Hasil konversi fahrenheit ke celcius %.2lf adalah %.2lf\n", degree, celcius_result);
}

// fungsi untuk konversi F ke R
void run_fahrenheit_to_reamur() {
    double degree;

    printf("Operasi Konversi Fahrenheit -> Reamur\n");
    printf("Masukkan derajat suhu dalam fahrenheit: ");
    scanf("%lf", &degree);

    double reamur_result = (degree - 32) * 4 / 9;

    printf("Hasil konversi fahrenheit ke reamur %.2lf adalah %.2lf\n", degree, reamur_result);
}

// fungsi untuk konversi F ke K
void run_fahrenheit_to_kelvin() {
    double degree;

    printf("Operasi Konversi Fahrenheit -> Kelvin\n");
    printf("Masukkan derajat suhu dalam fahrenheit: ");
    scanf("%lf", &degree);

    double kelvin_result = (degree + 459.67) * 5 / 9;

    printf("Hasil konversi fahrenheit ke kelvin %.2lf adalah %.2lf\n", degree, kelvin_result);
}

// fungsi untuk konversi K ke C
void run_kelvin_to_celcius() {
    double degree;

    printf("Operasi Konversi Kelvin -> Celcius\n");
    printf("Masukkan derajat suhu dalam kelvin: ");
    scanf("%lf", &degree);

    double celcius_result = degree - 273.15;

    printf("Hasil konversi kelvin ke celcius %.2lf adalah %.2lf\n", degree, celcius_result);
}

// fungsi untuk konversi K ke R
void run_kelvin_to_reamur() {
    double degree;

    printf("Operasi Konversi Kelvin -> Reamur\n");
    printf("Masukkan derajat suhu dalam kelvin: ");
    scanf("%lf", &degree);

    double reamur_result = (degree - 273.15) * 0.8;

    printf("Hasil konversi kelvin ke reamur %.2lf adalah %.2lf\n", degree, reamur_result);
}

// fungsi untuk konversi K ke F
void run_kelvin_to_fahrenheit() {
    double degree;

    printf("Operasi Konversi Kelvin -> Fahrenheit\n");
    printf("Masukkan derajat suhu dalam kelvin: ");
    scanf("%lf", &degree);

    double fahrenheit_result = (degree * 9 / 5) - 459.67;

    printf("Hasil konversi kelvin ke fahrenheit %.2lf adalah %.2lf\n", degree, fahrenheit_result);
}

// fungsi SUHU
void run_temperature_operation(int operation_input) {
    switch (operation_input) {
        case 1: 
            run_celcius_to_reamur();
            break;
        case 2:
            run_celcius_to_fahrenheit();
            break;
        case 3:
            run_celcius_to_kelvin();
            break;
        case 4: 
            run_reamur_to_celcius();
            break;
        case 5: 
            run_reamur_to_fahrenheit();
            break;
        case 6:
            run_reamur_to_kelvin();
            break;
        case 7:
            run_fahrenheit_to_celcius();
            break;
        case 8:
            run_fahrenheit_to_reamur();
            break;
        case 9:
            run_fahrenheit_to_kelvin();
            break;
        case 10: 
            run_kelvin_to_celcius();
            break;
        case 11:
            run_kelvin_to_reamur();
            break;
        case 12:
            run_kelvin_to_fahrenheit();
            break;
    }
}

//=========================================================================================================================================================================================================================================================================

// fungsi untuk konversi Rupiah ke $USD
void run_convert_rupiah_to_usd() {
    double rupiah_money;

    printf("Operasi Konversi Rupiah ke US Dollar\n");
    printf("Masukkan nilai uang dalam Rupiah: ");
    scanf("%lf", &rupiah_money);

    double usd_money = rupiah_money * 0.000067;
    printf("Rp %.2lf sama dengan USD %.5lf\n", rupiah_money, usd_money);
}

// fungsi untuk konversi Rupiah ke Pounds
void run_convert_rupiah_to_pounds() {
    double rupiah_money;

    printf("Operasi Konversi Rupiah ke Poundsterling\n");
    printf("Masukkan nilai uang dalam Rupiah: ");
    scanf("%lf", &rupiah_money);

    double pounds_money = rupiah_money * 0.000054;
    printf("Rp %.2lf sama dengan Poundsterling %.5lf\n", rupiah_money, pounds_money);
}

// fungsi untuk konversi Rupiah ke Euro
void run_convert_rupiah_to_euro() {
    double rupiah_money;

    printf("Operasi Konversi Rupiah ke Euro\n");
    printf("Masukkan nilai uang dalam Rupiah: ");
    scanf("%lf", &rupiah_money);

    double euro_money = rupiah_money * 0.000062;
    printf("Rp %.2lf sama dengan Euro %.5lf\n", rupiah_money, euro_money);
}

// fungsi untuk konersi Rupiah ke Gulden
void run_convert_rupiah_to_gulden() {
    double rupiah_money;

    printf("Operasi Konversi Rupiah ke Gulden\n");
    printf("Masukkan nilai uang dalam Rupiah: ");
    scanf("%lf", &rupiah_money);

    double gulden_money = rupiah_money * 0.00012;
    printf("Rp %.2lf sama dengan Gulden %.5lf\n", rupiah_money, gulden_money);
}

// fungsi untuk konversi Rupiah ke Yen
void run_convert_rupiah_to_yen() {
    double rupiah_money;

    printf("Operasi Konversi Rupiah ke Yen\n");
    printf("Masukkan nilai uang dalam Rupiah: ");
    scanf("%lf", &rupiah_money);

    double yen_money = rupiah_money * 0.0093;
    printf("Rp %.2lf sama dengan Yen %.5lf\n", rupiah_money, yen_money);
}

// fungsi MATA UANG
void run_money_converter_operation(int operation_input) {
    switch (operation_input) {
        case 1: 
            run_convert_rupiah_to_usd();
            break;
        case 2:
            run_convert_rupiah_to_pounds();
            break;
        case 3:
            run_convert_rupiah_to_euro();
            break;
        case 4:
            run_convert_rupiah_to_gulden();
            break;
        case 5:
            run_convert_rupiah_to_yen();
            break;
    }
}

//========================================================================================================================================================================================================================================================================================

// fungsi untuk menghitung luas lingkaran
void run_calculate_circle_area() {
    double radius;

    printf("Masukkan radius: ");
    scanf("%lf", &radius);

    double area = 3.14 * radius * radius;
    printf("Luas lingkaran dengan radius %2.f adalah %.2f\n", radius, area);
}

// fungsi untuk menghitung luas permukaan tabung
void run_calculate_cylinder_area() {
    double radius;
    double height;

    printf("Menghitung Luas Tabung\n");
    printf("Masukkan radius: ");
    scanf("%lf", &radius);
    printf("Masukkan tinggi: ");
    scanf("%lf", &height);

    double area = 2 * 3.14 * radius * (radius + height);

    printf("Luas tabung dengan radius %.2f dan tinggi %.2f adalah %.2f\n", radius, height, area);
}

// fungsi untuk menghitung luas persegi
void run_calculate_square_area() {
    double sisi;

    printf("Masukkan panjang sisi: ");
    scanf("%lf", &sisi);

    double area = sisi * sisi;
    printf("Luas persegi dengan sisi %2.f adalah %.2f\n", sisi, area);
}

// fungsi untuk menghitung luas persegi panjang
void run_calculate_rectangle_area() {
    double panjang, lebar;
    printf("Masukkan panjang persegi panjang: ");
    scanf("%lf", &panjang);
    printf("Masukkan lebar persegi panjang: ");
    scanf("%lf", &lebar);

    double luas = panjang * lebar;
    printf("Luas persegi panjang dengan panjang %.2lf dan lebar %.2lf adalah %.2lf\n", panjang, lebar, luas);
}

// fungsi untuk menghitung luas permukaan bola
void run_calculate_sphere_area() {
    double jariJari;
    printf("Masukkan jari-jari bola: ");
    scanf("%lf", &jariJari);

    if (jariJari < 0) {
        printf("Jari-jari tidak valid.\n");
    } else {
        double luas = 4 * 3.14 * pow(jariJari, 2);
        printf("Luas bola dengan jari-jari %.2lf adalah %.2lf\n", jariJari, luas);
    }
}

// fungsi untuk menghitung luas segitiga siku-siku
void run_calculate_triangle_area() {
    double alas, tinggi;
    printf("Masukkan panjang alas segitiga: ");
    scanf("%lf", &alas);
    printf("Masukkan tinggi segitiga: ");
    scanf("%lf", &tinggi);

    if (alas < 0 || tinggi < 0) {
        printf("Input tidak valid.\n");
    } else {
        double luas = 0.5 * alas * tinggi;
        printf("Luas segitiga dengan alas %.2lf dan tinggi %.2lf adalah %.2lf\n", alas, tinggi, luas);
    }
}

// fungsi untuk menghitung luas kerucut
void run_calculate_cone_area() {
    double jariJari, tinggi;
    printf("Masukkan jari-jari kerucut: ");
    scanf("%lf", &jariJari);
    printf("Masukkan tinggi kerucut: ");
    scanf("%lf", &tinggi);

    if (jariJari < 0 || tinggi < 0) {
        printf("Input tidak valid.\n");
    } else {
        double luasSelimut = 3.14 * jariJari * sqrt(pow(jariJari, 2) + pow(tinggi, 2));
        double luasPermukaan = 3.14 * pow(jariJari, 2) + luasSelimut;
        printf("Luas permukaan kerucut dengan jari-jari %.2lf dan tinggi %.2lf adalah %.2lf\n", jariJari, tinggi, luasPermukaan);
    }
}

// fungsi untuk menghitung luas kubus
void run_calclulate_cube_area() {
    double sisi;
    printf("Masukkan panjang sisi kubus: ");
    scanf("%lf", &sisi);

    if (sisi < 0) {
        printf("Input tidak valid.\n");
    } else {
        double luas = 6 * sisi * sisi;
        printf("Luas kubus dengan panjang sisi %.2lf adalah %.2lf\n", sisi, luas);
    }
}

// fungsi untuk menghitung luas balok
void run_calculate_cuboids_area() {
    double panjang, lebar, tinggi;
    printf("Masukkan panjang balok: ");
    scanf("%lf", &panjang);
    printf("Masukkan lebar balok: ");
    scanf("%lf", &lebar);
    printf("Masukkan tinggi balok: ");
    scanf("%lf", &tinggi);

    if (panjang < 0 || lebar < 0 || tinggi < 0) {
        printf("Input tidak valid.\n");
    } else {
        double luas = 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi);
        printf("Luas balok dengan panjang %.2lf, lebar %.2lf, dan tinggi %.2lf adalah %.2lf\n", panjang, lebar, tinggi, luas);
    }
}

// fungsi LUAS BIDANG
void run_area_operation(int operation_input) {
    switch (operation_input) {
        case 1: 
            run_calculate_circle_area();
            break;
        case 2:
            run_calculate_cylinder_area();
            break;
        case 3:
            run_calculate_square_area();
            break;
        case 4:
            run_calculate_rectangle_area();
            break;
        case 5:
            run_calculate_sphere_area();
            break;
        case 6:
            run_calculate_triangle_area();
            break;
        case 7:
            run_calculate_cone_area();
            break;
        case 8:
            run_calclulate_cube_area();
            break;
        case 9:
            run_calculate_cuboids_area();
            break;

    }
}

//=========================================================================================================================================================================================================================================================================================

// fungsi untuk penjumlahan matriks
void run_sum_matrix() {
  int i, j, m, n, matriks1[10][10], matriks2[10][10], hasil[10][10];

  printf("Masukkan jumlah baris matriks: ");
  scanf("%d", &m);
  printf("Masukkan jumlah kolom matriks: ");
  scanf("%d", &n);

  printf("Masukkan elemen matriks pertama: \n");
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &matriks1[i][j]);
    }
  }

  printf("Masukkan elemen matriks kedua: \n");
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &matriks2[i][j]);
    }
  }

  printf("Hasil penjumlahan matriks: \n");
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      hasil[i][j] = matriks1[i][j] + matriks2[i][j];
      printf("%d \t", hasil[i][j]);
    }
    printf("\n");
  }
}

// fungsi untuk pengurangan matriks
void run_substraction_matrix() {
  int i, j, m, n, matriks1[10][10], matriks2[10][10], hasil[10][10];

  printf("Masukkan jumlah baris matriks: ");
  scanf("%d", &m);
  printf("Masukkan jumlah kolom matriks: ");
  scanf("%d", &n);

  printf("Masukkan elemen matriks pertama: \n");
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &matriks1[i][j]);
    }
  }

  printf("Masukkan elemen matriks kedua: \n");
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &matriks2[i][j]);
    }
  }

  printf("Hasil pengurangan matriks: \n");
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      hasil[i][j] = matriks1[i][j] - matriks2[i][j];
      printf("%d \t", hasil[i][j]);
    }
    printf("\n");
  }
}

// fungsi untuk perkalian matriks
void run_multiplication_matrix() {
  int i, j, m, n, matriks1[10][10], matriks2[10][10], hasil[10][10];

  printf("Masukkan jumlah baris matriks: ");
  scanf("%d", &m);
  printf("Masukkan jumlah kolom matriks: ");
  scanf("%d", &n);

  printf("Masukkan elemen matriks pertama: \n");
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &matriks1[i][j]);
    }
  }

  printf("Masukkan elemen matriks kedua: \n");
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &matriks2[i][j]);
    }
  }

  printf("Hasil perkalian matriks: \n");
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      hasil[i][j] = matriks1[i][j] * matriks2[i][j];
      printf("%d \t", hasil[i][j]);
    }
    printf("\n");
  }
}

// fungsi MATRIKS
void run_matrix_operation(int operation_input) {
    switch (operation_input) {
        case 1: 
            run_sum_matrix();
            break;
        case 2:
            run_substraction_matrix();
            break;
        case 3:
            run_multiplication_matrix();
            break;
    }
}

//==============================================================================================================================================================================================================================================================================

// fungsi untuk operasi turunan fungsi
void run_calculate_derivative() {
    float a, b, c, t;

    printf("Bentuk Umum (ax^2) + (bx) + (c)\n");
    printf("Masukkan nilai a : ");
    scanf("%f", &a);
    printf("Masukkan nilai b : ");
    scanf("%f", &b);
    printf("Masukkan nilai c : ");
    scanf("%f", &c);
    printf("\n\n");
    printf("Fungsi : (%.2fx^2) + (%.2fx) + (%.2f)\n", a, b, c);
    t = a * 2;
    printf("Turunannya : (%.2fx) + (%.2f)\n", t, b);
}

// fungsi untuk operasi integral fungsi
void run_calculate_integral() {
    float a, b, c, t, i, j;

    printf("Bentuk Umum (ax^2) + (bx) + (c)\n");
    printf("Masukkan nilai a : ");
    scanf("%f", &a);
    printf("Masukkan nilai b : ");
    scanf("%f", &b);
    printf("Masukkan nilai c : ");
    scanf("%f", &c);
    printf("\n\n");
    printf("Fungsinya : (%.2fx^2) + (%.2fx) + (%.2f)\n", a, b, c);
    t = a * 2;
    i = a / 3;
    j = b / 2;
    printf("Integralnya : (%.2fx^3) + (%.2fx^2) + (%.2fx)\n", i, j, c);
}

// fungsi KALKULUS
void run_calculus_operation(int operation_input) {
    switch (operation_input) {
        case 1: 
            run_calculate_derivative();
            break;
        case 2:
            run_calculate_integral();
            break;
    }
}

//====================================================================================================================================================================================================================================================================================================


void run_operation(int category_input, int operation_input) {
    if (category_input == 1) {
        run_basic_math_operation(operation_input);
    } else if (category_input == 2) {
        run_trigonometry_operation(operation_input);
    } else if (category_input == 3) {
        run_temperature_operation(operation_input);
    } else if (category_input == 4) {
        run_money_converter_operation(operation_input);
    } else if (category_input == 5) {
        run_area_operation(operation_input);
    } else if (category_input == 6) {
        run_matrix_operation(operation_input);
    } else if (category_input == 7) {
        run_calculus_operation(operation_input);
    }
}

int run_application() {
    // buat kondisi agar aplikasi selalu berjalan
    while(true) {
        // 
        int category_input = show_home_page();
        if (category_input == 8) {
        printf(">>> Aplikasi kalkulator ditutup!");
        exit(0);
    }
        
        // cek apabila input untuk kategori valid atau tidak
        while (check_validation_category_input(category_input)) {
            printf(">>> Input kategori tidak valid, silahkan pilih kategori yang tersedia!");
            category_input = get_category_input();
        }

        int operation_input = show_operation_list_or_exit(category_input);
        
        while (true) {
            while(check_validation_operation_input(category_input, operation_input)) {
                printf(">>> Input operasi tidak valid, silahkan pilih operasi yang tersedia!");
                operation_input = get_operation_input();
            }

            if ((category_input == 1 && operation_input == 17) || (category_input == 2 && operation_input == 13) || (category_input == 3 && operation_input == 13) || (category_input == 4 && operation_input == 6) || (category_input == 5 && operation_input == 10 || (category_input == 6 && operation_input == 4) || (category_input == 7 && operation_input == 3))) {
                break;
            }

            run_operation(category_input, operation_input);   
            operation_input = show_operation_list_or_exit(category_input);
        }
    }
}

int main() {
    run_application();
    return 0;
}
