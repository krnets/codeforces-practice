fun solve() {
    val s = readln()
    var ans = 0
    var currentChar = 'a'

    for (c in s) {

        val distance = Math.abs(currentChar - c)
        ans += minOf(distance, 26 - distance)
        currentChar = c
    }

    print(ans)
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