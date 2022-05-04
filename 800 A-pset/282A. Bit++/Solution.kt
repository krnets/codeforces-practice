fun main() {
    solve()
}

fun solve() {
    val ops = readInt()
    var x = 0

    repeat(ops) {
        val op = readln()
        if (op.contains('+')) x++
        else if (op.contains('-')) x--
    }
    println(x)
}

private fun readInt() = readln().toInt()
private fun readStrings() = readln().split(' ')
private fun readInts() = readStrings().map { it.toInt() }
