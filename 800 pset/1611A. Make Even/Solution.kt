fun solve() {
    var n = readN()
    var k = 0

    if (n % 2 == 0) println(0)
    else {
        while (n >= 10) {
            n /= 10

            if (n % 2 == 0) k++
        }
        println(
            if (n % 2 == 0) 1
            else if (k >= 1) 2
            else -1
        )
    }
}

fun readN() = readln().toInt()

fun main() = repeat(readN()) { solve() }