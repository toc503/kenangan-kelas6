<!DOCTYPE html>
<html lang="id">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>Website Kelas 6 Angkatan 3 Tahun 2025/2026</title>
<style>
    * {
        margin: 0;
        padding: 0;
        box-sizing: border-box;
        font-family: "Poppins", sans-serif;
    }

    body {
        transition: background 1s ease;
        background: #e0f2fe;
        overflow-x: hidden;
    }

    header {
        background: #3b82f6;
        color: white;
        text-align: center;
        padding: 1rem;
        position: sticky;
        top: 0;
        z-index: 10;
    }

    nav {
        margin-top: 0.5rem;
    }

    nav button {
        background: white;
        color: #2563eb;
        border: none;
        padding: 8px 15px;
        margin: 5px;
        border-radius: 20px;
        cursor: pointer;
        font-weight: 600;
        transition: all 0.3s ease;
    }

    nav button:hover {
        background: #2563eb;
        color: white;
    }

    section {
        display: none;
        padding: 2rem 10%;
        min-height: 80vh;
        opacity: 0;
        transform: translateY(40px);
        transition: all 0.8s ease;
    }

    section.active {
        display: block;
        opacity: 1;
        transform: translateY(0);
    }

    h1 {
        color: #1e40af;
        margin-bottom: 1rem;
    }

    p {
        line-height: 1.7;
        margin-bottom: 1rem;
    }

    /* Morph Background */
    .morph {
        position: fixed;
        top: -50px;
        left: -50px;
        width: 150vw;
        height: 150vh;
        background: radial-gradient(circle at 30% 30%, #93c5fd, #bfdbfe);
        clip-path: circle(30% at 50% 50%);
        z-index: -1;
        transition: all 1.5s ease;
    }

    /* Jadwal */
    table {
        width: 100%;
        border-collapse: collapse;
        margin-top: 1rem;
    }

    th, td {
        border: 1px solid #93c5fd;
        padding: 10px;
        text-align: center;
    }

    th {
        background: #2563eb;
        color: white;
    }

    /* Materi */
    .materi-box {
        background: #e0f2fe;
        padding: 15px;
        border-left: 5px solid #3b82f6;
        border-radius: 10px;
        margin-bottom: 1rem;
    }

    /* Kenangan */
    .gallery {
        display: grid;
        grid-template-columns: repeat(auto-fit, minmax(150px, 1fr));
        gap: 10px;
        margin-top: 1rem;
    }

    .gallery img {
        width: 100%;
        border-radius: 10px;
        transition: transform 0.3s ease;
    }

    .gallery img:hover {
        transform: scale(1.05);
    }

    footer {
        text-align: center;
        background: #1e3a8a;
        color: white;
        padding: 1rem;
    }
</style>
</head>
<body>

<div class="morph" id="morph"></div>

<header>
    <h2>Website Kelas 6B SD Harapan Bangsa</h2>
    <nav>
        <button onclick="showPage('beranda')">Beranda</button>
        <button onclick="showPage('jadwal')">Jadwal</button>
        <button onclick="showPage('materi')">Materi</button>
        <button onclick="showPage('kenangan')">Kenangan</button>
    </nav>
</header>

<!-- BERANDA -->
<section id="beranda" class="active">
    <h1>Selamat Datang di Kelas 6!</h1>
    <p>Halo teman-teman kelas 6! 🌟 Ini adalah website kita bersama. Di sini kamu bisa melihat jadwal pelajaran, materi belajar, dan kenangan seru selama di kelas.</p>
    <p>Kita sudah melewati banyak hal bersama: belajar, bermain, hingga mengikuti lomba-lomba seru. Sekarang saatnya kita mengingat semua momen indah itu lewat website ini!</p>
    <p>Terus semangat belajar, saling membantu, dan jangan lupa bersyukur setiap hari. Mari buat tahun terakhir di SD menjadi yang paling berkesan! 💪</p>
</section>

<!-- JADWAL -->
<section id="jadwal">
    <h1>Jadwal Pelajaran Kelas 6</h1>
    <p>Berikut jadwal pelajaran yang harus kita ikuti setiap minggu:</p>
    <table>
        <tr>
            <th>Hari</th>
            <th>07.00 - 08.30</th>
            <th>08.45 - 10.15</th>
            <th>10.30 - 12.00</th>
        </tr>
        <tr>
            <td>Senin</td>
            <td>Matematika</td>
            <td>Bahasa Indonesia</td>
            <td>IPA</td>
        </tr>
        <tr>
            <td>Selasa</td>
            <td>IPS</td>
            <td>Agama</td>
            <td>Bahasa Inggris</td>
        </tr>
        <tr>
            <td>Rabu</td>
            <td>Matematika</td>
            <td>Bahasa Inggris</td>
        </tr>
        <tr>
            <td>Kamis</td>
            <td>Bahasa Indonesia</td>
            <td>Bahasa Jawa</td>
            <td>Bahasa Arab</td>
        </tr>
        <tr>
            <td>Jumat</td>
            <td>Seni budaya</td>
            <td>TIK</td>
            <td>Tema Quran dan Tasmi'</td>
        </tr>
    </table>
</section>

<!-- MATERI -->
<section id="materi">
    <h1>Materi Belajar</h1>
    <p>Yuk belajar bersama! Berikut beberapa materi penting kelas 6 yang bisa kamu baca ulang di rumah:</p>
    <div class="materi-box">
        <h3>Matematika: Pecahan dan Desimal</h3>
        <p>Pecahan adalah bagian dari keseluruhan. Misalnya, ½ artinya satu bagian dari dua. Kita bisa mengubah pecahan jadi desimal juga, lho!</p>
    </div>
    <div class="materi-box">
        <h3>IPA: Perubahan Wujud Benda</h3>
        <p>Benda bisa berubah wujud, misalnya es mencair menjadi air. Ini disebut mencair. Kalau air jadi uap, namanya menguap!</p>
    </div>
    <div class="materi-box">
        <h3>IPS: Pahlawan Nasional</h3>
        <p>Pahlawan adalah orang yang berjasa bagi bangsa kita. Contohnya: Ir. Soekarno, Ki Hajar Dewantara, dan Cut Nyak Dien.</p>
    </div>
    <div class="materi-box">
        <h3>Bahasa Indonesia: Kalimat Utama</h3>
        <p>alimat utama adalah kalimat yang mengandung pokok pikiran atau gagasan utama dalam sebuah paragraf, yang kemudian didukung oleh kalimat-kalimat penjelas..</p>
    </div>
</section>

<!-- KENANGAN -->
<section id="kenangan">
    <h1>Kenangan Indah Kelas 6B</h1>
    <p>Inilah beberapa foto kenangan kegiatan kita di sekolah! 📸</p>
    <div class="gallery">
        <img src="https://picsum.photos/id/1011/300/200" alt="Kenangan 1">
        <img src="https://picsum.photos/id/1025/300/200" alt="Kenangan 2">
        <img src="https://picsum.photos/id/1035/300/200" alt="Kenangan 3">
        <img src="https://picsum.photos/id/1041/300/200" alt="Kenangan 4">
    </div>
    <p>Terima kasih untuk semua momen lucu, seru, dan menyenangkan! 💖 Kita akan selalu ingat masa-masa SD ini!</p>
</section>

<footer>
    &copy; 2025 Kelas 6 SD SAHABAT KELUARGA | Dibuat dengan Semangat Belajar 🌟
</footer>

<script>
function showPage(id) {
    // tampilkan halaman
    document.querySelectorAll("section").forEach(sec => sec.classList.remove("active"));
    document.getElementById(id).classList.add("active");

    // morph warna background
    const morph = document.getElementById("morph");
    const warna = {
        beranda: "radial-gradient(circle at 30% 30%, #bfdbfe, #60a5fa)",
        jadwal: "radial-gradient(circle at 70% 20%, #fde68a, #fbbf24)",
        materi: "radial-gradient(circle at 40% 70%, #a7f3d0, #6ee7b7)",
        kenangan: "radial-gradient(circle at 60% 40%, #fecaca, #f87171)"
    };
    morph.style.background = warna[id];

    // morph bentuk berubah
    const bentuk = {
        beranda: "circle(30% at 50% 50%)",
        jadwal: "circle(40% at 70% 30%)",
        materi: "circle(35% at 30% 70%)",
        kenangan: "circle(45% at 60% 40%)"
    };
    morph.style.clipPath = bentuk[id];
}
</script>

</body>
</html>
