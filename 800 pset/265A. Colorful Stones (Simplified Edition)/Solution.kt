fun solve() {
    val s = readln()
    val t = readln()
    var pos = 0

    for (i in t.indices)
        if (s[pos] == t[i])
            pos++

    println(pos + 1)
}

fun main() = solve()