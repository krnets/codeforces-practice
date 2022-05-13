fun solve() {
    readln()
    val arrA = readInts()
    val arrB = readInts()
    val ans = arrA.firstOrNull { it in arrB }

    if (ans == null)
        println("No")
    else {
        println("Yes")
        println("1 $ans")
    }
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = repeat(readN()) { solve() }