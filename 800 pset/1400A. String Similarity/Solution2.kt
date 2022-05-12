fun solve() {
    readln()
    val s = readln()
    var ans = ""

    for (i in s.indices step 2)
        ans += s[i]

    println(ans)
}

fun readN() = readln().toInt()

fun main() = repeat(readN()) { solve() }