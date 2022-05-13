fun solve() {
    readln()
    val arrA = readInts()
    val arrB = readInts()

    var ans = false
    var elem = -1

    for (a in arrA) {
        if (a in arrB) {
            ans = true;
            elem = a
            break
        }
    }

    if (ans) {
        println("Yes")
        println("1 $elem")
    } else
        println("No")
}

fun readN() = readln().toInt()
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = repeat(readN()) { solve() }