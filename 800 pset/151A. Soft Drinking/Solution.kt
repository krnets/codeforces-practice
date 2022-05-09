fun solve() {
    val input = readInts()
    val friends = input[0]
    val bottles = input[1]
    val milliLiters = input[2]
    val limes = input[3]
    val slices = input[4]
    val needMlPerDrink = input[6]
    val needSaltPerDrink = input[7]

    var totalDrinkMLs = bottles * milliLiters
    var totalLimeSlices = limes * slices
    var totalSaltGams = input[5]
    var ans = 0

    while (true) {
        val drinkMLsPerToast = friends * needMlPerDrink
        val limeSlicesPerToast = friends
        val saltPerToast = friends * needSaltPerDrink

        totalDrinkMLs -= drinkMLsPerToast
        totalLimeSlices -= limeSlicesPerToast
        totalSaltGams -= saltPerToast

        if (totalDrinkMLs >= 0 && totalLimeSlices >= 0 && totalSaltGams >= 0) {
            ans++
        } else break
    }
    println(ans)
}

fun readInt() = readln().toInt()
fun readLong() = readln().toLong()
fun readLines(n: Int) = List(n) { readln() }
fun readStrings() = readln().split(' ')
fun readInts() = readStrings().map { it.toInt() }

fun main() = solve()