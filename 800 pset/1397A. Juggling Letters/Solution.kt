fun solve() {
    val n = readN()
    val lines = readLines(n)
    val mp = mutableMapOf<Char, Int>()

    lines.forEach { line ->
        line.forEach { c ->
            mp[c] = 1 + mp.getOrDefault(c, 0)
        }
    }

    val possible = mp.all { it.value % n == 0 }

    if (possible) {
        println("YES")
    } else
        println("NO")
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }
fun readLines(n: Int) = List(n) { readln() }

fun main() = repeat(readN()) { solve() }