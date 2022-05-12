fun solve() {
    val letters = readln()
    val n = letters.length
    var count = 0

    for (i in 0 until n - 2)
        for (j in i + 1 until n - 1)
            for (k in j + 1 until n)
                if (letters[i] == 'Q' && letters[j] == 'A' && letters[k] == 'Q')
                    count++

    println(count)
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }
fun readLines(n: Int) = List(n) { readln() }

fun main() = solve()