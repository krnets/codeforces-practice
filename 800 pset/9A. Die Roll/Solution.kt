fun solve() {
    val (y, w) = readInts()
    val sides = 6
    val p = sides - maxOf(y, w) + 1
    val divisor = gcd(p, sides)

    println("${p / divisor}/${sides / divisor}")
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