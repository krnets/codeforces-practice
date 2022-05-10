fun solve() {
    readN()
    val arr = readInts()
    val set = mutableSetOf<Int>()
    val res = mutableListOf<Int>()

    arr.forEach {
        if (!set.contains(it)) {
            res.add(it)
            set.add(it)
        }
    }
    println(res.joinToString(" "))
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