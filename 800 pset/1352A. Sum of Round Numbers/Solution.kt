import java.lang.Math.*

fun solve() {
    var n = readInt()
    val roundNums = mutableListOf<Int>()
    var i = 1
    val digits = ceil(log10(n.toDouble()))

    while (i < digits) {
        var x = 0
        var p = pow(10.0, i.toDouble()).toInt()

        if (n % p != 0) {
            x = n % p
            n -= x
            roundNums.add(x)
        }
        i++
    }
    roundNums.add(n)
    println(roundNums.size)
    println(roundNums.joinToString(" "))
}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = repeat(readInt()) { solve() }
