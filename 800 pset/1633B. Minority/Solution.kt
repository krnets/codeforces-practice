fun solve() {
    val s = readln()
    val (zeros, ones) = s.partition { it == '0' }
    val ans = minOf(zeros.length, ones.length, (s.length - 1) / 2)

    println(ans)
}

fun readN() = readln().toInt()
fun main() = repeat(readN()) { solve() }