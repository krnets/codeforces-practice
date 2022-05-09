fun solve() {
    val rubles = readN()
    var a = rubles / 3
    var b = a

    when (rubles % 3) {
        1 -> a++
        2 -> b++
    }
    println("$a $b")
}

fun readN() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }
fun readLongs() = readStrings().map { it.toLong() }
fun readDoubles() = readStrings().map { it.toDouble() }

fun main() = repeat(readN()) { solve() }