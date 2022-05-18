fun solve() {
    readln()
    val s = readln()

    val ans = s.indices.drop(1)
        .firstOrNull { i ->
            s[i] != s[i - 1]
        }
        ?: -1

    println(if (ans < 0) "$ans $ans" else "$ans ${ans + 1}")
}

fun readN() = readln().toInt()

fun main() = repeat(readN()) { solve() }