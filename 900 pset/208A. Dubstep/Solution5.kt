fun solve() {
    val dubstep = readln()
    val n = dubstep.length
    var i = 0
    val list = mutableListOf<String>()
    val sbWord = StringBuilder()

    while (i < n) {

        if (i + 2 < n && dubstep[i] == 'W' && dubstep[i + 1] == 'U' && dubstep[i + 2] == 'B') {
            if (sbWord.isNotEmpty()) {
                list.add(sbWord.toString())
                sbWord.clear()
            }
            i += 3
        } else {
            sbWord.append(dubstep[i])
            i++
        }
    }
    if (sbWord.isNotEmpty()) {
        list.add(sbWord.toString())
    }

    println(list.joinToString(" "))
}

fun main() = solve()