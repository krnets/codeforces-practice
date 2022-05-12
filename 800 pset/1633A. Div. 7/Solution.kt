fun solve() {
    val n = readN()

    if (n % 7 == 0)
        println("$n")
    else {
        var ans = 0

        for (i in 0..9) {

            ans = n - n % 10 + i

            if (ans % 7 == 0)
                break
        }

        println(ans)
    }
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }
fun readLines(n: Int) = List(n) { readln() }

fun main() = repeat(readN()) { solve() }