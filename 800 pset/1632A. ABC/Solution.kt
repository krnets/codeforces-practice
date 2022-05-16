fun solve() {
    val n = readN()
    val s = readln()

    println(if (n >= 3 || s == "11" || s == "00") "No" else "Yes")
}

fun readN() = readln().toInt()

fun main() = repeat(readN()) { solve() }