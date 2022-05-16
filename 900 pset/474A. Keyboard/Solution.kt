fun solve() {
    val direction = readln().first()
    val codedMessage = readln()
    val keyboardMap = listOf("qwertyuiop", "asdfghjkl;", "zxcvbnm,./")
    val sb = StringBuilder()

    for (c in codedMessage) {

        val keyRow = keyboardMap.first { it.contains(c) }
        val pos = keyRow.indexOf(c)

        if (direction == 'R')
            sb.append(keyRow[pos - 1])
        else sb.append(keyRow[pos + 1])
    }

    println(sb)
}

fun main() = solve()