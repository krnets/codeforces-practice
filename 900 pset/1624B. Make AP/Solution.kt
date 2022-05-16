fun solve() {
    val (a, b, c) = readInts()
    var ans = false

    val ad = b - (c - b)
    val bd = (c - a) / 2 + a
    val cd = 2 * (b - a) + a

    if (ad >= a && ad % a == 0 && ad != 0)
        ans = true
    else if (bd >= b && (c - a) % 2 == 0 && bd % b == 0 && bd != 0)
        ans = true
    else if (cd >= c && cd % c == 0 && cd != 0)
        ans = true

    println(if (ans) "Yes" else "No")
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = repeat(readN()) { solve() }