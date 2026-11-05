#include <iostream>

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Fungsi untuk menampilkan header game
void tampilkanHeader() {
    cout << "===================================================\n";
    cout << "     NPD DETECTIVE: SIMULASI ANALISIS PERILAKU     \n";
    cout << "===================================================\n";
    cout << "Game ini mensimulasikan interaksi sosial untuk menilai\n";
    cout << "apakah seseorang menunjukkan indikasi sifat Narsistik (NPD).\n";
    cout << "Pilihlah respons yang paling mencerminkan situasi!\n";
    cout << "---------------------------------------------------\n\n";
}

int main() {
    int totalSkor = 0;
    int pilihan;

    tampilkanHeader();

    // Skenario 1: Reaksi terhadap Kritik
    cout << "Skenario 1: Saat diberikan kritik konstruktif atas pekerjaannya,\n";
    cout << "reaksi subjek adalah:\n";
    cout << "1. Menerima masukan dan berterima kasih.\n";
    cout << "2. Marah besar, menyerang balik, dan menyalahkan orang lain.\n";
    cout << "3. Mengabaikan dan merasa dirinya paling benar tanpa cela.\n";
    cout << "Pilihan Anda (1-3): ";
    cin >> pilihan;

    if (pilihan == 2 || pilihan == 3) {
        totalSkor += 3;
    } else {
        totalSkor += 0;
    }
    cout << "\n---------------------------------------------------\n\n";

    // Skenario 2: Empati dalam Percakapan
    cout << "Skenario 2: Ketika Anda sedang menceritakan masalah pribadi Anda,\n";
    cout << "bagaimana sikap subjek?\n";
    cout << "1. Mendengarkan dengan baik dan memberikan dukungan.\n";
    cout << "2. Mendengarkan sebentar, lalu langsung mengalihkan topik ke pencapaian dirinya.\n";
    cout << "3. Meremehkan masalah Anda dan menganggap masalahnya jauh lebih besar.\n";
    cout << "Pilihan Anda (1-3): ";
    cin >> pilihan;

    if (pilihan == 2 || pilihan == 3) {
        totalSkor += 4;
    } else {
        totalSkor += 0;
    }
    cout << "\n---------------------------------------------------\n\n";

    // Skenario 3: Kebutuhan akan Validasi / Pujian
    cout << "Skenario 3: Dalam hal perhatian dan pujian sosial:\n";
    cout << "1. Tampil percaya diri sewajarnya tanpa haus pujian.\n";
    cout << "2. Sering memamerkan pencapaian secara berlebihan agar dipuji orang lain.\n";
    cout << "3. Merasa berhak mendapatkan keistimewaan khusus tanpa harus usaha.\n";
    cout << "Pilihan Anda (1-3): ";
    cin >> pilihan;

    if (pilihan == 2 || pilihan == 3) {
        totalSkor += 3;
    } else {
        totalSkor += 0;
    }
    cout << "\n===================================================\n";
    cout << "                    HASIL ANALISIS                 \n";
    cout << "===================================================\n";
    cout << "Total Skor Risiko: " << totalSkor << " dari 10\n\n";

    // Evaluasi Hasil
    if (totalSkor >= 7) {
        cout << "[KESIMPULAN]: Tinggi indikasi sifat Narsistik (NPD).\n";
        cout << "Saran: Waspada terhadap pola manipulasi, gaslighting, dan kurangnya empati.\n";
        cout << "       Batasi interaksi mendalam demi kesehatan mental Anda.\n";
    } else if (totalSkor >= 4) {
        cout << "[KESIMPULAN]: Ada beberapa ciri egois / kecenderungan narsistik ringan.\n";
        cout << "Saran: Perilaku masih bisa ditegur, lakukan komunikasi asertif.\n";
    } else {
        cout << "[KESIMPULAN]: Perilaku dalam batas normal dan sehat (Empatik).\n";
        cout << "Saran: Hubungan sosial yang sehat dapat dijalin dengan baik.\n";
    }
    cout << "===================================================\n";

    return 0;
}

