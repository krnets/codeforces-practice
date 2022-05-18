fun solve() {
    val chars = readln().toMutableList()
    var n = chars.size

    while (n > 0) {
        when ('a' + n - 1) {
            chars.first() -> chars.removeFirst()
            chars.last() -> chars.removeLast()
        }
        n--
    }

    println(if (chars.isEmpty()) "Yes" else "No")
}

fun main() = repeat(readln().toInt()) { solve() }