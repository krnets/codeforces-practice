fun solve() {
    val s = readln()
    var ans = 0
    var currentChar = 'a'

    for (c in s) {

        val rotations =
            if (c > currentChar) {
                if (c - currentChar > 13)
                    26 - (c - currentChar)
                else c - currentChar
            } else {
                if (currentChar - c > 13)
                    26 - (currentChar - c)
                else currentChar - c
            }

        ans += rotations
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