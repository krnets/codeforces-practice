fun solve() {
    readln().also { s ->
        if (s.length == 2)
            println(s)
        else println(
            s.chunked(2).let { sub ->
                sub.first().first() +
                        sub.drop(1)
                            .map { it.first() }
                            .joinToString("") +
                        sub.last().last()
            })
    }
}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = repeat(readInt()) { solve() }
