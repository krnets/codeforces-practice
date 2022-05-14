fun solve() {
    val news = readln()
    val fakeWord = "heidi"
    var pos = 0

    for (c in news)
        if (c == fakeWord[pos]) {
            pos++
            if (pos == fakeWord.length)
                break
        }

    println(if (pos == fakeWord.length) "YES" else "NO")
}

fun main() = solve()