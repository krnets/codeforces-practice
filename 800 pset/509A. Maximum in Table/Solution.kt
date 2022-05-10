fun solve() {
    val n = readN()
    val table = Array(n) { IntArray(n) }

    for (i in 0 until n) {
        table[0][i] = 1
        table[i][0] = 1
    }

    for (i in 1 until n) {
        for (j in 1 until n) {
            table[i][j] = table[i][j - 1]
            table[i][j] += table[i - 1][j]
        }
    }

    val ans = table[n - 1][n - 1]

    println(ans)
}

fun readN() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }
fun readLongs() = readStrings().map { it.toLong() }
fun readDoubles() = readStrings().map { it.toDouble() }
fun gcd(a: Int, b: Int): Int = if (b == 0) a else gcd(b, a % b)

fun main() = solve()