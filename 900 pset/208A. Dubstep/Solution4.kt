fun solve() {
    val dubstep = readln()
    val n = dubstep.length
    var i = 0
    val list = mutableListOf<String>()
    val chunk = StringBuilder()

    while (i < n) {

        if (i + 2 < n && dubstep[i] == 'W' && dubstep[i + 1] == 'U' && dubstep[i + 2] == 'B') {
            list.add(chunk.toString())
            chunk.clear()
            i += 3
        } else {
            chunk.append(dubstep[i])
            i++
        }
    }
    list.add(chunk.toString())

    println(list.filterNot { it.isEmpty() }.joinToString(" "))
}

fun main() = solve()