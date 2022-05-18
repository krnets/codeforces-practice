fun solve() {
    var n = readN()
    var ans = 0
    var pw = 1000 * 1000 * 1000

    while (n > 0) {

        while (n < pw)
            pw /= 10

        ans += pw
        n -= (pw - pw / 10)
    }

    println(ans)
}

fun readN() = readln().toInt()

fun main() = repeat(readN()) { solve() }