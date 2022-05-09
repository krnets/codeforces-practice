fun solve() {
    val n = readN()

    if (n < 10)
        println(n)
    else {
        var ans = 0
        var pw = 1

        while (pw <= n) {

            for (d in 1..9)
                if (pw * d <= n)
                    ans++

            pw = pw * 10 + 1
        }
        println(ans)
    }
}

fun readN() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }
fun readLongs() = readStrings().map { it.toLong() }
fun readDoubles() = readStrings().map { it.toDouble() }
fun gcd(a: Int, b: Int): Int = if (b == 0) a else gcd(b, a % b)

fun main() = repeat(readN()) { solve() }