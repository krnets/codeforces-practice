fun solve() {
    val s = readln().asSequence().sorted().joinToString("")
    println(s)
}

fun main() = repeat(readln().toInt()) { solve() }