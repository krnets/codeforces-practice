fun solve() {
    val direction = readln().first()
    val codedMessage = readln()
    val keyboardMap = listOf("qwertyuiop", "asdfghjkl;", "zxcvbnm,./")

    val ans = codedMessage.map { c ->

        val keyRow = keyboardMap.first { it.contains(c) }
        val pos = keyRow.indexOf(c)

        keyRow[pos + if (direction == 'R') -1 else 1]
    }

    println(ans.joinToString(""))
}

fun main() = solve()