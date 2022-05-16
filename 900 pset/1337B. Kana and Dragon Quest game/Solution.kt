fun solve() {
    var (x, n, m) = readInts()

    while (x > 0 && n > 0 && (x / 2 + 10) < x) {
        x = x / 2 + 10
        n--
    }

    println(if (x > m * 10) "No" else "Yes")
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = repeat(readN()) { solve() }