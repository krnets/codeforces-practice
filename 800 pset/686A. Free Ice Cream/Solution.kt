fun solve() {
    var (n, iceCreamPacks) = readLongs()
    var kidsLeftInDistress = 0

    repeat(n.toInt()) {
        val line = readln()
        val carrierPacks = line.substring(2).toInt()

        if (line.first() == '-') {
            if (carrierPacks <= iceCreamPacks)
                iceCreamPacks -= carrierPacks
            else kidsLeftInDistress++
        } else {
            iceCreamPacks += carrierPacks
        }
    }

    println("$iceCreamPacks $kidsLeftInDistress")
}

fun readStrings() = readln().split(' ')
fun readLongs() = readStrings().map { it.toLong() }

fun main() = solve()