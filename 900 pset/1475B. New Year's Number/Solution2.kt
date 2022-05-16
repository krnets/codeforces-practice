fun solve() {
    val n = readN()
    var i = 0

    while (i * 2020 <= n) {

        if ((n - (i * 2020)) % 2021 == 0) {

            println("Yes")
            return
        }
        i++
    }

    println("No")
}

fun readN() = readln().toInt()

fun main() = repeat(readN()) { solve() }