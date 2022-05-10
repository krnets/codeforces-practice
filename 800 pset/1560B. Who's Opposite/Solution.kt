fun solve() {
    val (a, b, c) = readInts()
    val n = 2 * Math.abs(a - b)

    if (a > n || b > n || c > n)
        println(-1)
    else {
        var d = c + n / 2

        if (d > n)
            d -= n

        println(d)
    }
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = repeat(readN()) { solve() }