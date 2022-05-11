fun solve() {
    val s = readln()
    val c = readln().first()

    for (i in s.indices) {
        if ((s[i] == c) and (i % 2 == 0)) {
            println("Yes")
            return
        }
    }
    println("No")
}

fun main() = repeat(readln().toInt()) { solve() }