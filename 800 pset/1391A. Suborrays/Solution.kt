fun solve() {
    val n = readN()
    val ans = (1..n).shuffled().joinToString(" ")

    println(ans)
}

fun readN() = readln().toInt()

fun main() = repeat(readN()) { solve() }