fun solve() {
    val s = readln()
    val word = readln()
    val ans = word.zip(word.drop(1)).sumOf {
        Math.abs(s.indexOf(it.first) - s.indexOf(it.second))
    }
    println(ans)
}

fun main() = repeat(readln().toInt()) { solve() }