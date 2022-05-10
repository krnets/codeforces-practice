fun solve() {
    readN()
    var hasEven = false
    var hasOdd = false
    var sum = 0

    readInts().forEach {
        if (it % 2 == 0) hasEven = true
        else hasOdd = true
        sum += it
    }

    if ((sum % 2 == 1) or (hasOdd and hasEven))
        println("YES")
    else println("NO")
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