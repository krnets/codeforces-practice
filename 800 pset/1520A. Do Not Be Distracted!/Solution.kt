fun solve() {
    val n = readInt()
    val str = readln()
    val set = mutableSetOf<Char>()
    var i = 0

    while (i < n) {
        val c = str[i]

        if (set.contains(c)) {
            println("NO")
            return
        } else {
            set.add(c)
            while (i + 1 < n && str[i + 1] == c) i++
        }
        i++
    }
    println("YES")
}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = repeat(readInt()) { solve() }