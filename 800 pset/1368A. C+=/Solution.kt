fun solve() {
    var (a, b, n) = readInts()
    var count = 0

    while (a <= n && b <= n) {
        if (a < b) {
            a += b
        } else {
            b += a
        }
        count++
    }
    println(count)
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = repeat(readN()) { solve() }