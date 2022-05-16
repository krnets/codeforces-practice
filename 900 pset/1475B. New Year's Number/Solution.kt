fun solve() {
    val n = readN()
    val y = n % 2020
    val x = (n - y) / 2020 - y

    if (x >= 0 && (2020 * x + 2021 * y) == n)
        println("Yes")
    else println("No")
}

fun readN() = readln().toInt()

fun main() = repeat(readN()) { solve() }