fun solve() {
    var n = readN()
    var cnt2 = 0
    var cnt3 = 0

    while (n % 2 == 0) {
        n /= 2
        cnt2++
    }
    while (n % 3 == 0) {
        n /= 3
        cnt3++
    }
    if (n == 1 && cnt2 <= cnt3)
        println(2 * cnt3 - cnt2)
    else println(-1)
}

fun readN() = readln().toInt()
fun main() = repeat(readN()) { solve() }