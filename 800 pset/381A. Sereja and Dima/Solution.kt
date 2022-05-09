fun solve() {
    val n = readInt()
    val cards = readInts()

    var serejaCount = 0
    var dimaCount = 0

    var leftPos = 0
    var rightPos = n - 1
    var firstMover = true

    while (leftPos <= rightPos) {
        if (firstMover) {
            if (cards[leftPos] > cards[rightPos]) {
                serejaCount += cards[leftPos]
                leftPos++
            } else {
                serejaCount += cards[rightPos]
                rightPos--
            }
        } else {
            if (cards[leftPos] > cards[rightPos]) {
                dimaCount += cards[leftPos]
                leftPos++
            } else {
                dimaCount += cards[rightPos]
                rightPos--
            }
        }
        firstMover = !firstMover
    }
    println("$serejaCount $dimaCount")
}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }
fun readLongs() = readStrings().map { it.toLong() }
fun readDoubles() = readStrings().map { it.toDouble() }

fun main() = solve()