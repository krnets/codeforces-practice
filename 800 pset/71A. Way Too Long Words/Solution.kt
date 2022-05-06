fun main() {
    repeat(readln().toInt()) {
        solve()
    }
}

fun solve() {
    val word = readln()
    println(
        if (word.length > 10)
            word.substring(0, 1) + (word.length - 2) + word.last()
        else word
    )
}
