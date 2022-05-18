fun solve() {
    val s = readln()
    val ans = s.trim('0').count { it == '0' }

    println(ans)
}

fun readN() = readln().toInt()
fun main() = repeat(readN()) { solve() }