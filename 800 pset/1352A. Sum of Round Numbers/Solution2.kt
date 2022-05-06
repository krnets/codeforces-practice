fun solve() {
    val num = readln()
    val roundNums = mutableListOf<String>()

    num.forEachIndexed { i, c ->
        if (c != '0')
            roundNums.add("$c".padEnd(num.length - i, '0'))
    }
    println(roundNums.size)
    println(roundNums.joinToString(" "))
}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = repeat(readInt()) { solve() }
