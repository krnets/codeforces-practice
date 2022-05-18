fun solve() {
    val s = readln().toCharArray()

    for (i in s.indices)
        if (i % 2 == 0)
            s[i] = if (s[i] == 'a') 'b' else 'a'
        else
            s[i] = if (s[i] == 'z') 'y' else 'z'

    println(s)
}

fun main() = repeat(readln().toInt()) { solve() }