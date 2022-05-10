fun solve() {
    val n = readN()
    val res = IntArray(n) { 1 }.joinToString(" ")

    println(res)
}

fun readN() = readln().toInt()
fun main() = repeat(readN()) { solve() }