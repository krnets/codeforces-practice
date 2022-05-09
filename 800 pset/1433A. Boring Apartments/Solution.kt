fun solve(boring: List<String>) {
    val x = readln()
    val s = boring.takeWhile { it != x }.joinToString("") + x
    println(s.length)
}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }
fun readDoubles() = readStrings().map { it.toDouble() }

fun main() {
    val boring = mutableListOf<String>()

    for (i in 1..9) {
        val x = "$i"
        boring.add(x)

        for (j in 2..4)
            boring.add(x.repeat(j))
    }
    repeat(readInt()) { solve(boring) }
}